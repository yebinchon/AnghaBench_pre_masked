
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int * openupval; } ;
typedef TYPE_2__ lua_State ;
typedef int global_State ;
struct TYPE_14__ {int value; } ;
struct TYPE_16__ {scalar_t__ v; TYPE_1__ u; int * next; } ;
typedef TYPE_3__ UpVal ;
typedef scalar_t__ StkId ;
typedef int GCObject ;


 int * FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(lua_State*VAR_0,StkId VAR_1){
UpVal*VAR_2;
global_State*VAR_3=FUNC_0(VAR_0);
while(VAR_0->openupval!=((void*)0)&&(VAR_2=FUNC_4(VAR_0->openupval))->v>=VAR_1){
GCObject*VAR_4=FUNC_5(VAR_2);
VAR_0->openupval=VAR_2->next;
if(FUNC_1(VAR_3,VAR_4))
FUNC_3(VAR_0,VAR_2);
else{
FUNC_7(VAR_2);
FUNC_6(VAR_0,&VAR_2->u.value,VAR_2->v);
VAR_2->v=&VAR_2->u.value;
FUNC_2(VAR_0,VAR_2);
}
}
}
