
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* nextchild; struct TYPE_4__* firstchild; scalar_t__ mem_allocated; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__* MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

Size
FUNC_2(MemoryContext VAR_0, bool VAR_1)
{
 Size VAR_2 = VAR_0->mem_allocated;

 FUNC_0(FUNC_1(VAR_0));

 if (VAR_1)
 {
  MemoryContext VAR_3 = VAR_0->firstchild;

  for (VAR_3 = VAR_0->firstchild;
    VAR_3 != ((void*)0);
    VAR_3 = VAR_3->nextchild)
   VAR_2 += FUNC_2(VAR_3, 1);
 }

 return VAR_2;
}
