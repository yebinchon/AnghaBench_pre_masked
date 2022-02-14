
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,char) ;
 int FUNC_5 (char*,char const*) ;
 unsigned int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char,char,int) ;
 int FUNC_8 (char const*) ;
 unsigned int FUNC_9 (char*,char const*) ;

char *
FUNC_10(const char *VAR_0,
  const char *VAR_1,
  const char *VAR_2,
  const char *VAR_3,
  char VAR_4,
  bool VAR_5,
  bool VAR_6,
  int VAR_7)
{
 static char *VAR_8 = ((void*)0);

 static char *VAR_9 = ((void*)0);



 unsigned int VAR_10;
 char *VAR_11;
 char *VAR_12;

 if (VAR_0)
 {
  FUNC_1(VAR_8);






  VAR_8 = FUNC_3(2 * FUNC_8(VAR_0) + 1);
  FUNC_5(VAR_8, VAR_0);
  VAR_9 = VAR_8;
 }

 if (!VAR_8)
  return ((void*)0);


 VAR_10 = FUNC_9(VAR_9, VAR_1);
 VAR_11 = &VAR_9[VAR_10];


 if (*VAR_11 == '\0')
 {

  FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
  VAR_9 = ((void*)0);
  return ((void*)0);
 }


 if (VAR_2 && FUNC_4(VAR_2, *VAR_11))
 {







  VAR_12 = VAR_11 + 1;
  if (*VAR_12 != '\0')
  {
   if (!FUNC_4(VAR_1, *VAR_12))
    FUNC_2(VAR_12 + 1, VAR_12, FUNC_8(VAR_12) + 1);
   *VAR_12 = '\0';
   VAR_9 = VAR_12 + 1;
  }
  else
  {

   VAR_9 = VAR_12;
  }

  return VAR_11;
 }


 VAR_12 = VAR_11;
 if (VAR_5 &&
  (*VAR_12 == 'E' || *VAR_12 == 'e') &&
  VAR_12[1] == '\'')
 {
  VAR_3 = "'";
  VAR_4 = '\\';
  VAR_12++;
 }


 if (VAR_3 && FUNC_4(VAR_3, *VAR_12))
 {

  char VAR_13 = *VAR_12++;

  for (; *VAR_12; VAR_12 += FUNC_0(VAR_12, VAR_7))
  {
   if (*VAR_12 == VAR_4 && VAR_12[1] != '\0')
    VAR_12++;
   else if (*VAR_12 == VAR_13 && VAR_12[1] == VAR_13)
    VAR_12++;
   else if (*VAR_12 == VAR_13)
   {
    VAR_12++;
    break;
   }
  }





  if (*VAR_12 != '\0')
  {
   if (!FUNC_4(VAR_1, *VAR_12))
    FUNC_2(VAR_12 + 1, VAR_12, FUNC_8(VAR_12) + 1);
   *VAR_12 = '\0';
   VAR_9 = VAR_12 + 1;
  }
  else
  {

   VAR_9 = VAR_12;
  }


  if (VAR_6)
   FUNC_7(VAR_11, VAR_13, VAR_4, VAR_7);

  return VAR_11;
 }






 VAR_10 = FUNC_6(VAR_11, VAR_1);

 if (VAR_2)
 {
  unsigned int VAR_14 = FUNC_6(VAR_11, VAR_2);

  if (VAR_10 > VAR_14)
   VAR_10 = VAR_14;
 }

 if (VAR_3)
 {
  unsigned int VAR_15 = FUNC_6(VAR_11, VAR_3);

  if (VAR_10 > VAR_15)
   VAR_10 = VAR_15;
 }

 VAR_12 = VAR_11 + VAR_10;





 if (*VAR_12 != '\0')
 {
  if (!FUNC_4(VAR_1, *VAR_12))
   FUNC_2(VAR_12 + 1, VAR_12, FUNC_8(VAR_12) + 1);
  *VAR_12 = '\0';
  VAR_9 = VAR_12 + 1;
 }
 else
 {

  VAR_9 = VAR_12;
 }

 return VAR_11;
}
