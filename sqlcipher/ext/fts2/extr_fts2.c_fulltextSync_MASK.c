
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vtab ;
typedef int fulltext_vtab ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_0){
  FUNC_0(("FTS2 xSync()\n"));
  return FUNC_1((fulltext_vtab *)VAR_0);
}
