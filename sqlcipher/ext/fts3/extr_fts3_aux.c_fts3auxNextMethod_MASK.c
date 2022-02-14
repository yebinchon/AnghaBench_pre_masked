
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct Fts3auxColstats {int dummy; } ;
struct TYPE_8__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_int64 ;
struct TYPE_12__ {scalar_t__ nDoc; int nOcc; } ;
struct TYPE_11__ {int nDoclist; char* aDoclist; scalar_t__ nTerm; int zTerm; } ;
struct TYPE_10__ {size_t iCol; size_t nStat; scalar_t__ nStop; int isEof; TYPE_5__* aStat; TYPE_4__ csr; scalar_t__ zStop; int iRowid; } ;
struct TYPE_9__ {int * pFts3Tab; } ;
typedef TYPE_2__ Fts3auxTable ;
typedef TYPE_3__ Fts3auxCursor ;
typedef int Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_4 (char*,int*) ;
 int FUNC_5 (int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(sqlite3_vtab_cursor *VAR_3){
  Fts3auxCursor *VAR_4 = (Fts3auxCursor *)VAR_3;
  Fts3Table *VAR_5 = ((Fts3auxTable *)VAR_3->pVtab)->pFts3Tab;
  int VAR_6;


  VAR_4->iRowid++;

  for(VAR_4->iCol++; VAR_4->iCol<VAR_4->nStat; VAR_4->iCol++){
    if( VAR_4->aStat[VAR_4->iCol].nDoc>0 ) return VAR_1;
  }

  VAR_6 = FUNC_5(VAR_5, &VAR_4->csr);
  if( VAR_6==VAR_2 ){
    int VAR_7 = 0;
    int VAR_8 = VAR_4->csr.nDoclist;
    char *VAR_9 = VAR_4->csr.aDoclist;
    int VAR_10;

    int VAR_11 = 0;

    if( VAR_4->zStop ){
      int VAR_12 = (VAR_4->nStop<VAR_4->csr.nTerm) ? VAR_4->nStop : VAR_4->csr.nTerm;
      int VAR_13 = FUNC_2(VAR_4->zStop, VAR_4->csr.zTerm, VAR_12);
      if( VAR_13<0 || (VAR_13==0 && VAR_4->csr.nTerm>VAR_4->nStop) ){
        VAR_4->isEof = 1;
        return VAR_1;
      }
    }

    if( FUNC_1(VAR_4, 2) ) return VAR_0;
    FUNC_3(VAR_4->aStat, 0, sizeof(struct Fts3auxColstats) * VAR_4->nStat);
    VAR_10 = 0;

    while( VAR_7<VAR_8 ){
      sqlite3_int64 VAR_14 = 0;

      VAR_7 += FUNC_4(&VAR_9[VAR_7], &VAR_14);
      switch( VAR_11 ){

        case 0:
          VAR_4->aStat[0].nDoc++;
          VAR_11 = 1;
          VAR_10 = 0;
          break;
        case 1:
          FUNC_0( VAR_10==0 );
          if( VAR_14>1 ){
            VAR_4->aStat[1].nDoc++;
          }
          VAR_11 = 2;


        case 2:
          if( VAR_14==0 ){
            VAR_11 = 0;
          }else if( VAR_14==1 ){
            VAR_11 = 3;
          }else{
            VAR_4->aStat[VAR_10+1].nOcc++;
            VAR_4->aStat[0].nOcc++;
          }
          break;


        default: FUNC_0( VAR_11==3 );
          VAR_10 = (int)VAR_14;
          if( FUNC_1(VAR_4, VAR_10+2) ) return VAR_0;
          VAR_4->aStat[VAR_10+1].nDoc++;
          VAR_11 = 2;
          break;
      }
    }

    VAR_4->iCol = 0;
    VAR_6 = VAR_1;
  }else{
    VAR_4->isEof = 1;
  }
  return VAR_6;
}
