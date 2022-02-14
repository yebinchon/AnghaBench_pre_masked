
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mpc_val_t ;
struct TYPE_6__ {int * x; } ;
struct TYPE_7__ {TYPE_1__ lift; } ;
struct TYPE_8__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mpc_parser_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;

mpc_parser_t *FUNC_1(mpc_val_t *VAR_1) {
  mpc_parser_t *VAR_2 = FUNC_0();
  VAR_2->type = VAR_0;
  VAR_2->data.lift.x = VAR_1;
  return VAR_2;
}
