
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pStatement; int * pScan; int dbv; scalar_t__ bRun; } ;
typedef TYPE_1__ sqlite3expert ;
typedef int sqlite3_stmt ;
struct TYPE_7__ {char* zSql; scalar_t__ iId; struct TYPE_7__* pNext; } ;
typedef TYPE_2__ IdxStatement ;
typedef int IdxScan ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char**) ;
 scalar_t__ FUNC_2 (int*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char const*,int,int **,char const**) ;
 char* FUNC_8 (int *) ;

int FUNC_9(
  sqlite3expert *VAR_2,
  const char *VAR_3,
  char **VAR_4
){
  IdxScan *VAR_5 = VAR_2->pScan;
  IdxStatement *VAR_6 = VAR_2->pStatement;
  int VAR_7 = VAR_1;
  const char *VAR_8 = VAR_3;

  if( VAR_2->bRun ) return VAR_0;

  while( VAR_7==VAR_1 && VAR_8 && VAR_8[0] ){
    sqlite3_stmt *VAR_9 = 0;
    VAR_7 = FUNC_7(VAR_2->dbv, VAR_8, -1, &VAR_9, &VAR_8);
    if( VAR_7==VAR_1 ){
      if( VAR_9 ){
        IdxStatement *VAR_10;
        const char *VAR_11 = FUNC_8(VAR_9);
        int VAR_12 = FUNC_0(VAR_11);
        VAR_10 = (IdxStatement*)FUNC_2(&VAR_7, sizeof(IdxStatement) + VAR_12+1);
        if( VAR_7==VAR_1 ){
          VAR_10->zSql = (char*)&VAR_10[1];
          FUNC_5(VAR_10->zSql, VAR_11, VAR_12+1);
          VAR_10->pNext = VAR_2->pStatement;
          if( VAR_2->pStatement ) VAR_10->iId = VAR_2->pStatement->iId+1;
          VAR_2->pStatement = VAR_10;
        }
        FUNC_6(VAR_9);
      }
    }else{
      FUNC_1(VAR_2->dbv, VAR_4);
    }
  }

  if( VAR_7!=VAR_1 ){
    FUNC_3(VAR_2->pScan, VAR_5);
    FUNC_4(VAR_2->pStatement, VAR_6);
    VAR_2->pScan = VAR_5;
    VAR_2->pStatement = VAR_6;
  }

  return VAR_7;
}
