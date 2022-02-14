
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char x; } ;
struct TYPE_9__ {TYPE_1__ single; } ;
struct TYPE_10__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mpc_parser_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,char*,char) ;
 TYPE_3__* FUNC_1 () ;

mpc_parser_t *FUNC_2(char VAR_1) {
  mpc_parser_t *VAR_2 = FUNC_1();
  VAR_2->type = VAR_0;
  VAR_2->data.single.x = VAR_1;
  return FUNC_0(VAR_2, "'%c'", VAR_1);
}
