
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pVtab; } ;
typedef TYPE_5__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
typedef scalar_t__ i64 ;
struct TYPE_9__ {int n; scalar_t__ p; } ;
struct TYPE_15__ {size_t iCol; scalar_t__* aDoc; scalar_t__* aCnt; scalar_t__ iInstPos; TYPE_4__* pFts5; TYPE_2__* pIter; TYPE_1__ term; } ;
struct TYPE_14__ {int eType; } ;
struct TYPE_12__ {TYPE_3__* pConfig; } ;
struct TYPE_11__ {int eDetail; char** azCol; int nCol; } ;
struct TYPE_10__ {scalar_t__ iRowid; } ;
typedef TYPE_6__ Fts5VocabTable ;
typedef TYPE_7__ Fts5VocabCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,char const*,int,int ) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_vtab_cursor *VAR_9,
  sqlite3_context *VAR_10,
  int VAR_11
){
  Fts5VocabCursor *VAR_12 = (Fts5VocabCursor*)VAR_9;
  int VAR_13 = VAR_12->pFts5->pConfig->eDetail;
  int VAR_14 = ((Fts5VocabTable*)(VAR_9->pVtab))->eType;
  i64 VAR_15 = 0;

  if( VAR_11==0 ){
    FUNC_5(
        VAR_10, (const char*)VAR_12->term.p, VAR_12->term.n, VAR_8
    );
  }else if( VAR_14==VAR_3 ){
    FUNC_2( VAR_11==1 || VAR_11==2 || VAR_11==3 );
    if( VAR_11==1 ){
      if( VAR_13!=VAR_2 ){
        const char *VAR_16 = VAR_12->pFts5->pConfig->azCol[VAR_12->iCol];
        FUNC_5(VAR_10, VAR_16, -1, VAR_7);
      }
    }else if( VAR_11==2 ){
      VAR_15 = VAR_12->aDoc[VAR_12->iCol];
    }else{
      VAR_15 = VAR_12->aCnt[VAR_12->iCol];
    }
  }else if( VAR_14==VAR_5 ){
    FUNC_2( VAR_11==1 || VAR_11==2 );
    if( VAR_11==1 ){
      VAR_15 = VAR_12->aDoc[0];
    }else{
      VAR_15 = VAR_12->aCnt[0];
    }
  }else{
    FUNC_2( VAR_14==VAR_4 );
    switch( VAR_11 ){
      case 1:
        FUNC_4(VAR_10, VAR_12->pIter->iRowid);
        break;
      case 2: {
        int VAR_17 = -1;
        if( VAR_13==VAR_1 ){
          VAR_17 = FUNC_0(VAR_12->iInstPos);
        }else if( VAR_13==VAR_0 ){
          VAR_17 = (int)VAR_12->iInstPos;
        }
        if( VAR_17>=0 && VAR_17<VAR_12->pFts5->pConfig->nCol ){
          const char *VAR_18 = VAR_12->pFts5->pConfig->azCol[VAR_17];
          FUNC_5(VAR_10, VAR_18, -1, VAR_7);
        }
        break;
      }
      default: {
        FUNC_2( VAR_11==3 );
        if( VAR_13==VAR_1 ){
          int VAR_19 = FUNC_1(VAR_12->iInstPos);
          FUNC_3(VAR_10, VAR_19);
        }
        break;
      }
    }
  }

  if( VAR_15>0 ) FUNC_4(VAR_10, VAR_15);
  return VAR_6;
}
