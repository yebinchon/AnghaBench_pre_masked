
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_10__ {int bDesc; int * pIndex; TYPE_1__* pRoot; } ;
struct TYPE_9__ {scalar_t__ bEof; scalar_t__ bNomatch; int iRowid; } ;
typedef int Fts5Index ;
typedef TYPE_1__ Fts5ExprNode ;
typedef TYPE_2__ Fts5Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;

int FUNC_4(Fts5Expr *VAR_1, Fts5Index *VAR_2, i64 VAR_3, int VAR_4){
  Fts5ExprNode *VAR_5 = VAR_1->pRoot;
  int VAR_6;

  VAR_1->pIndex = VAR_2;
  VAR_1->bDesc = VAR_4;
  VAR_6 = FUNC_1(VAR_1, VAR_5);



  if( VAR_6==VAR_0
   && 0==VAR_5->bEof
   && FUNC_3(VAR_1, VAR_5->iRowid, VAR_3)<0
  ){
    VAR_6 = FUNC_2(VAR_1, VAR_5, 1, VAR_3);
  }


  while( VAR_5->bNomatch ){
    FUNC_0( VAR_5->bEof==0 && VAR_6==VAR_0 );
    VAR_6 = FUNC_2(VAR_1, VAR_5, 0, 0);
  }
  return VAR_6;
}
