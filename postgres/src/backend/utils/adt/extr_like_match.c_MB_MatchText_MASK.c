
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_locale_t ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (char const) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_5, int VAR_6, const char *VAR_7, int VAR_8,
    pg_locale_t VAR_9, bool VAR_10)
{

 if (VAR_8 == 1 && *VAR_7 == '%')
  return VAR_4;


 FUNC_3();
 while (VAR_6 > 0 && VAR_8 > 0)
 {
  if (*VAR_7 == '\\')
  {

   FUNC_1(VAR_7, VAR_8);

   if (VAR_8 <= 0)
    FUNC_4(VAR_1,
      (FUNC_5(VAR_0),
       FUNC_6("LIKE pattern must not end with escape character")));
   if (FUNC_0(*VAR_7) != FUNC_0(*VAR_5))
    return VAR_3;
  }
  else if (*VAR_7 == '%')
  {
   char VAR_11;
   FUNC_1(VAR_7, VAR_8);

   while (VAR_8 > 0)
   {
    if (*VAR_7 == '%')
     FUNC_1(VAR_7, VAR_8);
    else if (*VAR_7 == '_')
    {

     if (VAR_6 <= 0)
      return VAR_2;
     FUNC_2(VAR_5, VAR_6);
     FUNC_1(VAR_7, VAR_8);
    }
    else
     break;
   }





   if (VAR_8 <= 0)
    return VAR_4;
   if (*VAR_7 == '\\')
   {
    if (VAR_8 < 2)
     FUNC_4(VAR_1,
       (FUNC_5(VAR_0),
        FUNC_6("LIKE pattern must not end with escape character")));
    VAR_11 = FUNC_0(VAR_7[1]);
   }
   else
    VAR_11 = FUNC_0(*VAR_7);

   while (VAR_6 > 0)
   {
    if (FUNC_0(*VAR_5) == VAR_11)
    {
     int VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8,
             VAR_9, VAR_10);

     if (VAR_12 != VAR_3)
      return VAR_12;
    }

    FUNC_2(VAR_5, VAR_6);
   }





   return VAR_2;
  }
  else if (*VAR_7 == '_')
  {

   FUNC_2(VAR_5, VAR_6);
   FUNC_1(VAR_7, VAR_8);
   continue;
  }
  else if (FUNC_0(*VAR_7) != FUNC_0(*VAR_5))
  {

   return VAR_3;
  }
  FUNC_1(VAR_5, VAR_6);
  FUNC_1(VAR_7, VAR_8);
 }

 if (VAR_6 > 0)
  return VAR_3;





 while (VAR_8 > 0 && *VAR_7 == '%')
  FUNC_1(VAR_7, VAR_8);
 if (VAR_8 <= 0)
  return VAR_4;





 return VAR_2;
}
