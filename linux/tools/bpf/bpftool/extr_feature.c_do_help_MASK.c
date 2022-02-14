
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ,char*,char*,char*,char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(int VAR_4, char **VAR_5)
{
 if (VAR_1) {
  FUNC_1(VAR_2);
  return 0;
 }

 FUNC_0(VAR_3,
  "Usage: %s %s probe [COMPONENT] [macros [prefix PREFIX]]\n"
  "       %s %s help\n"
  "\n"
  "       COMPONENT := { kernel | dev NAME }\n"
  "",
  VAR_0, VAR_5[-2], VAR_0, VAR_5[-2]);

 return 0;
}
