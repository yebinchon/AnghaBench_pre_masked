
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,size_t) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (char*,char*,char*,char const*) ;
 int VAR_5 ;
 char* FUNC_12 (char const*) ;
 char* FUNC_13 (int) ;
 int FUNC_14 (char const*) ;

char *
FUNC_15(const char *VAR_6)
{
 char *VAR_7;


 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (!FUNC_9(VAR_6))
 {
  char *VAR_8;
  size_t VAR_9;

  VAR_9 = VAR_3;
  for (;;)
  {
   VAR_8 = FUNC_10(VAR_9);
   if (!VAR_8)
   {

    FUNC_3(VAR_2,
      (FUNC_4(VAR_1),
       FUNC_5("out of memory")));




   }

   if (FUNC_8(VAR_8, VAR_9))
    break;
   else if (VAR_4 == VAR_0)
   {
    FUNC_7(VAR_8);
    VAR_9 *= 2;
    continue;
   }
   else
   {
    int VAR_10 = VAR_4;

    FUNC_7(VAR_8);
    VAR_4 = VAR_10;

    FUNC_2(VAR_2, "could not get current working directory: %m");





   }
  }

  VAR_7 = FUNC_10(FUNC_14(VAR_8) + FUNC_14(VAR_6) + 2);
  if (!VAR_7)
  {
   FUNC_7(VAR_8);

   FUNC_3(VAR_2,
     (FUNC_4(VAR_1),
      FUNC_5("out of memory")));




  }
  FUNC_11(VAR_7, "%s/%s", VAR_8, VAR_6);
  FUNC_7(VAR_8);
 }
 else
 {
  VAR_7 = FUNC_12(VAR_6);
  if (!VAR_7)
  {

   FUNC_3(VAR_2,
     (FUNC_4(VAR_1),
      FUNC_5("out of memory")));




  }
 }


 FUNC_1(VAR_7);

 return VAR_7;
}
