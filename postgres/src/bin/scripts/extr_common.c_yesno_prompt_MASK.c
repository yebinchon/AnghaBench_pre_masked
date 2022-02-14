
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int resp ;
typedef int prompt ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*,char*,int,int) ;
 int FUNC_3 (char*,int,char*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

bool
FUNC_5(const char *VAR_2)
{
 char VAR_3[256];




 FUNC_3(VAR_3, sizeof(VAR_3), FUNC_0("%s (%s/%s) "),
    FUNC_0(VAR_2), FUNC_0(VAR_1), FUNC_0(VAR_0));

 for (;;)
 {
  char VAR_4[10];

  FUNC_2(VAR_3, VAR_4, sizeof(VAR_4), 1);

  if (FUNC_4(VAR_4, FUNC_0(VAR_1)) == 0)
   return 1;
  if (FUNC_4(VAR_4, FUNC_0(VAR_0)) == 0)
   return 0;

  FUNC_1(FUNC_0("Please answer \"%s\" or \"%s\".\n"),
      FUNC_0(VAR_1), FUNC_0(VAR_0));
 }
}
