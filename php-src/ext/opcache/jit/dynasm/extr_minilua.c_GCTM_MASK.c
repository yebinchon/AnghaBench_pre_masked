
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_23__ {int allowhook; scalar_t__ top; } ;
typedef TYPE_4__ lua_State ;
typedef int lu_mem ;
typedef int lu_byte ;
struct TYPE_24__ {int GCthreshold; int totalbytes; TYPE_2__* mainthread; TYPE_7__* tmudata; } ;
typedef TYPE_5__ global_State ;
struct TYPE_22__ {int metatable; TYPE_7__* next; } ;
struct TYPE_25__ {TYPE_3__ uv; } ;
typedef TYPE_6__ Udata ;
struct TYPE_20__ {TYPE_7__* next; } ;
struct TYPE_26__ {TYPE_1__ gch; } ;
struct TYPE_21__ {TYPE_7__* next; } ;
typedef int TValue ;
typedef TYPE_7__ GCObject ;


 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_7__*) ;
 TYPE_6__* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int const*) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,TYPE_6__*) ;

__attribute__((used)) static void FUNC_7(lua_State*VAR_1){
global_State*VAR_2=FUNC_0(VAR_1);
GCObject*VAR_3=VAR_2->tmudata->gch.next;
Udata*VAR_4=FUNC_4(VAR_3);
const TValue*VAR_5;
if(VAR_3==VAR_2->tmudata)
VAR_2->tmudata=((void*)0);
else
VAR_2->tmudata->gch.next=VAR_4->uv.next;
VAR_4->uv.next=VAR_2->mainthread->next;
VAR_2->mainthread->next=VAR_3;
FUNC_3(VAR_2,VAR_3);
VAR_5=FUNC_1(VAR_1,VAR_4->uv.metatable,VAR_0);
if(VAR_5!=((void*)0)){
lu_byte VAR_6=VAR_1->allowhook;
lu_mem VAR_7=VAR_2->GCthreshold;
VAR_1->allowhook=0;
VAR_2->GCthreshold=2*VAR_2->totalbytes;
FUNC_5(VAR_1,VAR_1->top,VAR_5);
FUNC_6(VAR_1,VAR_1->top+1,VAR_4);
VAR_1->top+=2;
FUNC_2(VAR_1,VAR_1->top-2,0);
VAR_1->allowhook=VAR_6;
VAR_2->GCthreshold=VAR_7;
}
}
