
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int rc; int zErrmsg; int dbMain; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_13__ {scalar_t__ eType; int zTbl; TYPE_2__* pRbuUpdate; int nTblCol; } ;
struct TYPE_12__ {char* zMask; int * pUpdate; struct TYPE_12__* pNext; } ;
typedef TYPE_2__ RbuUpdateStmt ;
typedef TYPE_3__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int ) ;
 int FUNC_2 (int ,int **,int *,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 char* FUNC_4 (TYPE_1__*,TYPE_3__*,char const*) ;
 char* FUNC_5 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char const*,int ,char*,char*) ;
 scalar_t__ FUNC_9 (char*,char const*) ;

__attribute__((used)) static int FUNC_10(
  sqlite3rbu *VAR_3,
  RbuObjIter *VAR_4,
  const char *VAR_5,
  sqlite3_stmt **VAR_6
){
  RbuUpdateStmt **VAR_7;
  RbuUpdateStmt *VAR_8 = 0;
  int VAR_9 = 0;


  *VAR_6 = 0;





  for(VAR_7=&VAR_4->pRbuUpdate; *VAR_7; VAR_7=&((*VAR_7)->pNext)){
    VAR_8 = *VAR_7;
    if( FUNC_9(VAR_8->zMask, VAR_5)==0 ){
      *VAR_7 = VAR_8->pNext;
      VAR_8->pNext = VAR_4->pRbuUpdate;
      VAR_4->pRbuUpdate = VAR_8;
      *VAR_6 = VAR_8->pUpdate;
      return VAR_1;
    }
    VAR_9++;
  }
  FUNC_0( VAR_8==0 || VAR_8->pNext==0 );

  if( VAR_9>=VAR_2 ){
    for(VAR_7=&VAR_4->pRbuUpdate; *VAR_7!=VAR_8; VAR_7=&((*VAR_7)->pNext));
    *VAR_7 = 0;
    FUNC_6(VAR_8->pUpdate);
    VAR_8->pUpdate = 0;
  }else{
    VAR_8 = (RbuUpdateStmt*)FUNC_3(VAR_3, sizeof(RbuUpdateStmt)+VAR_4->nTblCol+1);
  }

  if( VAR_8 ){
    char *VAR_10 = FUNC_5(VAR_3, VAR_4);
    char *VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_5);
    char *VAR_12 = 0;

    VAR_8->zMask = (char*)&VAR_8[1];
    FUNC_1(VAR_8->zMask, VAR_5, VAR_4->nTblCol);
    VAR_8->pNext = VAR_4->pRbuUpdate;
    VAR_4->pRbuUpdate = VAR_8;

    if( VAR_11 ){
      const char *VAR_13 = "";

      if( VAR_4->eType!=VAR_0 ) VAR_13 = "rbu_imp_";
      VAR_12 = FUNC_8("UPDATE \"%s%w\" SET %s WHERE %s",
          VAR_13, VAR_4->zTbl, VAR_11, VAR_10
      );
      VAR_3->rc = FUNC_2(
          VAR_3->dbMain, &VAR_8->pUpdate, &VAR_3->zErrmsg, VAR_12
      );
      *VAR_6 = VAR_8->pUpdate;
    }
    FUNC_7(VAR_10);
    FUNC_7(VAR_11);
  }

  return VAR_3->rc;
}
