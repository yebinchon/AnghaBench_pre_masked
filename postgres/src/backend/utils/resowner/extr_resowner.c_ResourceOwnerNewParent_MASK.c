
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* nextchild; struct TYPE_4__* parent; struct TYPE_4__* firstchild; } ;
typedef TYPE_1__* ResourceOwner ;


 int FUNC_0 (int) ;

void
FUNC_1(ResourceOwner VAR_0,
        ResourceOwner VAR_1)
{
 ResourceOwner VAR_2 = VAR_0->parent;

 if (VAR_2)
 {
  if (VAR_0 == VAR_2->firstchild)
   VAR_2->firstchild = VAR_0->nextchild;
  else
  {
   ResourceOwner VAR_3;

   for (VAR_3 = VAR_2->firstchild; VAR_3; VAR_3 = VAR_3->nextchild)
   {
    if (VAR_0 == VAR_3->nextchild)
    {
     VAR_3->nextchild = VAR_0->nextchild;
     break;
    }
   }
  }
 }

 if (VAR_1)
 {
  FUNC_0(VAR_0 != VAR_1);
  VAR_0->parent = VAR_1;
  VAR_0->nextchild = VAR_1->firstchild;
  VAR_1->firstchild = VAR_0;
 }
 else
 {
  VAR_0->parent = ((void*)0);
  VAR_0->nextchild = ((void*)0);
 }
}
