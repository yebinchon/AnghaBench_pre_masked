
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int uint32 ;
struct TYPE_10__ {unsigned int sign; int nchild; char* word; struct TYPE_10__** child; TYPE_3__* valnode; } ;
struct TYPE_8__ {int distance; scalar_t__ valcrc; } ;
struct TYPE_7__ {scalar_t__ oper; int left; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ qoperand; TYPE_1__ qoperator; } ;
typedef TYPE_3__ QueryItem ;
typedef TYPE_4__ QTNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

QTNode *
FUNC_2(QueryItem *VAR_2, char *VAR_3)
{
 QTNode *VAR_4 = (QTNode *) FUNC_1(sizeof(QTNode));


 FUNC_0();

 VAR_4->valnode = VAR_2;

 if (VAR_2->type == VAR_1)
 {
  VAR_4->child = (QTNode **) FUNC_1(sizeof(QTNode *) * 2);
  VAR_4->child[0] = FUNC_2(VAR_2 + 1, VAR_3);
  VAR_4->sign = VAR_4->child[0]->sign;
  if (VAR_2->qoperator.oper == VAR_0)
   VAR_4->nchild = 1;
  else
  {
   VAR_4->nchild = 2;
   VAR_4->child[1] = FUNC_2(VAR_2 + VAR_2->qoperator.left, VAR_3);
   VAR_4->sign |= VAR_4->child[1]->sign;
  }
 }
 else if (VAR_3)
 {
  VAR_4->word = VAR_3 + VAR_2->qoperand.distance;
  VAR_4->sign = ((uint32) 1) << (((unsigned int) VAR_2->qoperand.valcrc) % 32);
 }

 return VAR_4;
}
