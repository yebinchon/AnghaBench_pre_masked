
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int Btree ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;

int FUNC_3(sqlite3 *VAR_1, const char *VAR_2){
  Btree *VAR_3;






  VAR_3 = FUNC_1(VAR_1, VAR_2);
  return VAR_3 ? FUNC_0(VAR_3) : -1;
}
