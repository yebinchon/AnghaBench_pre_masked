
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_13__ {scalar_t__ pVtab; } ;
struct TYPE_16__ {scalar_t__ iPrevId; scalar_t__ isEof; int isRequireSeek; int isMatchinfoNeeded; int pStmt; TYPE_1__ base; } ;
struct TYPE_15__ {scalar_t__ eType; scalar_t__ aMI; scalar_t__ iDocid; scalar_t__ bEof; int bStart; struct TYPE_15__* pRight; struct TYPE_15__* pLeft; struct TYPE_15__* pParent; } ;
struct TYPE_14__ {int nColumn; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3Expr ;
typedef TYPE_4__ Fts3Cursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(
  Fts3Cursor *VAR_4,
  Fts3Expr *VAR_5
){
  int VAR_6 = VAR_3;

  FUNC_0( VAR_5->eType==VAR_1 );
  if( VAR_5->aMI==0 ){
    Fts3Table *VAR_7 = (Fts3Table *)VAR_4->base.pVtab;
    Fts3Expr *VAR_8;
    Fts3Expr *VAR_9;

    sqlite3_int64 VAR_10 = VAR_4->iPrevId;
    sqlite3_int64 VAR_11;
    u8 VAR_12;


    VAR_8 = VAR_5;
    while( VAR_8->pParent && VAR_8->pParent->eType==VAR_0 ){
      VAR_8 = VAR_8->pParent;
    }
    VAR_11 = VAR_8->iDocid;
    VAR_12 = VAR_8->bEof;
    FUNC_0( VAR_8->bStart );


    for(VAR_9=VAR_8; VAR_9; VAR_9=VAR_9->pLeft){
      Fts3Expr *VAR_13 = (VAR_9->eType==VAR_1?VAR_9:VAR_9->pRight);
      FUNC_0( VAR_13->aMI==0 );
      VAR_13->aMI = (u32 *)FUNC_7(VAR_7->nColumn * 3 * sizeof(u32));
      if( !VAR_13->aMI ) return VAR_2;
      FUNC_4(VAR_13->aMI, 0, VAR_7->nColumn * 3 * sizeof(u32));
    }

    FUNC_2(VAR_4, VAR_8, &VAR_6);

    while( VAR_4->isEof==0 && VAR_6==VAR_3 ){

      do {

        if( VAR_4->isRequireSeek==0 ) FUNC_8(VAR_4->pStmt);
        FUNC_0( FUNC_6(VAR_4->pStmt)==0 );


        FUNC_1(VAR_4, VAR_8, &VAR_6);
        VAR_4->isEof = VAR_8->bEof;
        VAR_4->isRequireSeek = 1;
        VAR_4->isMatchinfoNeeded = 1;
        VAR_4->iPrevId = VAR_8->iDocid;
      }while( VAR_4->isEof==0
           && VAR_8->eType==VAR_0
           && FUNC_5(VAR_4, &VAR_6)
      );

      if( VAR_6==VAR_3 && VAR_4->isEof==0 ){
        FUNC_3(VAR_8, VAR_7->nColumn);
      }
    }

    VAR_4->isEof = 0;
    VAR_4->iPrevId = VAR_10;

    if( VAR_12 ){
      VAR_8->bEof = VAR_12;
    }else{






      FUNC_2(VAR_4, VAR_8, &VAR_6);
      do {
        FUNC_1(VAR_4, VAR_8, &VAR_6);
        FUNC_0( VAR_8->bEof==0 );
      }while( VAR_8->iDocid!=VAR_11 && VAR_6==VAR_3 );
    }
  }
  return VAR_6;
}
