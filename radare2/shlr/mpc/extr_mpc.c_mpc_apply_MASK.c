
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int f; TYPE_3__* x; } ;
struct TYPE_8__ {TYPE_1__ apply; } ;
struct TYPE_9__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mpc_parser_t ;
typedef int mpc_apply_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;

mpc_parser_t *FUNC_1(mpc_parser_t *VAR_1, mpc_apply_t VAR_2) {
  mpc_parser_t *VAR_3 = FUNC_0();
  VAR_3->type = VAR_0;
  VAR_3->data.apply.x = VAR_1;
  VAR_3->data.apply.f = VAR_2;
  return VAR_3;
}
