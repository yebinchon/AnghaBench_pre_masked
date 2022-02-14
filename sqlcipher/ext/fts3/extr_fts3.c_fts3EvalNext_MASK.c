
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int isEof; int isRequireSeek; int isMatchinfoNeeded; scalar_t__ iPrevId; scalar_t__ bDesc; scalar_t__ iMaxDocid; scalar_t__ iMinDocid; int pStmt; TYPE_1__* pExpr; } ;
struct TYPE_7__ {int bEof; scalar_t__ iDocid; } ;
typedef TYPE_1__ Fts3Expr ;
typedef TYPE_2__ Fts3Cursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(Fts3Cursor *VAR_1){
  int VAR_2 = VAR_0;
  Fts3Expr *VAR_3 = VAR_1->pExpr;
  FUNC_0( VAR_1->isEof==0 );
  if( VAR_3==0 ){
    VAR_1->isEof = 1;
  }else{
    do {
      if( VAR_1->isRequireSeek==0 ){
        FUNC_4(VAR_1->pStmt);
      }
      FUNC_0( FUNC_3(VAR_1->pStmt)==0 );
      FUNC_1(VAR_1, VAR_3, &VAR_2);
      VAR_1->isEof = VAR_3->bEof;
      VAR_1->isRequireSeek = 1;
      VAR_1->isMatchinfoNeeded = 1;
      VAR_1->iPrevId = VAR_3->iDocid;
    }while( VAR_1->isEof==0 && FUNC_2(VAR_1, &VAR_2) );
  }



  if( VAR_2==VAR_0 && (
        (VAR_1->bDesc==0 && VAR_1->iPrevId>VAR_1->iMaxDocid)
     || (VAR_1->bDesc!=0 && VAR_1->iPrevId<VAR_1->iMinDocid)
  )){
    VAR_1->isEof = 1;
  }

  return VAR_2;
}
