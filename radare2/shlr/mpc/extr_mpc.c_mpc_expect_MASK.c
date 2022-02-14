
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int m; TYPE_3__* x; } ;
struct TYPE_8__ {TYPE_1__ expect; } ;
struct TYPE_9__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mpc_parser_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

mpc_parser_t *FUNC_4(mpc_parser_t *VAR_1, const char *VAR_2) {
  mpc_parser_t *VAR_3 = FUNC_1();
  VAR_3->type = VAR_0;
  VAR_3->data.expect.x = VAR_1;
  VAR_3->data.expect.m = FUNC_0(FUNC_3(VAR_2) + 1);
  FUNC_2(VAR_3->data.expect.m, VAR_2);
  return VAR_3;
}
