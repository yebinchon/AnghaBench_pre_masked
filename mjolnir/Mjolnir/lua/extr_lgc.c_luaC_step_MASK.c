
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
typedef scalar_t__ lu_mem ;
typedef int l_mem ;
struct TYPE_6__ {scalar_t__ gcstate; int gcstepmul; int gcrunning; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;

void FUNC_6 (lua_State *VAR_3) {
  global_State *VAR_4 = FUNC_0(VAR_3);
  l_mem VAR_5 = FUNC_1(VAR_4);
  if (!VAR_4->gcrunning) {
    FUNC_2(VAR_4, -VAR_0 * 10);
    return;
  }
  do {
    lu_mem VAR_6 = FUNC_5(VAR_3);
    VAR_5 -= VAR_6;
  } while (VAR_5 > -VAR_0 && VAR_4->gcstate != VAR_1);
  if (VAR_4->gcstate == VAR_1)
    FUNC_4(VAR_4);
  else {
    VAR_5 = (VAR_5 / VAR_4->gcstepmul) * VAR_2;
    FUNC_2(VAR_4, VAR_5);
    FUNC_3(VAR_3);
  }
}
