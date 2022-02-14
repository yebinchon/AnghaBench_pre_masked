
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_input_t ;
typedef int mpc_err_t ;


 int * FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static mpc_err_t *FUNC_5(mpc_input_t *VAR_0, mpc_err_t *VAR_1, int VAR_2) {
  mpc_err_t *VAR_3;
  int VAR_4 = VAR_2/10 + 1;
  char *VAR_5;
  VAR_5 = FUNC_2(VAR_0, VAR_4 + FUNC_4(" of ") + 1);
  FUNC_3(VAR_5, "%i of ", VAR_2);
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_5);
  FUNC_1(VAR_0, VAR_5);
  return VAR_3;
}
