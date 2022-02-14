
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_11__ {TYPE_1__* p; } ;
struct TYPE_13__ {TYPE_2__ l; } ;
struct TYPE_12__ {scalar_t__ tailcalls; } ;
struct TYPE_10__ {int * code; } ;
typedef int Instruction ;
typedef TYPE_3__ CallInfo ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_8__* FUNC_2 (TYPE_3__*) ;
 size_t FUNC_3 (int *,TYPE_3__*) ;
 char const* FUNC_4 (int *,TYPE_3__*,int ,char const**) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static const char *FUNC_6 (lua_State *VAR_3, CallInfo *VAR_4, const char **VAR_5) {
  Instruction VAR_6;
  if ((FUNC_5(VAR_4) && VAR_4->tailcalls > 0) || !FUNC_5(VAR_4 - 1))
    return ((void*)0);
  VAR_4--;
  VAR_6 = FUNC_2(VAR_4)->l.p->code[FUNC_3(VAR_3, VAR_4)];
  if (FUNC_1(VAR_6) == VAR_0 || FUNC_1(VAR_6) == VAR_1 ||
      FUNC_1(VAR_6) == VAR_2)
    return FUNC_4(VAR_3, VAR_4, FUNC_0(VAR_6), VAR_5);
  else
    return ((void*)0);
}
