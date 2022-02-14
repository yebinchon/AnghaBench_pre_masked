
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_3__ {int aIndex; int nCol; scalar_t__ zTableName; int aCol; } ;
typedef TYPE_1__ echo_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int *,int *) ;
 int FUNC_1 (int *,scalar_t__,int ,int *) ;
 int FUNC_2 (int *,int,scalar_t__,int,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
  echo_vtab *VAR_3,
  sqlite3 *VAR_4
){
  int VAR_5 = VAR_1;

  if( VAR_3->zTableName ){
    sqlite3_stmt *VAR_6 = 0;
    VAR_5 = FUNC_6(VAR_4,
        "SELECT sql FROM sqlite_master WHERE type = 'table' AND name = ?",
        -1, &VAR_6, 0);
    if( VAR_5==VAR_1 ){
      FUNC_2(VAR_6, 1, VAR_3->zTableName, -1, 0);
      if( FUNC_7(VAR_6)==VAR_2 ){
        int VAR_7;
        const char *VAR_8 = (const char *)FUNC_3(VAR_6, 0);
        VAR_5 = FUNC_4(VAR_4, VAR_8);
        VAR_7 = FUNC_5(VAR_6);
        if( VAR_5==VAR_1 ){
          VAR_5 = VAR_7;
        }
      } else {
        VAR_5 = FUNC_5(VAR_6);
        if( VAR_5==VAR_1 ){
          VAR_5 = VAR_0;
        }
      }
      if( VAR_5==VAR_1 ){
        VAR_5 = FUNC_0(VAR_4, VAR_3->zTableName, &VAR_3->aCol, &VAR_3->nCol);
      }
      if( VAR_5==VAR_1 ){
        VAR_5 = FUNC_1(VAR_4, VAR_3->zTableName, VAR_3->nCol, &VAR_3->aIndex);
      }
    }
  }

  return VAR_5;
}
