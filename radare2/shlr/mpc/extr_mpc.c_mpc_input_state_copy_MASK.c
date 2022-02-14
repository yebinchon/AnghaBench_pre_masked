
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mpc_state_t ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ mpc_input_t ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static mpc_state_t *FUNC_2(mpc_input_t *VAR_0) {
  mpc_state_t *VAR_1 = FUNC_1(VAR_0, sizeof(mpc_state_t));
  FUNC_0(VAR_1, &VAR_0->state, sizeof(mpc_state_t));
  return VAR_1;
}
