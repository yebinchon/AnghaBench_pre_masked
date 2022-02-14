
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;
typedef int mpc_state_t ;
typedef int mpc_input_t ;
typedef int mpc_ast_t ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static mpc_val_t *FUNC_2(mpc_input_t *VAR_0, int VAR_1, mpc_val_t **VAR_2) {
  mpc_state_t *VAR_3 = ((mpc_state_t**)VAR_2)[0];
  mpc_ast_t *VAR_4 = ((mpc_ast_t**)VAR_2)[1];
  VAR_4 = FUNC_0(VAR_4, *VAR_3);
  FUNC_1(VAR_0, VAR_3);
  (void) VAR_1;
  return VAR_4;
}
