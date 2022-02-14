
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int Btree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;

__attribute__((used)) static int FUNC_2(sqlite3 *VAR_2, Btree *VAR_3){
  if( FUNC_0(VAR_3) ){
    FUNC_1(VAR_2, VAR_0, "destination database is in use");
    return VAR_0;
  }
  return VAR_1;
}
