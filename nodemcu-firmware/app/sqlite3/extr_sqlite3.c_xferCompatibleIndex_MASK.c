
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pTable; int nKeyCol; scalar_t__ onError; scalar_t__* aiColumn; scalar_t__* aSortOrder; int pPartIdxWhere; int * azColl; TYPE_2__* aColExpr; } ;
struct TYPE_7__ {TYPE_1__* a; } ;
struct TYPE_6__ {int pExpr; } ;
typedef TYPE_3__ Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(Index *VAR_1, Index *VAR_2){
  int VAR_3;
  FUNC_0( VAR_1 && VAR_2 );
  FUNC_0( VAR_1->pTable!=VAR_2->pTable );
  if( VAR_1->nKeyCol!=VAR_2->nKeyCol ){
    return 0;
  }
  if( VAR_1->onError!=VAR_2->onError ){
    return 0;
  }
  for(VAR_3=0; VAR_3<VAR_2->nKeyCol; VAR_3++){
    if( VAR_2->aiColumn[VAR_3]!=VAR_1->aiColumn[VAR_3] ){
      return 0;
    }
    if( VAR_2->aiColumn[VAR_3]==VAR_0 ){
      FUNC_0( VAR_2->aColExpr!=0 && VAR_1->aColExpr!=0 );
      if( FUNC_1(VAR_2->aColExpr->a[VAR_3].pExpr,
                             VAR_1->aColExpr->a[VAR_3].pExpr, -1)!=0 ){
        return 0;
      }
    }
    if( VAR_2->aSortOrder[VAR_3]!=VAR_1->aSortOrder[VAR_3] ){
      return 0;
    }
    if( FUNC_2(VAR_2->azColl[VAR_3],VAR_1->azColl[VAR_3])!=0 ){
      return 0;
    }
  }
  if( FUNC_1(VAR_2->pPartIdxWhere, VAR_1->pPartIdxWhere, -1) ){
    return 0;
  }


  return 1;
}
