
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_8__ {scalar_t__ bKey; scalar_t__ zExpr; void* bDesc; } ;
struct TYPE_7__ {int nCol; scalar_t__ zWhere; TYPE_2__* aCol; } ;
typedef TYPE_1__ CidxIndex ;
typedef int CidxCursor ;
typedef TYPE_2__ CidxColumn ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int*,char*,char const*,char const*) ;
 int FUNC_3 (int *,TYPE_1__*,char const*) ;
 int * FUNC_4 (int*,int *,char*,char const*) ;
 char* FUNC_5 (int*,char const*) ;
 void* FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(
  CidxCursor *VAR_3,
  const char *VAR_4,
  CidxIndex **VAR_5,
  char **VAR_6
){
  int VAR_7 = VAR_1;
  char *VAR_8 = 0;
  CidxIndex *VAR_9 = 0;

  sqlite3_stmt *VAR_10 = 0;
  sqlite3_stmt *VAR_11 = 0;


  VAR_10 = FUNC_4(&VAR_7, VAR_3,
      "SELECT tbl_name, sql FROM sqlite_master WHERE name=%Q AND type='index'",
      VAR_4
  );
  if( VAR_7==VAR_1 && FUNC_10(VAR_10)==VAR_2 ){
    const char *VAR_12 = (const char*)FUNC_7(VAR_10, 1);
    VAR_8 = FUNC_5(&VAR_7, (const char*)FUNC_7(VAR_10, 0));

    VAR_11 = FUNC_4(&VAR_7, VAR_3, "PRAGMA index_xinfo(%Q)", VAR_4);
    if( VAR_7==VAR_1 ){
      int VAR_13 = 0;
      int VAR_14 = 0;

      while( FUNC_10(VAR_11)==VAR_2 ){
        const char *VAR_15 = (const char*)FUNC_7(VAR_11, 2);
        const char *VAR_16 = (const char*)FUNC_7(VAR_11, 4);
        CidxColumn *VAR_17;
        if( VAR_15==0 ) VAR_15 = "rowid";
        if( VAR_14==VAR_13 ){
          int VAR_18 = sizeof(CidxIndex) + sizeof(CidxColumn)*(VAR_13+8);
          VAR_9 = (CidxIndex*)FUNC_9(VAR_9, VAR_18);
          VAR_13 += 8;
        }
        VAR_17 = &VAR_9->aCol[VAR_14++];
        VAR_17->bDesc = FUNC_6(VAR_11, 3);
        VAR_17->bKey = FUNC_6(VAR_11, 5);
        if( VAR_12==0 || VAR_17->bKey==0 ){
          VAR_17->zExpr = FUNC_2(&VAR_7, "\"%w\" COLLATE %s",VAR_15,VAR_16);
        }else{
          VAR_17->zExpr = 0;
        }
        VAR_9->nCol = VAR_14;
        VAR_9->zWhere = 0;
      }
      FUNC_0(&VAR_7, VAR_11);
    }

    if( VAR_7==VAR_1 && VAR_12 ){
      VAR_7 = FUNC_3(VAR_3, VAR_9, VAR_12);
    }
  }

  FUNC_0(&VAR_7, VAR_10);
  if( VAR_7==VAR_1 && VAR_8==0 ){
    VAR_7 = VAR_0;
  }

  if( VAR_7!=VAR_1 ){
    FUNC_8(VAR_8);
    FUNC_1(VAR_9);
  }else{
    *VAR_6 = VAR_8;
    *VAR_5 = VAR_9;
  }

  return VAR_7;
}
