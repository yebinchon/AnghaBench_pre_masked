
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_val_t ;
typedef int mpc_input_t ;
typedef int * (* mpc_apply_to_t ) (int ,int *) ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static mpc_val_t *FUNC_1(mpc_input_t *VAR_0, mpc_apply_to_t VAR_1, mpc_val_t *VAR_2, mpc_val_t *VAR_3) {
  return VAR_1(FUNC_0(VAR_0, VAR_2), VAR_3);
}
