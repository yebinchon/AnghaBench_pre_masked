
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_12__ {char const* zSql; scalar_t__ pPreStmt; TYPE_1__* pDb; scalar_t__ pArray; } ;
struct TYPE_11__ {int * pStmt; } ;
struct TYPE_10__ {int db; int interp; scalar_t__ bLegacyPrepare; void* nVMStep; void* nIndex; void* nSort; void* nStep; } ;
typedef TYPE_1__ SqliteDb ;
typedef TYPE_2__ SqlPreparedStmt ;
typedef TYPE_3__ DbEvalContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,char**,scalar_t__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int *,int ,int) ;

__attribute__((used)) static int FUNC_10(DbEvalContext *VAR_10){
  const char *VAR_11 = 0;

  while( VAR_10->zSql[0] || VAR_10->pPreStmt ){
    int VAR_12;
    if( VAR_10->pPreStmt==0 ){
      VAR_11 = (VAR_10->zSql==VAR_11 ? 0 : VAR_10->zSql);
      VAR_12 = FUNC_3(VAR_10->pDb, VAR_10->zSql, &VAR_10->zSql, &VAR_10->pPreStmt);
      if( VAR_12!=VAR_9 ) return VAR_12;
    }else{
      int VAR_13;
      SqliteDb *VAR_14 = VAR_10->pDb;
      SqlPreparedStmt *VAR_15 = VAR_10->pPreStmt;
      sqlite3_stmt *VAR_16 = VAR_15->pStmt;

      VAR_13 = FUNC_8(VAR_16);
      if( VAR_13==VAR_1 ){
        return VAR_9;
      }
      if( VAR_10->pArray ){
        FUNC_2(VAR_10, 0, 0);
      }
      VAR_13 = FUNC_7(VAR_16);

      VAR_14->nStep = FUNC_9(VAR_16,VAR_4,1);
      VAR_14->nSort = FUNC_9(VAR_16,VAR_5,1);
      VAR_14->nIndex = FUNC_9(VAR_16,VAR_3,1);
      VAR_14->nVMStep = FUNC_9(VAR_16,VAR_6,1);
      FUNC_4(VAR_10);
      VAR_10->pPreStmt = 0;

      if( VAR_13!=VAR_0 ){


        FUNC_5(VAR_14, VAR_15, 1);
        FUNC_1(VAR_14->interp,
                         FUNC_0(FUNC_6(VAR_14->db), -1));
        return VAR_8;
      }else{
        FUNC_5(VAR_14, VAR_15, 0);
      }
    }
  }


  return VAR_7;
}
