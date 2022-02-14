
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_input_t ;


 int FUNC_0 (int *,char) ;
 char FUNC_1 (int *) ;
 int FUNC_2 (int *,char,char**) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char) ;

__attribute__((used)) static int FUNC_5(mpc_input_t *VAR_0, const char *VAR_1, char **VAR_2) {
  char VAR_3 = FUNC_1(VAR_0);
  if (FUNC_3(VAR_0)) { return 0; }
  return FUNC_4(VAR_1, VAR_3) == 0 ? FUNC_2(VAR_0, VAR_3, VAR_2) : FUNC_0(VAR_0, VAR_3);
}
