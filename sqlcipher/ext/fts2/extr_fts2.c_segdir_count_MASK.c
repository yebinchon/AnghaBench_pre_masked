
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(fulltext_vtab *VAR_5, int *VAR_6, int *VAR_7){
  sqlite3_stmt *VAR_8;
  int VAR_9 = FUNC_0(VAR_5, VAR_0, &VAR_8);
  if( VAR_9!=VAR_3 ) return VAR_9;

  VAR_9 = FUNC_2(VAR_8);



  if( VAR_9==VAR_1 ){
    *VAR_6 = 0;
    *VAR_7 = 0;
    return VAR_3;
  }
  if( VAR_9!=VAR_4 ) return VAR_9;

  *VAR_6 = FUNC_1(VAR_8, 0);
  *VAR_7 = FUNC_1(VAR_8, 1);



  VAR_9 = FUNC_2(VAR_8);
  if( VAR_9==VAR_1 ) return VAR_3;
  if( VAR_9==VAR_4 ) return VAR_2;
  return VAR_9;
}
