
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int x; } ;
struct TYPE_9__ {TYPE_1__ string; } ;
struct TYPE_10__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mpc_parser_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,char*,char const*) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

mpc_parser_t *FUNC_5(const char *VAR_1) {
  mpc_parser_t *VAR_2 = FUNC_2();
  VAR_2->type = VAR_0;
  VAR_2->data.string.x = FUNC_0(FUNC_4(VAR_1) + 1);
  FUNC_3(VAR_2->data.string.x, VAR_1);
  return FUNC_1(VAR_2, "one of '%s'", VAR_1);
}
