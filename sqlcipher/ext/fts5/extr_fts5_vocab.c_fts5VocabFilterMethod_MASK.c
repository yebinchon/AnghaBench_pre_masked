
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_14__ {scalar_t__ zLeTerm; TYPE_2__* pFts5; int bEof; int pIter; void* nLeTerm; } ;
struct TYPE_13__ {int eType; } ;
struct TYPE_11__ {TYPE_1__* pConfig; int * pIndex; } ;
struct TYPE_10__ {scalar_t__ eDetail; } ;
typedef TYPE_4__ Fts5VocabTable ;
typedef TYPE_5__ Fts5VocabCursor ;
typedef int Fts5Index ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (scalar_t__,char const*,void*) ;
 int FUNC_5 (int *,char const*,int,int,int ,int *) ;
 scalar_t__ FUNC_6 (void*) ;
 void* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
  sqlite3_vtab_cursor *VAR_8,
  int VAR_9,
  const char *VAR_10,
  int VAR_11,
  sqlite3_value **VAR_12
){
  Fts5VocabTable *VAR_13 = (Fts5VocabTable*)VAR_8->pVtab;
  Fts5VocabCursor *VAR_14 = (Fts5VocabCursor*)VAR_8;
  int VAR_15 = VAR_13->eType;
  int VAR_16 = VAR_7;

  int VAR_17 = 0;
  int VAR_18 = VAR_0;
  const char *VAR_19 = 0;
  int VAR_20 = 0;

  sqlite3_value *VAR_21 = 0;
  sqlite3_value *VAR_22 = 0;
  sqlite3_value *VAR_23 = 0;

  FUNC_0(VAR_10, VAR_11);

  FUNC_3(VAR_14);
  if( VAR_9 & VAR_3 ) VAR_21 = VAR_12[VAR_17++];
  if( VAR_9 & VAR_4 ) VAR_22 = VAR_12[VAR_17++];
  if( VAR_9 & VAR_5 ) VAR_23 = VAR_12[VAR_17++];

  if( VAR_21 ){
    VAR_19 = (const char *)FUNC_8(VAR_21);
    VAR_20 = FUNC_7(VAR_21);
    VAR_18 = 0;
  }else{
    if( VAR_22 ){
      VAR_19 = (const char *)FUNC_8(VAR_22);
      VAR_20 = FUNC_7(VAR_22);
    }
    if( VAR_23 ){
      const char *VAR_24 = (const char *)FUNC_8(VAR_23);
      if( VAR_24==0 ) VAR_24 = "";
      VAR_14->nLeTerm = FUNC_7(VAR_23);
      VAR_14->zLeTerm = FUNC_6(VAR_14->nLeTerm+1);
      if( VAR_14->zLeTerm==0 ){
        VAR_16 = VAR_6;
      }else{
        FUNC_4(VAR_14->zLeTerm, VAR_24, VAR_14->nLeTerm+1);
      }
    }
  }

  if( VAR_16==VAR_7 ){
    Fts5Index *VAR_25 = VAR_14->pFts5->pIndex;
    VAR_16 = FUNC_5(VAR_25, VAR_19, VAR_20, VAR_18, 0, &VAR_14->pIter);
  }
  if( VAR_16==VAR_7 && VAR_15==VAR_2 ){
    VAR_16 = FUNC_1(VAR_14);
  }
  if( VAR_16==VAR_7 && !VAR_14->bEof
   && (VAR_15!=VAR_2
    || VAR_14->pFts5->pConfig->eDetail!=VAR_1)
  ){
    VAR_16 = FUNC_2(VAR_8);
  }

  return VAR_16;
}
