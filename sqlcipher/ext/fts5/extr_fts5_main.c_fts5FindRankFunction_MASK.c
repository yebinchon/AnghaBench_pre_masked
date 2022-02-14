
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
struct TYPE_14__ {int db; } ;
struct TYPE_9__ {scalar_t__ pVtab; } ;
struct TYPE_13__ {char* zRank; char* zRankArgs; int nRankArg; int * pRank; int * pRankArgStmt; int ** apRankArg; TYPE_1__ base; } ;
struct TYPE_10__ {scalar_t__ zErrMsg; } ;
struct TYPE_11__ {TYPE_2__ base; TYPE_6__* pConfig; } ;
struct TYPE_12__ {TYPE_3__ p; } ;
typedef TYPE_4__ Fts5FullTable ;
typedef TYPE_5__ Fts5Cursor ;
typedef TYPE_6__ Fts5Config ;
typedef int Fts5Auxiliary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_4__*,char const*) ;
 scalar_t__ FUNC_2 (int*,int) ;
 char* FUNC_3 (int*,char*,char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char const*) ;
 int FUNC_9 (int ,char*,int,int ,int **,int ) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(Fts5Cursor *VAR_4){
  Fts5FullTable *VAR_5 = (Fts5FullTable*)(VAR_4->base.pVtab);
  Fts5Config *VAR_6 = VAR_5->p.pConfig;
  int VAR_7 = VAR_1;
  Fts5Auxiliary *VAR_8 = 0;
  const char *VAR_9 = VAR_4->zRank;
  const char *VAR_10 = VAR_4->zRankArgs;

  if( VAR_10 ){
    char *VAR_11 = FUNC_3(&VAR_7, "SELECT %s", VAR_10);
    if( VAR_11 ){
      sqlite3_stmt *VAR_12 = 0;
      VAR_7 = FUNC_9(VAR_6->db, VAR_11, -1,
                              VAR_2, &VAR_12, 0);
      FUNC_7(VAR_11);
      FUNC_0( VAR_7==VAR_1 || VAR_4->pRankArgStmt==0 );
      if( VAR_7==VAR_1 ){
        if( VAR_3==FUNC_10(VAR_12) ){
          sqlite3_int64 VAR_13;
          VAR_4->nRankArg = FUNC_4(VAR_12);
          VAR_13 = sizeof(sqlite3_value*)*VAR_4->nRankArg;
          VAR_4->apRankArg = (sqlite3_value**)FUNC_2(&VAR_7, VAR_13);
          if( VAR_7==VAR_1 ){
            int VAR_14;
            for(VAR_14=0; VAR_14<VAR_4->nRankArg; VAR_14++){
              VAR_4->apRankArg[VAR_14] = FUNC_5(VAR_12, VAR_14);
            }
          }
          VAR_4->pRankArgStmt = VAR_12;
        }else{
          VAR_7 = FUNC_6(VAR_12);
          FUNC_0( VAR_7!=VAR_1 );
        }
      }
    }
  }

  if( VAR_7==VAR_1 ){
    VAR_8 = FUNC_1(VAR_5, VAR_9);
    if( VAR_8==0 ){
      FUNC_0( VAR_5->p.base.zErrMsg==0 );
      VAR_5->p.base.zErrMsg = FUNC_8("no such function: %s", VAR_9);
      VAR_7 = VAR_0;
    }
  }

  VAR_4->pRank = VAR_8;
  return VAR_7;
}
