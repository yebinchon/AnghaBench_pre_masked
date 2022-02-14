
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_byte ;
struct TYPE_8__ {TYPE_3__* rootgc; } ;
typedef TYPE_2__ global_State ;
struct TYPE_7__ {int tt; int marked; TYPE_3__* next; } ;
struct TYPE_9__ {TYPE_1__ gch; } ;
typedef TYPE_3__ GCObject ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(lua_State*VAR_0,GCObject*VAR_1,lu_byte VAR_2){
global_State*VAR_3=FUNC_0(VAR_0);
VAR_1->gch.next=VAR_3->rootgc;
VAR_3->rootgc=VAR_1;
VAR_1->gch.marked=FUNC_1(VAR_3);
VAR_1->gch.tt=VAR_2;
}
