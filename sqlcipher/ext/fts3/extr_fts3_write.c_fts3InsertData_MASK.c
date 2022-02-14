
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
struct TYPE_4__ {int nColumn; int db; scalar_t__ zLanguageid; scalar_t__ zContentTbl; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int **,int **) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
  Fts3Table *VAR_6,
  sqlite3_value **VAR_7,
  sqlite3_int64 *VAR_8
){
  int VAR_9;
  sqlite3_stmt *VAR_10;

  if( VAR_6->zContentTbl ){
    sqlite3_value *VAR_11 = VAR_7[VAR_6->nColumn+3];
    if( FUNC_8(VAR_11)==VAR_3 ){
      VAR_11 = VAR_7[1];
    }
    if( FUNC_8(VAR_11)!=VAR_2 ){
      return VAR_0;
    }
    *VAR_8 = FUNC_7(VAR_11);
    return VAR_4;
  }
  VAR_9 = FUNC_0(VAR_6, VAR_5, &VAR_10, &VAR_7[1]);
  if( VAR_9==VAR_4 && VAR_6->zLanguageid ){
    VAR_9 = FUNC_1(
        VAR_10, VAR_6->nColumn+2,
        FUNC_6(VAR_7[VAR_6->nColumn+4])
    );
  }
  if( VAR_9!=VAR_4 ) return VAR_9;
  if( VAR_3!=FUNC_8(VAR_7[3+VAR_6->nColumn]) ){
    if( VAR_3==FUNC_8(VAR_7[0])
     && VAR_3!=FUNC_8(VAR_7[1])
    ){

      return VAR_1;
    }
    VAR_9 = FUNC_2(VAR_10, 1, VAR_7[3+VAR_6->nColumn]);
    if( VAR_9!=VAR_4 ) return VAR_9;
  }




  FUNC_5(VAR_10);
  VAR_9 = FUNC_4(VAR_10);

  *VAR_8 = FUNC_3(VAR_6->db);
  return VAR_9;
}
