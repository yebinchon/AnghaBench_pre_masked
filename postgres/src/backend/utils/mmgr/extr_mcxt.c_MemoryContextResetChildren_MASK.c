
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* nextchild; struct TYPE_5__* firstchild; } ;
typedef TYPE_1__* MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(MemoryContext VAR_0)
{
 MemoryContext VAR_1;

 FUNC_0(FUNC_1(VAR_0));

 for (VAR_1 = VAR_0->firstchild; VAR_1 != ((void*)0); VAR_1 = VAR_1->nextchild)
 {
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
 }
}
