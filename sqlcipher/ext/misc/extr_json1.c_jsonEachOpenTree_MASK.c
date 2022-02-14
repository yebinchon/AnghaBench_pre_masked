
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_2__ {int bRecursive; } ;
typedef TYPE_1__ JsonEachCursor ;


 int VAR_0 ;
 int FUNC_0 (int *,int **) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab *VAR_1, sqlite3_vtab_cursor **VAR_2){
  int VAR_3 = FUNC_0(VAR_1, VAR_2);
  if( VAR_3==VAR_0 ){
    JsonEachCursor *VAR_4 = (JsonEachCursor*)*VAR_2;
    VAR_4->bRecursive = 1;
  }
  return VAR_3;
}
