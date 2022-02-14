
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(fulltext_vtab *VAR_3){
  sqlite3_stmt *VAR_4;
  int VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_4);
  if( VAR_5!=VAR_2 ) return VAR_5;

  VAR_5 = FUNC_1(VAR_4);
  if( VAR_5!=VAR_2 ) return VAR_5;

  VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_4);
  if( VAR_5!=VAR_2 ) return VAR_5;

  return FUNC_1(VAR_4);
}
