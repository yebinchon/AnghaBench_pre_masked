
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__** prevn; } ;
typedef TYPE_1__ stb__nochildren ;
struct TYPE_8__ {TYPE_1__* child; } ;
typedef TYPE_2__ stb__alloc ;


 TYPE_1__*** FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(stb__alloc *VAR_0, stb__nochildren *VAR_1)
{
   VAR_1->prevn = &VAR_0->child;
   VAR_1->next = VAR_0->child;
   VAR_0->child = VAR_1+1;
   if (VAR_1->next)
      *FUNC_0(VAR_1->next) = &VAR_1->next;
}
