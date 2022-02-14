
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ gcstate; int * weak; int * grayagain; int * gray; int rootgc; int * sweepgc; scalar_t__ sweepstrgc; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

void FUNC_5 (lua_State *VAR_5) {
  global_State *VAR_6 = FUNC_0(VAR_5);
  if (VAR_6->gcstate <= VAR_2) {

    VAR_6->sweepstrgc = 0;
    VAR_6->sweepgc = &VAR_6->rootgc;

    VAR_6->gray = ((void*)0);
    VAR_6->grayagain = ((void*)0);
    VAR_6->weak = ((void*)0);
    VAR_6->gcstate = VAR_4;
  }
  FUNC_1(VAR_6->gcstate != VAR_1 && VAR_6->gcstate != VAR_2);

  while (VAR_6->gcstate != VAR_0) {
    FUNC_1(VAR_6->gcstate == VAR_4 || VAR_6->gcstate == VAR_3);
    FUNC_4(VAR_5);
  }
  FUNC_2(VAR_5);
  while (VAR_6->gcstate != VAR_1) {
    FUNC_4(VAR_5);
  }
  FUNC_3(VAR_6);
}
