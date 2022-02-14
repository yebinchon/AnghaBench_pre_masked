
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
typedef scalar_t__ int8 ;
struct TYPE_7__ {int nchild; struct TYPE_7__** child; TYPE_2__* valnode; int flags; } ;
struct TYPE_5__ {int distance; scalar_t__ oper; } ;
struct TYPE_6__ {TYPE_1__ qoperator; int type; } ;
typedef int TSQuery ;
typedef TYPE_2__ QueryItem ;
typedef TYPE_3__ QTNode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static QTNode *
FUNC_4(TSQuery VAR_3, TSQuery VAR_4, int8 VAR_5, uint16 VAR_6)
{
 QTNode *VAR_7 = (QTNode *) FUNC_3(sizeof(QTNode));

 VAR_7->flags |= VAR_2;

 VAR_7->valnode = (QueryItem *) FUNC_3(sizeof(QueryItem));
 VAR_7->valnode->type = VAR_1;
 VAR_7->valnode->qoperator.oper = VAR_5;
 if (VAR_5 == VAR_0)
  VAR_7->valnode->qoperator.distance = VAR_6;

 VAR_7->child = (QTNode **) FUNC_3(sizeof(QTNode *) * 2);
 VAR_7->child[0] = FUNC_2(FUNC_1(VAR_4), FUNC_0(VAR_4));
 VAR_7->child[1] = FUNC_2(FUNC_1(VAR_3), FUNC_0(VAR_3));
 VAR_7->nchild = 2;

 return VAR_7;
}
