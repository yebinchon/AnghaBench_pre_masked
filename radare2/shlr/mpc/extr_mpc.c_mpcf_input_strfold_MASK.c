
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;
typedef int mpc_input_t ;


 int * FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static mpc_val_t *FUNC_5(mpc_input_t *VAR_0, int VAR_1, mpc_val_t **VAR_2) {
  int VAR_3;
  size_t VAR_4 = 0;
  if (VAR_1 == 0) { return FUNC_0(VAR_0, 1, 1); }
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) { VAR_4 += FUNC_4(VAR_2[VAR_3]); }
  VAR_2[0] = FUNC_2(VAR_0, VAR_2[0], VAR_4 + 1);
  for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) { FUNC_3(VAR_2[0], VAR_2[VAR_3]); FUNC_1(VAR_0, VAR_2[VAR_3]); }
  return VAR_2[0];
}
