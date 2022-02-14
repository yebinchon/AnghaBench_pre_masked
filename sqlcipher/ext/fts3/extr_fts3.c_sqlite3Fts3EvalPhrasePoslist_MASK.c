
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_13__ {scalar_t__ pVtab; } ;
struct TYPE_18__ {scalar_t__ iPrevId; int bDesc; TYPE_1__ base; } ;
struct TYPE_17__ {scalar_t__ iDocid; int bEof; scalar_t__ eType; TYPE_4__* pPhrase; struct TYPE_17__* pRight; struct TYPE_17__* pLeft; struct TYPE_17__* pParent; } ;
struct TYPE_14__ {char* pList; int nAll; char* aAll; } ;
struct TYPE_16__ {int iColumn; scalar_t__ bIncr; char* pOrPoslist; scalar_t__ iOrDocid; TYPE_2__ doclist; } ;
struct TYPE_15__ {int nColumn; int bDescIdx; } ;
typedef TYPE_3__ Fts3Table ;
typedef TYPE_4__ Fts3Phrase ;
typedef TYPE_5__ Fts3Expr ;
typedef TYPE_6__ Fts3Cursor ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char**) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int*) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*,int*) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (int,char*,int,char**,scalar_t__*,int*) ;
 int FUNC_7 (int,char*,int,char**,scalar_t__*,int*,int*) ;

int FUNC_8(
  Fts3Cursor *VAR_4,
  Fts3Expr *VAR_5,
  int VAR_6,
  char **VAR_7
){
  Fts3Phrase *VAR_8 = VAR_5->pPhrase;
  Fts3Table *VAR_9 = (Fts3Table *)VAR_4->base.pVtab;
  char *VAR_10;
  int VAR_11;
  sqlite3_int64 VAR_12;



  *VAR_7 = 0;
  FUNC_1( VAR_6>=0 && VAR_6<VAR_9->nColumn );
  if( (VAR_8->iColumn<VAR_9->nColumn && VAR_8->iColumn!=VAR_6) ){
    return VAR_3;
  }

  VAR_12 = VAR_5->iDocid;
  VAR_10 = VAR_8->doclist.pList;
  if( VAR_12!=VAR_4->iPrevId || VAR_5->bEof ){
    int VAR_13 = VAR_3;
    int VAR_14 = VAR_9->bDescIdx;
    int VAR_15 = 0;
    u8 VAR_16 = 0;
    Fts3Expr *VAR_17;
    Fts3Expr *VAR_18;
    int VAR_19;






    VAR_18 = VAR_5;
    for(VAR_17=VAR_5->pParent; VAR_17; VAR_17=VAR_17->pParent){
      if( VAR_17->eType==VAR_1 ) VAR_15 = 1;
      if( VAR_17->eType==VAR_0 ) VAR_18 = VAR_17;
      if( VAR_17->bEof ) VAR_16 = 1;
    }
    if( VAR_15==0 ) return VAR_3;




    if( VAR_8->bIncr ){
      int VAR_20 = VAR_18->bEof;
      FUNC_4(VAR_4, VAR_18, &VAR_13);
      while( VAR_13==VAR_3 && !VAR_18->bEof ){
        FUNC_3(VAR_4, VAR_18, &VAR_13);
        if( VAR_20==0 && VAR_18->iDocid==VAR_12 ) break;
      }
      FUNC_1( VAR_13!=VAR_3 || VAR_8->bIncr==0 );
    }
    if( VAR_16 ){
      while( VAR_13==VAR_3 && !VAR_18->bEof ){
        FUNC_3(VAR_4, VAR_18, &VAR_13);
      }
    }
    if( VAR_13!=VAR_3 ) return VAR_13;

    VAR_19 = 1;
    for(VAR_17=VAR_18; VAR_17; VAR_17=VAR_17->pLeft){
      u8 VAR_21 = 0;
      Fts3Expr *VAR_22 = VAR_17;
      Fts3Phrase *VAR_23;
      FUNC_1( VAR_22->eType==VAR_0 || VAR_22->eType==VAR_2 );
      if( VAR_22->eType==VAR_0 ) VAR_22 = VAR_22->pRight;
      FUNC_1( VAR_22->eType==VAR_2 );
      VAR_23 = VAR_22->pPhrase;

      VAR_10 = VAR_23->pOrPoslist;
      VAR_12 = VAR_23->iOrDocid;
      if( VAR_4->bDesc==VAR_14 ){
        VAR_21 = !VAR_23->doclist.nAll ||
          (VAR_10 >= (VAR_23->doclist.aAll + VAR_23->doclist.nAll));
        while( (VAR_10==0 || FUNC_0(VAR_12, VAR_4->iPrevId)<0 ) && VAR_21==0 ){
          FUNC_6(
              VAR_14, VAR_23->doclist.aAll, VAR_23->doclist.nAll,
              &VAR_10, &VAR_12, &VAR_21
          );
        }
      }else{
        VAR_21 = !VAR_23->doclist.nAll || (VAR_10 && VAR_10<=VAR_23->doclist.aAll);
        while( (VAR_10==0 || FUNC_0(VAR_12, VAR_4->iPrevId)>0 ) && VAR_21==0 ){
          int VAR_24;
          FUNC_7(
              VAR_14, VAR_23->doclist.aAll, VAR_23->doclist.nAll,
              &VAR_10, &VAR_12, &VAR_24, &VAR_21
              );
        }
      }
      VAR_23->pOrPoslist = VAR_10;
      VAR_23->iOrDocid = VAR_12;
      if( VAR_21 || VAR_12!=VAR_4->iPrevId ) VAR_19 = 0;
    }

    if( VAR_19 ){
      VAR_10 = VAR_8->pOrPoslist;
    }else{
      VAR_10 = 0;
    }
  }
  if( VAR_10==0 ) return VAR_3;

  if( *VAR_10==0x01 ){
    VAR_10++;
    VAR_10 += FUNC_5(VAR_10, &VAR_11);
  }else{
    VAR_11 = 0;
  }
  while( VAR_11<VAR_6 ){
    FUNC_2(0, &VAR_10);
    if( *VAR_10==0x00 ) return VAR_3;
    VAR_10++;
    VAR_10 += FUNC_5(VAR_10, &VAR_11);
  }
  if( *VAR_10==0x00 ){
    VAR_10 = 0;
  }

  *VAR_7 = ((VAR_6==VAR_11)?VAR_10:0);
  return VAR_3;
}
