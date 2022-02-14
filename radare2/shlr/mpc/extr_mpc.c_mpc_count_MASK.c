
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int n; int dx; TYPE_3__* x; int f; } ;
struct TYPE_7__ {TYPE_2__ repeat; } ;
struct TYPE_9__ {TYPE_1__ data; int type; } ;
typedef TYPE_3__ mpc_parser_t ;
typedef int mpc_fold_t ;
typedef int mpc_dtor_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;

mpc_parser_t *FUNC_1(int VAR_1, mpc_fold_t VAR_2, mpc_parser_t *VAR_3, mpc_dtor_t VAR_4) {
  mpc_parser_t *VAR_5 = FUNC_0();
  VAR_5->type = VAR_0;
  VAR_5->data.repeat.n = VAR_1;
  VAR_5->data.repeat.f = VAR_2;
  VAR_5->data.repeat.x = VAR_3;
  VAR_5->data.repeat.dx = VAR_4;
  return VAR_5;
}
