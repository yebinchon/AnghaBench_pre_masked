
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char mpc_val_t ;


 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (char*) ;

mpc_val_t *FUNC_2(mpc_val_t *VAR_0) {
  char *VAR_1 = VAR_0;
  size_t VAR_2 = FUNC_1(VAR_1);
  while (FUNC_0(VAR_1[VAR_2-1])) {
    VAR_1[VAR_2-1] = '\0'; VAR_2--;
  }
  return VAR_1;
}
