
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int m; } ;
struct TYPE_7__ {TYPE_1__ fail; } ;
struct TYPE_8__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mpc_parser_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

mpc_parser_t *FUNC_4(const char *VAR_1) {
  mpc_parser_t *VAR_2 = FUNC_1();
  VAR_2->type = VAR_0;
  VAR_2->data.fail.m = FUNC_0(FUNC_3(VAR_1) + 1);
  FUNC_2(VAR_2->data.fail.m, VAR_1);
  return VAR_2;
}
