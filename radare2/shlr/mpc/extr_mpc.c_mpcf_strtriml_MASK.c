
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char mpc_val_t ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*) ;

mpc_val_t *FUNC_3(mpc_val_t *VAR_0) {
  char *VAR_1 = VAR_0;
  while (FUNC_0(*VAR_1)) {
    FUNC_1(VAR_1, VAR_1+1, FUNC_2(VAR_1));
  }
  return VAR_1;
}
