
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
struct TYPE_6__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef int fts1HashElem ;
typedef int fts1Hash ;
typedef int DocList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_11 (TYPE_1__*,int *,int **,scalar_t__*,int *) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_13 (TYPE_1__*,scalar_t__,int **,int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(sqlite3_vtab *VAR_5, int VAR_6, sqlite3_value **VAR_7,
                   sqlite_int64 *VAR_8){
  fulltext_vtab *VAR_9 = (fulltext_vtab *) VAR_5;
  fts1Hash VAR_10;
  int VAR_11;
  fts1HashElem *VAR_12;

  FUNC_0(("FTS1 Update %p\n", VAR_5));

  FUNC_6(&VAR_10, VAR_0, 1);

  if( VAR_6<2 ){
    VAR_11 = FUNC_10(VAR_9, FUNC_14(VAR_7[0]), &VAR_10);
  } else if( FUNC_15(VAR_7[0]) != VAR_3 ){






    sqlite_int64 VAR_13 = FUNC_14(VAR_7[0]);
    if( FUNC_15(VAR_7[1]) != VAR_2 ||
      FUNC_14(VAR_7[1]) != VAR_13 ){
      VAR_11 = VAR_1;
    } else {
      FUNC_1( VAR_6==2+VAR_9->nColumn+1);
      VAR_11 = FUNC_13(VAR_9, VAR_13, &VAR_7[2], &VAR_10);
    }
  } else {





    FUNC_1( VAR_6==2+VAR_9->nColumn+1);
    VAR_11 = FUNC_11(VAR_9, VAR_7[1], &VAR_7[2], VAR_8, &VAR_10);
  }

  if( VAR_11==VAR_4 ){

    for(VAR_12=FUNC_5(&VAR_10); VAR_12; VAR_12=FUNC_9(VAR_12)){
      DocList *VAR_14 = FUNC_4(VAR_12);
      VAR_11 = FUNC_12(VAR_9, FUNC_7(VAR_12), FUNC_8(VAR_12), VAR_14);
      if( VAR_11!=VAR_4 ) break;
    }
  }


  for(VAR_12=FUNC_5(&VAR_10); VAR_12; VAR_12=FUNC_9(VAR_12)){
    DocList *VAR_15 = FUNC_4(VAR_12);
    FUNC_2(VAR_15);
  }
  FUNC_3(&VAR_10);

  return VAR_11;
}
