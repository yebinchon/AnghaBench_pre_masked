
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int flags; int nchild; struct TYPE_16__** child; TYPE_2__* valnode; } ;
struct TYPE_14__ {scalar_t__ oper; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_1__ qoperator; } ;
typedef TYPE_3__ QTNode ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (TYPE_3__*,TYPE_3__*,TYPE_3__*,int*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static QTNode *
FUNC_5(QTNode *VAR_3, QTNode *VAR_4, QTNode *VAR_5, bool *VAR_6)
{

 FUNC_2();


 FUNC_0();


 VAR_3 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);


 if (VAR_3 && (VAR_3->flags & VAR_2) == 0 &&
  VAR_3->valnode->type == VAR_1)
 {
  int VAR_7,
     VAR_8 = 0;





  for (VAR_7 = 0; VAR_7 < VAR_3->nchild; VAR_7++)
  {
   VAR_3->child[VAR_8] = FUNC_5(VAR_3->child[VAR_7], VAR_4, VAR_5, VAR_6);
   if (VAR_3->child[VAR_8])
    VAR_8++;
  }

  VAR_3->nchild = VAR_8;





  if (VAR_3->nchild == 0)
  {
   FUNC_1(VAR_3);
   VAR_3 = ((void*)0);
  }
  else if (VAR_3->nchild == 1 && VAR_3->valnode->qoperator.oper != VAR_0)
  {
   QTNode *VAR_9 = VAR_3->child[0];

   FUNC_4(VAR_3);
   VAR_3 = VAR_9;
  }
 }

 return VAR_3;
}
