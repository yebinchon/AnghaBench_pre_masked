
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;

mpc_val_t *FUNC_2(int VAR_0, mpc_val_t **VAR_1) {
  int **VAR_2 = (int**)VAR_1;
  (void) VAR_0;

  if (FUNC_1(VAR_1[1], "*") == 0) { *VAR_2[0] *= *VAR_2[2]; }
  if (FUNC_1(VAR_1[1], "/") == 0) { *VAR_2[0] /= *VAR_2[2]; }
  if (FUNC_1(VAR_1[1], "%") == 0) { *VAR_2[0] %= *VAR_2[2]; }
  if (FUNC_1(VAR_1[1], "+") == 0) { *VAR_2[0] += *VAR_2[2]; }
  if (FUNC_1(VAR_1[1], "-") == 0) { *VAR_2[0] -= *VAR_2[2]; }

  FUNC_0(VAR_1[1]); FUNC_0(VAR_1[2]);

  return VAR_1[0];
}
