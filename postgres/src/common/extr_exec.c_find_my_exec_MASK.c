
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int * FUNC_6 (char const*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (char*,char*,char const*) ;
 int FUNC_12 (int ,int ,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

int
FUNC_16(const char *VAR_3, char *VAR_4)
{
 char VAR_5[VAR_2],
    VAR_6[VAR_2];
 char *VAR_7;

 if (!FUNC_8(VAR_5, VAR_2))
 {
  FUNC_12(FUNC_5(),
      FUNC_2("could not identify current directory: %m"));
  return -1;
 }




 if (FUNC_6(VAR_3) != ((void*)0))
 {
  if (FUNC_10(VAR_3))
   FUNC_1(VAR_4, VAR_3, VAR_2);
  else
   FUNC_11(VAR_4, VAR_5, VAR_3);
  FUNC_3(VAR_4);

  if (FUNC_15(VAR_4) == 0)
   return FUNC_13(VAR_4);

  FUNC_12(FUNC_4(VAR_1),
      FUNC_2("invalid binary \"%s\""), VAR_4);
  return -1;
 }
 if ((VAR_7 = FUNC_9("PATH")) && *VAR_7)
 {
  char *VAR_8 = ((void*)0),
       *VAR_9 = ((void*)0);

  do
  {
   if (!VAR_8)
    VAR_8 = VAR_7;
   else
    VAR_8 = VAR_9 + 1;

   VAR_9 = FUNC_7(VAR_8);
   if (!VAR_9)
    VAR_9 = VAR_8 + FUNC_14(VAR_8);

   FUNC_1(VAR_6, VAR_8, FUNC_0(VAR_9 - VAR_8 + 1, VAR_2));

   if (FUNC_10(VAR_6))
    FUNC_11(VAR_4, VAR_6, VAR_3);
   else
   {
    FUNC_11(VAR_4, VAR_5, VAR_6);
    FUNC_11(VAR_4, VAR_4, VAR_3);
   }
   FUNC_3(VAR_4);

   switch (FUNC_15(VAR_4))
   {
    case 0:
     return FUNC_13(VAR_4);
    case -1:
     break;
    case -2:
     FUNC_12(FUNC_4(VAR_1),
         FUNC_2("could not read binary \"%s\""),
         VAR_4);
     break;
   }
  } while (*VAR_9);
 }

 FUNC_12(FUNC_4(VAR_0),
     FUNC_2("could not find a \"%s\" to execute"), VAR_3);
 return -1;
}
