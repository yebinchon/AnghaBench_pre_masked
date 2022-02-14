
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; int type; scalar_t__ retained; } ;
typedef TYPE_1__ mpc_parser_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static mpc_parser_t *FUNC_1(void) {
  mpc_parser_t *VAR_1 = FUNC_0(1, sizeof(mpc_parser_t));
  VAR_1->retained = 0;
  VAR_1->type = VAR_0;
  VAR_1->name = ((void*)0);
  return VAR_1;
}
