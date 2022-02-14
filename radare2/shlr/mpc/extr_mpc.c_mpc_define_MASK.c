
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; int type; scalar_t__ retained; } ;
typedef TYPE_1__ mpc_parser_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char*) ;

mpc_parser_t *FUNC_2(mpc_parser_t *VAR_0, mpc_parser_t *VAR_1) {

  if (VAR_0->retained) {
    VAR_0->type = VAR_1->type;
    VAR_0->data = VAR_1->data;
  } else {
    mpc_parser_t *VAR_2 = FUNC_1("Attempt to assign to Unretained Parser!");
    VAR_0->type = VAR_2->type;
    VAR_0->data = VAR_2->data;
    FUNC_0(VAR_2);
  }

  FUNC_0(VAR_1);
  return VAR_0;
}
