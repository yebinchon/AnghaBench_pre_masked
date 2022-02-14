
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;

mpc_val_t *FUNC_5(int VAR_0, mpc_val_t **VAR_1) {
  int VAR_2;
  size_t VAR_3 = 0;

  if (VAR_0 == 0) { return FUNC_0(1, 1); }

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) { VAR_3 += FUNC_4(VAR_1[VAR_2]); }

  VAR_1[0] = FUNC_2(VAR_1[0], VAR_3 + 1);

  for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
    FUNC_3(VAR_1[0], VAR_1[VAR_2]); FUNC_1(VAR_1[VAR_2]);
  }

  return VAR_1[0];
}
