
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {scalar_t__ totalbytes; scalar_t__ estimate; int gcstate; int rootgc; int * sweepgc; scalar_t__ sweepstrgc; int currentwhite; int * weak; int * grayagain; int * gray; int mainthread; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_13 (lua_State *VAR_1) {
  global_State *VAR_2 = FUNC_0(VAR_1);
  size_t VAR_3;

  FUNC_12(VAR_2);

  FUNC_11(VAR_2);

  VAR_2->gray = VAR_2->weak;
  VAR_2->weak = ((void*)0);
  FUNC_5(!FUNC_3(FUNC_9(VAR_2->mainthread)));
  FUNC_7(VAR_2, VAR_1);
  FUNC_6(VAR_2);
  FUNC_11(VAR_2);

  VAR_2->gray = VAR_2->grayagain;
  VAR_2->grayagain = ((void*)0);
  FUNC_11(VAR_2);
  VAR_3 = FUNC_4(VAR_1, 0);
  FUNC_8(VAR_2);
  VAR_3 += FUNC_11(VAR_2);
  FUNC_2(VAR_2->weak);

  VAR_2->currentwhite = FUNC_1(FUNC_10(VAR_2));
  VAR_2->sweepstrgc = 0;
  VAR_2->sweepgc = &VAR_2->rootgc;
  VAR_2->gcstate = VAR_0;
  VAR_2->estimate = VAR_2->totalbytes - VAR_3;
}
