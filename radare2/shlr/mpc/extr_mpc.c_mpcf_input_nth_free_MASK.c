
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;
typedef int mpc_input_t ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static mpc_val_t *FUNC_1(mpc_input_t *VAR_0, int VAR_1, mpc_val_t **VAR_2, int VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) { if (VAR_4 != VAR_3) { FUNC_0(VAR_0, VAR_2[VAR_4]); } }
  return VAR_2[VAR_3];
}
