
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int **** mpca_stmt_t ;
typedef int ***** mpc_val_t ;


 int ****** FUNC_0 (int) ;

__attribute__((used)) static mpc_val_t *FUNC_1(int VAR_0, mpc_val_t **VAR_1) {

  int VAR_2;
  mpca_stmt_t **VAR_3 = FUNC_0(sizeof(mpca_stmt_t*) * (VAR_0+1));

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
    VAR_3[VAR_2] = *VAR_1[VAR_2];
  }
  VAR_3[VAR_0] = ((void*)0);

  return VAR_3;
}
