
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,int *,int ,int ) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 void* FUNC_8 (char const*) ;
 char* FUNC_9 (char*,char*) ;

void
FUNC_10(const char *VAR_11)
{
 const char *VAR_12 = FUNC_3("PG_COLOR");
 bool VAR_13 = 0;


 FUNC_5(VAR_10, ((void*)0), VAR_4, 0);

 VAR_6 = FUNC_2(VAR_11);
 VAR_5 = VAR_0;

 if (VAR_12)
 {
  if (FUNC_7(VAR_12, "always") == 0 ||
   (FUNC_7(VAR_12, "auto") == 0 && FUNC_4(FUNC_0(VAR_10))))
   VAR_13 = 1;
 }

 if (VAR_13)
 {
  const char *VAR_14 = FUNC_3("PG_COLORS");

  if (VAR_14)
  {
   char *VAR_15 = FUNC_8(VAR_14);

   if (VAR_15)
   {
    for (char *VAR_16 = FUNC_9(VAR_15, ":"); VAR_16; VAR_16 = FUNC_9(((void*)0), ":"))
    {
     char *VAR_17 = FUNC_6(VAR_16, '=');

     if (VAR_17)
     {
      char *VAR_18;
      char *VAR_19;

      *VAR_17 = '\0';
      VAR_18 = VAR_16;
      VAR_19 = VAR_17 + 1;

      if (FUNC_7(VAR_18, "error") == 0)
       VAR_7 = FUNC_8(VAR_19);
      if (FUNC_7(VAR_18, "warning") == 0)
       VAR_9 = FUNC_8(VAR_19);
      if (FUNC_7(VAR_18, "locus") == 0)
       VAR_8 = FUNC_8(VAR_19);
     }
    }

    FUNC_1(VAR_15);
   }
  }
  else
  {
   VAR_7 = VAR_1;
   VAR_9 = VAR_3;
   VAR_8 = VAR_2;
  }
 }
}
