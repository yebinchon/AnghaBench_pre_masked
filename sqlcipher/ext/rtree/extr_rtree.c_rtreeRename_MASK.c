
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {int db; int zName; int zDb; } ;
typedef TYPE_1__ Rtree ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ,int ,char const*,int ,int ,char const*,int ,int ,char const*) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab *VAR_1, const char *VAR_2){
  Rtree *VAR_3 = (Rtree *)VAR_1;
  int VAR_4 = VAR_0;
  char *VAR_5 = FUNC_3(
    "ALTER TABLE %Q.'%q_node'   RENAME TO \"%w_node\";"
    "ALTER TABLE %Q.'%q_parent' RENAME TO \"%w_parent\";"
    "ALTER TABLE %Q.'%q_rowid'  RENAME TO \"%w_rowid\";"
    , VAR_3->zDb, VAR_3->zName, VAR_2
    , VAR_3->zDb, VAR_3->zName, VAR_2
    , VAR_3->zDb, VAR_3->zName, VAR_2
  );
  if( VAR_5 ){
    FUNC_0(VAR_3);
    VAR_4 = FUNC_1(VAR_3->db, VAR_5, 0, 0, 0);
    FUNC_2(VAR_5);
  }
  return VAR_4;
}
