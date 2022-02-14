
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* nextchild; struct TYPE_5__* prevchild; struct TYPE_5__* parent; struct TYPE_5__* firstchild; } ;
typedef TYPE_1__* MemoryContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(MemoryContext VAR_0, MemoryContext VAR_1)
{
 FUNC_1(FUNC_2(VAR_0));
 FUNC_1(VAR_0 != VAR_1);


 if (VAR_1 == VAR_0->parent)
  return;


 if (VAR_0->parent)
 {
  MemoryContext VAR_2 = VAR_0->parent;

  if (VAR_0->prevchild != ((void*)0))
   VAR_0->prevchild->nextchild = VAR_0->nextchild;
  else
  {
   FUNC_0(VAR_2->firstchild == VAR_0);
   VAR_2->firstchild = VAR_0->nextchild;
  }

  if (VAR_0->nextchild != ((void*)0))
   VAR_0->nextchild->prevchild = VAR_0->prevchild;
 }


 if (VAR_1)
 {
  FUNC_1(FUNC_2(VAR_1));
  VAR_0->parent = VAR_1;
  VAR_0->prevchild = ((void*)0);
  VAR_0->nextchild = VAR_1->firstchild;
  if (VAR_1->firstchild != ((void*)0))
   VAR_1->firstchild->prevchild = VAR_0;
  VAR_1->firstchild = VAR_0;
 }
 else
 {
  VAR_0->parent = ((void*)0);
  VAR_0->prevchild = ((void*)0);
  VAR_0->nextchild = ((void*)0);
 }
}
