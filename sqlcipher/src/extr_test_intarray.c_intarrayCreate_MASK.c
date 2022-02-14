
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3_intarray ;
typedef int sqlite3 ;
struct TYPE_4__ {int * pContent; } ;
typedef TYPE_1__ intarray_vtab ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3 *VAR_1,
  void *VAR_2,
  int VAR_3,
  const char *const*VAR_4,
  sqlite3_vtab **VAR_5,
  char **VAR_6
){
  int VAR_7 = VAR_0;
  intarray_vtab *VAR_8 = FUNC_2(sizeof(intarray_vtab));

  if( VAR_8 ){
    FUNC_0(VAR_8, 0, sizeof(intarray_vtab));
    VAR_8->pContent = (sqlite3_intarray*)VAR_2;
    VAR_7 = FUNC_1(VAR_1, "CREATE TABLE x(value INTEGER PRIMARY KEY)");
  }
  *VAR_5 = (sqlite3_vtab *)VAR_8;
  return VAR_7;
}
