
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int isReset; char const* name; int allowInCritSection; struct TYPE_5__* nextchild; struct TYPE_5__* firstchild; struct TYPE_5__* prevchild; int * reset_cbs; int * ident; scalar_t__ mem_allocated; struct TYPE_5__* parent; int const* methods; int type; } ;
typedef int NodeTag ;
typedef int MemoryContextMethods ;
typedef TYPE_1__* MemoryContext ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(MemoryContext VAR_1,
     NodeTag VAR_2,
     const MemoryContextMethods *VAR_3,
     MemoryContext VAR_4,
     const char *VAR_5)
{

 FUNC_0(VAR_0 == 0);


 VAR_1->type = VAR_2;
 VAR_1->isReset = 1;
 VAR_1->methods = VAR_3;
 VAR_1->parent = VAR_4;
 VAR_1->firstchild = ((void*)0);
 VAR_1->mem_allocated = 0;
 VAR_1->prevchild = ((void*)0);
 VAR_1->name = VAR_5;
 VAR_1->ident = ((void*)0);
 VAR_1->reset_cbs = ((void*)0);


 if (VAR_4)
 {
  VAR_1->nextchild = VAR_4->firstchild;
  if (VAR_4->firstchild != ((void*)0))
   VAR_4->firstchild->prevchild = VAR_1;
  VAR_4->firstchild = VAR_1;

  VAR_1->allowInCritSection = VAR_4->allowInCritSection;
 }
 else
 {
  VAR_1->nextchild = ((void*)0);
  VAR_1->allowInCritSection = 0;
 }

 FUNC_1(VAR_1, 0, 0);
}
