
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int error; int output; } ;
typedef TYPE_1__ mpc_result_t ;
typedef int mpc_parser_t ;
typedef int mpc_input_t ;
struct TYPE_10__ {int state; } ;
typedef TYPE_2__ mpc_err_t ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_2__* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,TYPE_1__*,TYPE_2__**) ;
 int FUNC_6 () ;

int FUNC_7(mpc_input_t *VAR_0, mpc_parser_t *VAR_1, mpc_result_t *VAR_2) {
  int VAR_3;
  mpc_err_t *VAR_4 = FUNC_2(VAR_0, "Unknown Error");
  VAR_4->state = FUNC_6();
  VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_4);
  if (VAR_3) {
    FUNC_0(VAR_0, VAR_4);
    VAR_2->output = FUNC_4(VAR_0, VAR_2->output);
  } else {
    VAR_2->error = FUNC_1(VAR_0, FUNC_3(VAR_0, VAR_4, VAR_2->error));
  }
  return VAR_3;
}
