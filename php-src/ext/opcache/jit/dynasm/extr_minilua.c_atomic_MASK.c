
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {int gcstate; scalar_t__ totalbytes; scalar_t__ estimate; int rootgc; int * sweepgc; scalar_t__ sweepstrgc; int currentwhite; int * weak; int * grayagain; int * gray; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(lua_State*VAR_0){
global_State*VAR_1=FUNC_0(VAR_0);
size_t VAR_2;
FUNC_9(VAR_1);
FUNC_8(VAR_1);
VAR_1->gray=VAR_1->weak;
VAR_1->weak=((void*)0);
FUNC_5(VAR_1,VAR_0);
FUNC_4(VAR_1);
FUNC_8(VAR_1);
VAR_1->gray=VAR_1->grayagain;
VAR_1->grayagain=((void*)0);
FUNC_8(VAR_1);
VAR_2=FUNC_3(VAR_0,0);
FUNC_6(VAR_1);
VAR_2+=FUNC_8(VAR_1);
FUNC_2(VAR_1->weak);
VAR_1->currentwhite=FUNC_1(FUNC_7(VAR_1));
VAR_1->sweepstrgc=0;
VAR_1->sweepgc=&VAR_1->rootgc;
VAR_1->gcstate=2;
VAR_1->estimate=VAR_1->totalbytes-VAR_2;
}
