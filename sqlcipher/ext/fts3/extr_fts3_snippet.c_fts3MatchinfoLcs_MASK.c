
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* pPhrase; } ;
struct TYPE_16__ {int nPhrase; int pExpr; } ;
struct TYPE_15__ {int iPosOffset; scalar_t__ pRead; scalar_t__ iPos; TYPE_8__* pExpr; } ;
struct TYPE_14__ {int nPhrase; int nCol; int* aMatchinfo; } ;
struct TYPE_13__ {scalar_t__ nToken; } ;
typedef TYPE_2__ MatchInfo ;
typedef TYPE_3__ LcsIterator ;
typedef TYPE_4__ Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,void*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_8__*,int,scalar_t__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(Fts3Cursor *VAR_4, MatchInfo *VAR_5){
  LcsIterator *VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9 = 0;
  int VAR_10 = VAR_2;




  VAR_6 = FUNC_5(sizeof(LcsIterator) * VAR_4->nPhrase);
  if( !VAR_6 ) return VAR_1;
  FUNC_2(VAR_6, 0, sizeof(LcsIterator) * VAR_4->nPhrase);
  (void)FUNC_0(VAR_4->pExpr, VAR_3, (void*)VAR_6);

  for(VAR_7=0; VAR_7<VAR_5->nPhrase; VAR_7++){
    LcsIterator *VAR_11 = &VAR_6[VAR_7];
    VAR_9 -= VAR_11->pExpr->pPhrase->nToken;
    VAR_11->iPosOffset = VAR_9;
  }

  for(VAR_8=0; VAR_8<VAR_5->nCol; VAR_8++){
    int VAR_12 = 0;
    int VAR_13 = 0;

    for(VAR_7=0; VAR_7<VAR_5->nPhrase; VAR_7++){
      LcsIterator *VAR_14 = &VAR_6[VAR_7];
      VAR_10 = FUNC_3(VAR_4, VAR_14->pExpr, VAR_8, &VAR_14->pRead);
      if( VAR_10!=VAR_2 ) goto matchinfo_lcs_out;
      if( VAR_14->pRead ){
        VAR_14->iPos = VAR_14->iPosOffset;
        FUNC_1(VAR_14);
        if( VAR_14->pRead==0 ){
          VAR_10 = VAR_0;
          goto matchinfo_lcs_out;
        }
        VAR_13++;
      }
    }

    while( VAR_13>0 ){
      LcsIterator *VAR_15 = 0;
      int VAR_16 = 0;

      for(VAR_7=0; VAR_7<VAR_5->nPhrase; VAR_7++){
        LcsIterator *VAR_17 = &VAR_6[VAR_7];
        if( VAR_17->pRead==0 ){

          VAR_16 = 0;
        }else{
          if( VAR_15==0 || VAR_17->iPos<VAR_15->iPos ){
            VAR_15 = VAR_17;
          }
          if( VAR_16==0 || VAR_17->iPos==VAR_17[-1].iPos ){
            VAR_16++;
          }else{
            VAR_16 = 1;
          }
          if( VAR_16>VAR_12 ) VAR_12 = VAR_16;
        }
      }
      if( FUNC_1(VAR_15) ) VAR_13--;
    }

    VAR_5->aMatchinfo[VAR_8] = VAR_12;
  }

 matchinfo_lcs_out:
  FUNC_4(VAR_6);
  return VAR_10;
}
