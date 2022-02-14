
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*,...) ;

void FUNC_3(const char *VAR_0, const char *VAR_1){
  char *VAR_2 = FUNC_2("%s-%s", VAR_0, VAR_1);
  char *VAR_3 = FUNC_2("%s-save", VAR_0);
  char *VAR_4 = FUNC_2("%s-%s-save", VAR_0, VAR_1);

  FUNC_0(VAR_3, VAR_0, 1);
  FUNC_0(VAR_4, VAR_2, 0);

  FUNC_1(VAR_2); FUNC_1(VAR_3); FUNC_1(VAR_4);
}
