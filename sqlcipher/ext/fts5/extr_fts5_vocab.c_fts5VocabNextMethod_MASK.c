
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_14__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
typedef int i64 ;
struct TYPE_18__ {int n; char const* p; } ;
struct TYPE_17__ {int nData; int * pData; } ;
struct TYPE_16__ {int iCol; scalar_t__* aDoc; int bEof; int nLeTerm; char const* zLeTerm; scalar_t__* aCnt; TYPE_2__* pFts5; TYPE_6__* pIter; TYPE_9__ term; int rowid; } ;
struct TYPE_15__ {int eType; } ;
struct TYPE_13__ {TYPE_1__* pConfig; } ;
struct TYPE_12__ {int nCol; int eDetail; } ;
typedef TYPE_4__ Fts5VocabTable ;
typedef TYPE_5__ Fts5VocabCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

 int VAR_4 ;

 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (char const*,char const*,int) ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 int FUNC_7 (int*,TYPE_9__*,int,int const*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 char* FUNC_10 (TYPE_6__*,int*) ;
 int FUNC_11 (int const*,int,int*,int*) ;

__attribute__((used)) static int FUNC_12(sqlite3_vtab_cursor *VAR_6){
  Fts5VocabCursor *VAR_7 = (Fts5VocabCursor*)VAR_6;
  Fts5VocabTable *VAR_8 = (Fts5VocabTable*)VAR_6->pVtab;
  int VAR_9 = VAR_5;
  int VAR_10 = VAR_7->pFts5->pConfig->nCol;

  VAR_7->rowid++;

  if( VAR_8->eType==VAR_4 ){
    return FUNC_4(VAR_7);
  }

  if( VAR_8->eType==129 ){
    for(VAR_7->iCol++; VAR_7->iCol<VAR_10; VAR_7->iCol++){
      if( VAR_7->aDoc[VAR_7->iCol] ) break;
    }
  }

  if( VAR_8->eType!=129 || VAR_7->iCol>=VAR_10 ){
    if( FUNC_8(VAR_7->pIter) ){
      VAR_7->bEof = 1;
    }else{
      const char *VAR_11;
      int VAR_12;

      VAR_11 = FUNC_10(VAR_7->pIter, &VAR_12);
      FUNC_2( VAR_12>=0 );
      if( VAR_7->nLeTerm>=0 ){
        int VAR_13 = FUNC_1(VAR_12, VAR_7->nLeTerm);
        int VAR_14 = FUNC_5(VAR_7->zLeTerm, VAR_11, VAR_13);
        if( VAR_14<0 || (VAR_14==0 && VAR_7->nLeTerm<VAR_12) ){
          VAR_7->bEof = 1;
          return VAR_5;
        }
      }

      FUNC_7(&VAR_9, &VAR_7->term, VAR_12, (const u8*)VAR_11);
      FUNC_6(VAR_7->aCnt, 0, VAR_10 * sizeof(i64));
      FUNC_6(VAR_7->aDoc, 0, VAR_10 * sizeof(i64));
      VAR_7->iCol = 0;

      FUNC_2( VAR_8->eType==129 || VAR_8->eType==128 );
      while( VAR_9==VAR_5 ){
        int VAR_15 = VAR_7->pFts5->pConfig->eDetail;
        const u8 *VAR_16; int VAR_17;
        i64 VAR_18 = 0;
        int VAR_19 = 0;

        VAR_16 = VAR_7->pIter->pData;
        VAR_17 = VAR_7->pIter->nData;

        switch( VAR_8->eType ){
          case 128:
            if( VAR_15==VAR_2 ){
              while( 0==FUNC_11(VAR_16, VAR_17, &VAR_19, &VAR_18) ){
                VAR_7->aCnt[0]++;
              }
            }
            VAR_7->aDoc[0]++;
            break;

          case 129:
            if( VAR_15==VAR_2 ){
              int VAR_20 = -1;
              while( 0==FUNC_11(VAR_16, VAR_17, &VAR_19, &VAR_18) ){
                int VAR_21 = FUNC_0(VAR_18);
                if( VAR_20!=VAR_21 ){
                  if( VAR_21>=VAR_10 ){
                    VAR_9 = VAR_0;
                    break;
                  }
                  VAR_7->aDoc[VAR_21]++;
                  VAR_20 = VAR_21;
                }
                VAR_7->aCnt[VAR_21]++;
              }
            }else if( VAR_15==VAR_1 ){
              while( 0==FUNC_11(VAR_16, VAR_17, &VAR_19,&VAR_18) ){
                FUNC_3( VAR_18>=0 && VAR_18<VAR_10 );
                if( VAR_18>=VAR_10 ){
                  VAR_9 = VAR_0;
                  break;
                }
                VAR_7->aDoc[VAR_18]++;
              }
            }else{
              FUNC_2( VAR_15==VAR_3 );
              VAR_7->aDoc[0]++;
            }
            break;

          default:
            FUNC_2( VAR_8->eType==VAR_4 );
            break;
        }

        if( VAR_9==VAR_5 ){
          VAR_9 = FUNC_9(VAR_7->pIter);
        }
        if( VAR_8->eType==VAR_4 ) break;

        if( VAR_9==VAR_5 ){
          VAR_11 = FUNC_10(VAR_7->pIter, &VAR_12);
          if( VAR_12!=VAR_7->term.n
          || (VAR_12>0 && FUNC_5(VAR_11, VAR_7->term.p, VAR_12))
          ){
            break;
          }
          if( FUNC_8(VAR_7->pIter) ) break;
        }
      }
    }
  }

  if( VAR_9==VAR_5 && VAR_7->bEof==0 && VAR_8->eType==129 ){
    while( VAR_7->aDoc[VAR_7->iCol]==0 ) VAR_7->iCol++;
    FUNC_2( VAR_7->iCol<VAR_7->pFts5->pConfig->nCol );
  }
  return VAR_9;
}
