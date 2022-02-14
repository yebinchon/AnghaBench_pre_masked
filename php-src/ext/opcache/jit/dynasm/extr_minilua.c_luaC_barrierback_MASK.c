
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {int * grayagain; } ;
typedef TYPE_1__ global_State ;
struct TYPE_7__ {int * gclist; } ;
typedef TYPE_2__ Table ;
typedef int GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(lua_State*VAR_0,Table*VAR_1){
global_State*VAR_2=FUNC_0(VAR_0);
GCObject*VAR_3=FUNC_2(VAR_1);
FUNC_1(VAR_3);
VAR_1->gclist=VAR_2->grayagain;
VAR_2->grayagain=VAR_3;
}
