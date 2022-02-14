
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;
typedef int mpc_state_t ;
typedef int mpc_ast_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;

mpc_val_t *FUNC_2(int VAR_0, mpc_val_t **VAR_1) {
  mpc_state_t *VAR_2 = ((mpc_state_t**)VAR_1)[0];
  mpc_ast_t *VAR_3 = ((mpc_ast_t**)VAR_1)[1];
  (void)VAR_0;
  VAR_3 = FUNC_1(VAR_3, *VAR_2);
  FUNC_0(VAR_2);
  return VAR_3;
}
