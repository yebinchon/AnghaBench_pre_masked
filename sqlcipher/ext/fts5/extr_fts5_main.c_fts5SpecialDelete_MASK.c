
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {int pStorage; } ;
typedef TYPE_1__ Fts5FullTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
  Fts5FullTable *VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4 = VAR_1;
  int VAR_5 = FUNC_2(VAR_3[1]);
  if( VAR_5==VAR_0 ){
    sqlite3_int64 VAR_6 = FUNC_1(VAR_3[1]);
    VAR_4 = FUNC_0(VAR_2->pStorage, VAR_6, &VAR_3[2]);
  }
  return VAR_4;
}
