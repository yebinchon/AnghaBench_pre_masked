
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {int gcstate; int mainthread; int * weak; int * grayagain; int * gray; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_1) {
  global_State *VAR_2 = FUNC_0(VAR_1);
  VAR_2->gray = ((void*)0);
  VAR_2->grayagain = ((void*)0);
  VAR_2->weak = ((void*)0);
  FUNC_3(VAR_2, VAR_2->mainthread);

  FUNC_4(VAR_2, FUNC_1(VAR_2->mainthread));
  FUNC_4(VAR_2, FUNC_5(VAR_1));
  FUNC_2(VAR_2);
  VAR_2->gcstate = VAR_0;
}
