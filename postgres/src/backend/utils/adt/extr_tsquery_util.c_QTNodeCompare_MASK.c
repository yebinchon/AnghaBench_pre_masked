
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ nchild; TYPE_1__* valnode; int word; struct TYPE_10__** child; } ;
struct TYPE_9__ {scalar_t__ valcrc; int length; } ;
struct TYPE_8__ {scalar_t__ oper; scalar_t__ distance; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_3__ qoperand; TYPE_2__ qoperator; } ;
typedef TYPE_2__ QueryOperator ;
typedef TYPE_3__ QueryOperand ;
typedef TYPE_4__ QTNode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;

int
FUNC_3(QTNode *VAR_4, QTNode *VAR_5)
{

 FUNC_0();

 if (VAR_4->valnode->type != VAR_5->valnode->type)
  return (VAR_4->valnode->type > VAR_5->valnode->type) ? -1 : 1;

 if (VAR_4->valnode->type == VAR_2)
 {
  QueryOperator *VAR_6 = &VAR_4->valnode->qoperator;
  QueryOperator *VAR_7 = &VAR_5->valnode->qoperator;

  if (VAR_6->oper != VAR_7->oper)
   return (VAR_6->oper > VAR_7->oper) ? -1 : 1;

  if (VAR_4->nchild != VAR_5->nchild)
   return (VAR_4->nchild > VAR_5->nchild) ? -1 : 1;

  {
   int VAR_8,
      VAR_9;

   for (VAR_8 = 0; VAR_8 < VAR_4->nchild; VAR_8++)
    if ((VAR_9 = FUNC_3(VAR_4->child[VAR_8], VAR_5->child[VAR_8])) != 0)
     return VAR_9;
  }

  if (VAR_6->oper == VAR_1 && VAR_6->distance != VAR_7->distance)
   return (VAR_6->distance > VAR_7->distance) ? -1 : 1;

  return 0;
 }
 else if (VAR_4->valnode->type == VAR_3)
 {
  QueryOperand *VAR_10 = &VAR_4->valnode->qoperand;
  QueryOperand *VAR_11 = &VAR_5->valnode->qoperand;

  if (VAR_10->valcrc != VAR_11->valcrc)
  {
   return (VAR_10->valcrc > VAR_11->valcrc) ? -1 : 1;
  }

  return FUNC_2(VAR_4->word, VAR_10->length, VAR_5->word, VAR_11->length, 0);
 }
 else
 {
  FUNC_1(VAR_0, "unrecognized QueryItem type: %d", VAR_4->valnode->type);
  return 0;
 }
}
