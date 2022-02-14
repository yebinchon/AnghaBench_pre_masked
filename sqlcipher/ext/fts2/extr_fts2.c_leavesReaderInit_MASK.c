
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;
struct TYPE_7__ {int nData; int pData; } ;
struct TYPE_6__ {int idx; int eof; int leafReader; int * pStmt; TYPE_3__ rootData; } ;
typedef TYPE_1__ LeavesReader ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,char const*,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,int,int **) ;
 int FUNC_5 (int *,int,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(fulltext_vtab *VAR_3,
                            int VAR_4,
                            sqlite_int64 VAR_5,
                            sqlite_int64 VAR_6,
                            const char *VAR_7, int VAR_8,
                            LeavesReader *VAR_9){
  FUNC_0(VAR_9);
  VAR_9->idx = VAR_4;

  FUNC_1(&VAR_9->rootData, 0);
  if( VAR_5==0 ){

    FUNC_2(&VAR_9->rootData, VAR_7, VAR_8);
    FUNC_3(VAR_9->rootData.pData, VAR_9->rootData.nData,
                   &VAR_9->leafReader);
  }else{
    sqlite3_stmt *VAR_10;
    int VAR_11 = FUNC_4(VAR_3, VAR_4, &VAR_10);
    if( VAR_11!=VAR_1 ) return VAR_11;

    VAR_11 = FUNC_5(VAR_10, 1, VAR_5);
    if( VAR_11!=VAR_1 ) return VAR_11;

    VAR_11 = FUNC_5(VAR_10, 2, VAR_6);
    if( VAR_11!=VAR_1 ) return VAR_11;

    VAR_11 = FUNC_8(VAR_10);
    if( VAR_11==VAR_0 ){
      VAR_9->eof = 1;
      return VAR_1;
    }
    if( VAR_11!=VAR_2 ) return VAR_11;

    VAR_9->pStmt = VAR_10;
    FUNC_3(FUNC_6(VAR_9->pStmt, 0),
                   FUNC_7(VAR_9->pStmt, 0),
                   &VAR_9->leafReader);
  }
  return VAR_1;
}
