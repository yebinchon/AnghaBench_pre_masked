
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ rc; int zErrmsg; int dbMain; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_7__ {int* abIndexed; int nTblCol; char const* zTbl; scalar_t__ eType; scalar_t__ nIndex; int abTblPk; } ;
typedef TYPE_2__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int*,int,int) ;
 void* FUNC_2 (int ,int **,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(sqlite3rbu *VAR_3, RbuObjIter *VAR_4){
  sqlite3_stmt *VAR_5 = 0;
  int VAR_6 = 0;

  if( VAR_3->rc==VAR_1 ){
    FUNC_0(VAR_4->abIndexed, VAR_4->abTblPk, sizeof(u8)*VAR_4->nTblCol);
    VAR_3->rc = FUNC_2(VAR_3->dbMain, &VAR_5, &VAR_3->zErrmsg,
        FUNC_6("PRAGMA main.index_list = %Q", VAR_4->zTbl)
    );
  }

  VAR_4->nIndex = 0;
  while( VAR_3->rc==VAR_1 && VAR_2==FUNC_7(VAR_5) ){
    const char *VAR_7 = (const char*)FUNC_5(VAR_5, 1);
    int VAR_8 = FUNC_4(VAR_5, 4);
    sqlite3_stmt *VAR_9 = 0;
    if( VAR_7==0 ) break;
    if( VAR_8 ){
      FUNC_1(VAR_4->abIndexed, 0x01, sizeof(u8)*VAR_4->nTblCol);
    }
    VAR_3->rc = FUNC_2(VAR_3->dbMain, &VAR_9, &VAR_3->zErrmsg,
        FUNC_6("PRAGMA main.index_xinfo = %Q", VAR_7)
    );
    while( VAR_3->rc==VAR_1 && VAR_2==FUNC_7(VAR_9) ){
      int VAR_10 = FUNC_4(VAR_9, 1);
      if( VAR_10>=0 ) VAR_4->abIndexed[VAR_10] = 1;
    }
    FUNC_3(VAR_3, VAR_9);
    VAR_6 = 1;
    VAR_4->nIndex++;
  }

  if( VAR_4->eType==VAR_0 ){

    VAR_4->nIndex--;
  }

  FUNC_3(VAR_3, VAR_5);
  if( VAR_6==0 ) VAR_4->abIndexed = 0;
}
