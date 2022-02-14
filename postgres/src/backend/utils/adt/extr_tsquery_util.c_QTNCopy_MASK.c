
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* word; int nchild; struct TYPE_8__** child; int flags; TYPE_2__* valnode; } ;
struct TYPE_6__ {int length; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ qoperand; } ;
typedef TYPE_2__ QueryItem ;
typedef TYPE_3__ QTNode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (int) ;

QTNode *
FUNC_3(QTNode *VAR_3)
{
 QTNode *VAR_4;


 FUNC_0();

 VAR_4 = (QTNode *) FUNC_2(sizeof(QTNode));

 *VAR_4 = *VAR_3;
 VAR_4->valnode = (QueryItem *) FUNC_2(sizeof(QueryItem));
 *(VAR_4->valnode) = *(VAR_3->valnode);
 VAR_4->flags |= VAR_1;

 if (VAR_3->valnode->type == VAR_0)
 {
  VAR_4->word = FUNC_2(VAR_3->valnode->qoperand.length + 1);
  FUNC_1(VAR_4->word, VAR_3->word, VAR_3->valnode->qoperand.length);
  VAR_4->word[VAR_3->valnode->qoperand.length] = '\0';
  VAR_4->flags |= VAR_2;
 }
 else
 {
  int VAR_5;

  VAR_4->child = (QTNode **) FUNC_2(sizeof(QTNode *) * VAR_3->nchild);

  for (VAR_5 = 0; VAR_5 < VAR_3->nchild; VAR_5++)
   VAR_4->child[VAR_5] = FUNC_3(VAR_3->child[VAR_5]);
 }

 return VAR_4;
}
