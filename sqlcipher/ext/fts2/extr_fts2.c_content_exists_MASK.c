
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
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(fulltext_vtab *VAR_5){
  sqlite3_stmt *VAR_6;
  int VAR_7 = FUNC_0(VAR_5, VAR_0, &VAR_6);
  if( VAR_7!=VAR_3 ) return VAR_7;

  VAR_7 = FUNC_1(VAR_6);
  if( VAR_7!=VAR_4 ) return VAR_7;



  VAR_7 = FUNC_1(VAR_6);
  if( VAR_7==VAR_1 ) return VAR_4;
  if( VAR_7==VAR_4 ) return VAR_2;
  return VAR_7;
}
