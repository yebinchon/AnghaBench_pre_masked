
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * stack; int * base; TYPE_4__* ci; TYPE_4__* base_ci; TYPE_3__* openupval; int * top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_12__ {int * v; } ;
struct TYPE_11__ {int * func; int * base; int * top; } ;
struct TYPE_8__ {TYPE_3__* next; } ;
struct TYPE_10__ {TYPE_1__ gch; } ;
typedef int TValue ;
typedef TYPE_3__ GCObject ;
typedef TYPE_4__ CallInfo ;


 TYPE_5__* FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1 (lua_State *VAR_0, TValue *VAR_1) {
  CallInfo *VAR_2;
  GCObject *VAR_3;
  VAR_0->top = (VAR_0->top - VAR_1) + VAR_0->stack;
  for (VAR_3 = VAR_0->openupval; VAR_3 != ((void*)0); VAR_3 = VAR_3->gch.next)
    FUNC_0(VAR_3)->v = (FUNC_0(VAR_3)->v - VAR_1) + VAR_0->stack;
  for (VAR_2 = VAR_0->base_ci; VAR_2 <= VAR_0->ci; VAR_2++) {
    VAR_2->top = (VAR_2->top - VAR_1) + VAR_0->stack;
    VAR_2->base = (VAR_2->base - VAR_1) + VAR_0->stack;
    VAR_2->func = (VAR_2->func - VAR_1) + VAR_0->stack;
  }
  VAR_0->base = (VAR_0->base - VAR_1) + VAR_0->stack;
}
