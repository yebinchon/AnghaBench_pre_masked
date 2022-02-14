
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {scalar_t__ gcstate; int * grayagain; } ;
typedef TYPE_1__ global_State ;
struct TYPE_8__ {int * gclist; } ;
typedef TYPE_2__ Table ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (TYPE_2__*) ;

void FUNC_6 (lua_State *VAR_2, Table *VAR_3) {
  global_State *VAR_4 = FUNC_0(VAR_2);
  GCObject *VAR_5 = FUNC_5(VAR_3);
  FUNC_4(FUNC_2(VAR_5) && !FUNC_3(VAR_4, VAR_5));
  FUNC_4(VAR_4->gcstate != VAR_0 && VAR_4->gcstate != VAR_1);
  FUNC_1(VAR_5);
  VAR_3->gclist = VAR_4->grayagain;
  VAR_4->grayagain = VAR_5;
}
