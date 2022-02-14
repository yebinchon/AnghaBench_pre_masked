
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nchild; struct TYPE_7__** child; TYPE_2__* valnode; } ;
struct TYPE_5__ {scalar_t__ oper; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef TYPE_3__ QTNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (void*,int,int,int ) ;

void
FUNC_2(QTNode *VAR_3)
{
 int VAR_4;


 FUNC_0();

 if (VAR_3->valnode->type != VAR_1)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->nchild; VAR_4++)
  FUNC_2(VAR_3->child[VAR_4]);
 if (VAR_3->nchild > 1 && VAR_3->valnode->qoperator.oper != VAR_0)
  FUNC_1((void *) VAR_3->child, VAR_3->nchild, sizeof(QTNode *), VAR_2);
}
