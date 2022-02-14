
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nchild; int sign; struct TYPE_7__** child; TYPE_2__* valnode; int flags; } ;
struct TYPE_5__ {int oper; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef TYPE_2__ QueryItem ;
typedef TYPE_3__ QTNode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

void
FUNC_2(QTNode *VAR_2)
{
 int VAR_3;


 FUNC_0();

 if (VAR_2->valnode->type != VAR_0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->nchild; VAR_3++)
  FUNC_2(VAR_2->child[VAR_3]);

 while (VAR_2->nchild > 2)
 {
  QTNode *VAR_4 = (QTNode *) FUNC_1(sizeof(QTNode));

  VAR_4->valnode = (QueryItem *) FUNC_1(sizeof(QueryItem));
  VAR_4->child = (QTNode **) FUNC_1(sizeof(QTNode *) * 2);

  VAR_4->nchild = 2;
  VAR_4->flags = VAR_1;

  VAR_4->child[0] = VAR_2->child[0];
  VAR_4->child[1] = VAR_2->child[1];
  VAR_4->sign = VAR_4->child[0]->sign | VAR_4->child[1]->sign;

  VAR_4->valnode->type = VAR_2->valnode->type;
  VAR_4->valnode->qoperator.oper = VAR_2->valnode->qoperator.oper;

  VAR_2->child[0] = VAR_4;
  VAR_2->child[1] = VAR_2->child[VAR_2->nchild - 1];
  VAR_2->nchild--;
 }
}
