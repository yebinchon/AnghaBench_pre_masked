
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ oper; } ;
struct TYPE_11__ {scalar_t__ type; int nchild; int flags; struct TYPE_11__* valnode; struct TYPE_11__** child; TYPE_1__ qoperator; } ;
typedef TYPE_2__ QTNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__**,TYPE_2__**,int) ;
 int FUNC_2 (TYPE_2__**,TYPE_2__**,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__**,int) ;

void
FUNC_5(QTNode *VAR_4)
{
 int VAR_5;


 FUNC_0();

 if (VAR_4->valnode->type != VAR_2)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_4->nchild; VAR_5++)
  FUNC_5(VAR_4->child[VAR_5]);


 if (VAR_4->valnode->qoperator.oper != VAR_0 &&
  VAR_4->valnode->qoperator.oper != VAR_1)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_4->nchild; VAR_5++)
 {
  QTNode *VAR_6 = VAR_4->child[VAR_5];

  if (VAR_6->valnode->type == VAR_2 &&
   VAR_4->valnode->qoperator.oper == VAR_6->valnode->qoperator.oper)
  {
   int VAR_7 = VAR_4->nchild;

   VAR_4->nchild += VAR_6->nchild - 1;
   VAR_4->child = (QTNode **) FUNC_4(VAR_4->child, VAR_4->nchild * sizeof(QTNode *));

   if (VAR_5 + 1 != VAR_7)
    FUNC_2(VAR_4->child + VAR_5 + VAR_6->nchild, VAR_4->child + VAR_5 + 1,
      (VAR_7 - VAR_5 - 1) * sizeof(QTNode *));

   FUNC_1(VAR_4->child + VAR_5, VAR_6->child, VAR_6->nchild * sizeof(QTNode *));
   VAR_5 += VAR_6->nchild - 1;

   if (VAR_6->flags & VAR_3)
    FUNC_3(VAR_6->valnode);
   FUNC_3(VAR_6);
  }
 }
}
