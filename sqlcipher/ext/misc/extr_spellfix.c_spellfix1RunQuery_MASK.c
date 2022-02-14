
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_7__ {int nRow; int idxNum; int nAlloc; TYPE_1__* a; int nSearch; } ;
typedef TYPE_2__ spellfix1_cursor ;
struct TYPE_8__ {int iScope; int rc; int nRun; char** azPrior; int iMaxDist; int zPattern; int pLang; scalar_t__ pMatchStr3; int * pStmt; TYPE_2__* pCur; } ;
struct TYPE_6__ {int iScore; char* zWord; int iRank; int iDistance; int iMatchlen; char* zHash; int iRowid; } ;
typedef TYPE_3__ MatchQuery ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char const*,int,int ,int*) ;
 int FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int *,int,char*,int,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,scalar_t__) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (char*) ;

__attribute__((used)) static void FUNC_18(MatchQuery *VAR_7, const char *VAR_8, int VAR_9){
  const char *VAR_10;
  const char *VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15 = 0;
  int VAR_16;
  int VAR_17 = -1;
  int VAR_18;
  int VAR_19 = VAR_7->iScope;
  spellfix1_cursor *VAR_20 = VAR_7->pCur;
  sqlite3_stmt *VAR_21 = VAR_7->pStmt;
  char VAR_22[VAR_2];
  char VAR_23[VAR_2];
  char *VAR_24;
  int VAR_25;
  int VAR_26;

  if( VAR_20->a==0 || VAR_7->rc ) return;
  VAR_24 = (char*)FUNC_4((unsigned char*)VAR_8, VAR_9);
  if( VAR_24==0 ){
    VAR_7->rc = VAR_4;
    return;
  }
  VAR_25 = (int)FUNC_17(VAR_24);
  if( VAR_25>VAR_2-2 ){
    VAR_25 = VAR_2-2;
    VAR_24[VAR_25] = 0;
  }
  if( VAR_25<=VAR_19 ){
    if( VAR_25>2 ){
      VAR_19 = VAR_25-1;
    }else{
      VAR_19 = VAR_25;
    }
  }
  FUNC_3(VAR_22, VAR_24, VAR_19);
  FUNC_12(VAR_24);
  VAR_22[VAR_19] = 0;
  FUNC_3(VAR_23, VAR_22, VAR_19);
  VAR_23[VAR_19] = 'Z';
  VAR_23[VAR_19+1] = 0;





  FUNC_0( VAR_7->nRun<VAR_3 );
  FUNC_3(VAR_7->azPrior[VAR_7->nRun++], VAR_22, VAR_19+1);
  if( FUNC_7(VAR_21, 1, VAR_22, -1, VAR_6)==VAR_4
   || FUNC_7(VAR_21, 2, VAR_23, -1, VAR_6)==VAR_4
  ){
    VAR_7->rc = VAR_4;
    return;
  }
  while( FUNC_15(VAR_21)==VAR_5 ){
    int VAR_27 = -1;
    VAR_13 = FUNC_9(VAR_21, 2);
    if( VAR_7->pMatchStr3 ){
      int VAR_28 = FUNC_8(VAR_21, 1);
      VAR_11 = (const char*)FUNC_11(VAR_21, 1);
      VAR_12 = FUNC_1(VAR_7->pMatchStr3, VAR_11, VAR_28, VAR_7->pLang, &VAR_27);
    }else{
      VAR_10 = (const char*)FUNC_11(VAR_21, 3);
      if( VAR_10==0 ) continue;
      VAR_12 = FUNC_2(VAR_7->zPattern, VAR_10, 0);
    }
    if( VAR_12<0 ){
      VAR_7->rc = VAR_4;
      break;
    }
    VAR_20->nSearch++;







    FUNC_0( (VAR_7->iMaxDist>=0)==((VAR_20->idxNum & VAR_0) ? 1 : 0) );
    if( VAR_7->iMaxDist>=0 ){
      if( VAR_12>VAR_7->iMaxDist ) continue;
      if( VAR_20->nRow>=VAR_20->nAlloc && (VAR_20->idxNum & VAR_1)==0 ){
        FUNC_5(VAR_20, VAR_20->nAlloc*2 + 10);
        if( VAR_20->a==0 ) break;
      }
    }

    VAR_14 = FUNC_6(VAR_12,VAR_13);
    if( VAR_20->nRow<VAR_20->nAlloc ){
      VAR_16 = VAR_20->nRow;
    }else if( VAR_14<VAR_15 ){
      VAR_16 = VAR_17;
      FUNC_12(VAR_20->a[VAR_16].zWord);
    }else{
      continue;
    }

    VAR_20->a[VAR_16].zWord = FUNC_13("%s", FUNC_11(VAR_21, 1));
    if( VAR_20->a[VAR_16].zWord==0 ){
      VAR_7->rc = VAR_4;
      break;
    }
    VAR_20->a[VAR_16].iRowid = FUNC_10(VAR_21, 0);
    VAR_20->a[VAR_16].iRank = VAR_13;
    VAR_20->a[VAR_16].iDistance = VAR_12;
    VAR_20->a[VAR_16].iScore = VAR_14;
    VAR_20->a[VAR_16].iMatchlen = VAR_27;
    FUNC_3(VAR_20->a[VAR_16].zHash, VAR_22, VAR_19+1);
    if( VAR_20->nRow<VAR_20->nAlloc ) VAR_20->nRow++;
    if( VAR_20->nRow==VAR_20->nAlloc ){
      VAR_15 = VAR_20->a[0].iScore;
      VAR_17 = 0;
      for(VAR_18=1; VAR_18<VAR_20->nRow; VAR_18++){
        VAR_14 = VAR_20->a[VAR_18].iScore;
        if( VAR_15<VAR_14 ){
          VAR_15 = VAR_14;
          VAR_17 = VAR_18;
        }
      }
    }
  }
  VAR_26 = FUNC_14(VAR_21);
  if( VAR_26 ) VAR_7->rc = VAR_26;
}
