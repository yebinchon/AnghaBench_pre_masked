
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int nchild; struct TYPE_5__** child; TYPE_1__* valnode; int flags; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_2__ QTNode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

void
FUNC_1(QTNode *VAR_1, uint32 VAR_2)
{

 FUNC_0();

 VAR_1->flags &= ~VAR_2;

 if (VAR_1->valnode->type != VAR_0)
 {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1->nchild; VAR_3++)
   FUNC_1(VAR_1->child[VAR_3], VAR_2);
 }
}
