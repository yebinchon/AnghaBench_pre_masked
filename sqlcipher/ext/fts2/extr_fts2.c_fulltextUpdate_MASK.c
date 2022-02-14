
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
struct TYPE_8__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int *,int **,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int **) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(sqlite3_vtab *VAR_6, int VAR_7, sqlite3_value **VAR_8,
                   sqlite_int64 *VAR_9){
  fulltext_vtab *VAR_10 = (fulltext_vtab *) VAR_6;
  int VAR_11;

  FUNC_0(("FTS2 Update %p\n", VAR_6));

  if( VAR_7<2 ){
    VAR_11 = FUNC_4(VAR_10, FUNC_8(VAR_8[0]));
    if( VAR_11==VAR_4 ){



      VAR_11 = FUNC_3(VAR_10);
      if( VAR_11==VAR_5 ){
        VAR_11 = VAR_4;
      }else if( VAR_11==VAR_0 ){



        VAR_11 = FUNC_2(VAR_10);
        if( VAR_11==VAR_4 ){
          VAR_11 = FUNC_7(VAR_10);
        }
      }
    }
  } else if( FUNC_9(VAR_8[0]) != VAR_3 ){






    sqlite_int64 VAR_12 = FUNC_8(VAR_8[0]);
    if( FUNC_9(VAR_8[1]) != VAR_2 ||
      FUNC_8(VAR_8[1]) != VAR_12 ){
      VAR_11 = VAR_1;
    } else {
      FUNC_1( VAR_7==2+VAR_10->nColumn+1);
      VAR_11 = FUNC_6(VAR_10, VAR_12, &VAR_8[2]);
    }
  } else {





    FUNC_1( VAR_7==2+VAR_10->nColumn+1);
    VAR_11 = FUNC_5(VAR_10, VAR_8[1], &VAR_8[2], VAR_9);
  }

  return VAR_11;
}
