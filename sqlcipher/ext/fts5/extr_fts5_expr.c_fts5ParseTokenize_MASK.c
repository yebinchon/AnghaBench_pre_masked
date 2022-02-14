
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_6__ {int rc; TYPE_2__* pPhrase; } ;
typedef TYPE_1__ TokenCtx ;
struct TYPE_7__ {int nTerm; char* zTerm; struct TYPE_7__* aTerm; struct TYPE_7__* pSynonym; } ;
typedef TYPE_2__ Fts5ExprTerm ;
typedef TYPE_2__ Fts5ExprPhrase ;
typedef int Fts5Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 char* FUNC_3 (int*,char const*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(
  void *VAR_4,
  int VAR_5,
  const char *VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9
){
  int VAR_10 = VAR_3;
  const int VAR_11 = 8;
  TokenCtx *VAR_12 = (TokenCtx*)VAR_4;
  Fts5ExprPhrase *VAR_13 = VAR_12->pPhrase;

  FUNC_0(VAR_8, VAR_9);


  if( VAR_12->rc!=VAR_3 ) return VAR_12->rc;
  if( VAR_7>VAR_0 ) VAR_7 = VAR_0;

  if( VAR_13 && VAR_13->nTerm>0 && (VAR_5 & VAR_1) ){
    Fts5ExprTerm *VAR_14;
    sqlite3_int64 VAR_15 = sizeof(Fts5ExprTerm) + sizeof(Fts5Buffer) + VAR_7+1;
    VAR_14 = (Fts5ExprTerm*)FUNC_4(VAR_15);
    if( VAR_14==0 ){
      VAR_10 = VAR_2;
    }else{
      FUNC_2(VAR_14, 0, (size_t)VAR_15);
      VAR_14->zTerm = ((char*)VAR_14) + sizeof(Fts5ExprTerm) + sizeof(Fts5Buffer);
      FUNC_1(VAR_14->zTerm, VAR_6, VAR_7);
      VAR_14->pSynonym = VAR_13->aTerm[VAR_13->nTerm-1].pSynonym;
      VAR_13->aTerm[VAR_13->nTerm-1].pSynonym = VAR_14;
    }
  }else{
    Fts5ExprTerm *VAR_16;
    if( VAR_13==0 || (VAR_13->nTerm % VAR_11)==0 ){
      Fts5ExprPhrase *VAR_17;
      int VAR_18 = VAR_11 + (VAR_13 ? VAR_13->nTerm : 0);

      VAR_17 = (Fts5ExprPhrase*)FUNC_5(VAR_13,
          sizeof(Fts5ExprPhrase) + sizeof(Fts5ExprTerm) * VAR_18
      );
      if( VAR_17==0 ){
        VAR_10 = VAR_2;
      }else{
        if( VAR_13==0 ) FUNC_2(VAR_17, 0, sizeof(Fts5ExprPhrase));
        VAR_12->pPhrase = VAR_13 = VAR_17;
        VAR_17->nTerm = VAR_18 - VAR_11;
      }
    }

    if( VAR_10==VAR_3 ){
      VAR_16 = &VAR_13->aTerm[VAR_13->nTerm++];
      FUNC_2(VAR_16, 0, sizeof(Fts5ExprTerm));
      VAR_16->zTerm = FUNC_3(&VAR_10, VAR_6, VAR_7);
    }
  }

  VAR_12->rc = VAR_10;
  return VAR_10;
}
