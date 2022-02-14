
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int rc; int zErrmsg; int dbMain; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_9__ {char const* zIdx; int bCleanup; char const* zTbl; char const* zDataTbl; int * pIdxIter; void* bUnique; void* iTnum; int * pTblIter; } ;
typedef TYPE_2__ RbuObjIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,char const*,int,int ) ;
 void* FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int ,char*,int ,int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(sqlite3rbu *VAR_4, RbuObjIter *VAR_5){
  int VAR_6 = VAR_4->rc;
  if( VAR_6==VAR_1 ){


    FUNC_0(VAR_5);
    if( VAR_5->zIdx==0 ){
      VAR_6 = FUNC_7(VAR_4->dbMain,
          "DROP TRIGGER IF EXISTS temp.rbu_insert_tr;"
          "DROP TRIGGER IF EXISTS temp.rbu_update1_tr;"
          "DROP TRIGGER IF EXISTS temp.rbu_update2_tr;"
          "DROP TRIGGER IF EXISTS temp.rbu_delete_tr;"
          , 0, 0, &VAR_4->zErrmsg
      );
    }

    if( VAR_6==VAR_1 ){
      if( VAR_5->bCleanup ){
        FUNC_2(VAR_5);
        VAR_5->bCleanup = 0;
        VAR_6 = FUNC_8(VAR_5->pTblIter);
        if( VAR_6!=VAR_2 ){
          VAR_6 = FUNC_3(VAR_5->pTblIter, &VAR_4->zErrmsg);
          VAR_5->zTbl = 0;
        }else{
          VAR_5->zTbl = (const char*)FUNC_6(VAR_5->pTblIter, 0);
          VAR_5->zDataTbl = (const char*)FUNC_6(VAR_5->pTblIter,1);
          VAR_6 = (VAR_5->zDataTbl && VAR_5->zTbl) ? VAR_1 : VAR_0;
        }
      }else{
        if( VAR_5->zIdx==0 ){
          sqlite3_stmt *VAR_7 = VAR_5->pIdxIter;
          VAR_6 = FUNC_4(VAR_7, 1, VAR_5->zTbl, -1, VAR_3);
        }
        if( VAR_6==VAR_1 ){
          VAR_6 = FUNC_8(VAR_5->pIdxIter);
          if( VAR_6!=VAR_2 ){
            VAR_6 = FUNC_3(VAR_5->pIdxIter, &VAR_4->zErrmsg);
            VAR_5->bCleanup = 1;
            VAR_5->zIdx = 0;
          }else{
            VAR_5->zIdx = (const char*)FUNC_6(VAR_5->pIdxIter, 0);
            VAR_5->iTnum = FUNC_5(VAR_5->pIdxIter, 1);
            VAR_5->bUnique = FUNC_5(VAR_5->pIdxIter, 2);
            VAR_6 = VAR_5->zIdx ? VAR_1 : VAR_0;
          }
        }
      }
    }
  }

  if( VAR_6!=VAR_1 ){
    FUNC_1(VAR_5);
    VAR_4->rc = VAR_6;
  }
  return VAR_6;
}
