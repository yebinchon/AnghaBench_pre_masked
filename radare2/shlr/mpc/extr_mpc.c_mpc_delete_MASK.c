
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* name; scalar_t__ retained; } ;
typedef TYPE_1__ mpc_parser_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(mpc_parser_t *VAR_1) {
  if (VAR_1->retained) {

    if (VAR_1->type != VAR_0) {
      FUNC_1(VAR_1, 0);
    }

    FUNC_0(VAR_1->name);
    FUNC_0(VAR_1);

  } else {
    FUNC_1(VAR_1, 0);
  }
}
