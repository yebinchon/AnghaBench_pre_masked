
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char x; char y; } ;
struct TYPE_9__ {TYPE_1__ range; } ;
struct TYPE_10__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mpc_parser_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,char*,char,char) ;
 TYPE_3__* FUNC_1 () ;

mpc_parser_t *FUNC_2(char VAR_1, char VAR_2) {
  mpc_parser_t *VAR_3 = FUNC_1();
  VAR_3->type = VAR_0;
  VAR_3->data.range.x = VAR_1;
  VAR_3->data.range.y = VAR_2;
  return FUNC_0(VAR_3, "character between '%c' and '%c'", VAR_1, VAR_2);
}
