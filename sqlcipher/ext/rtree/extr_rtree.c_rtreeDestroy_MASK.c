
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_4__ {int db; int zName; int zDb; } ;
typedef TYPE_1__ Rtree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(sqlite3_vtab *VAR_2){
  Rtree *VAR_3 = (Rtree *)VAR_2;
  int VAR_4;
  char *VAR_5 = FUNC_4(
    "DROP TABLE '%q'.'%q_node';"
    "DROP TABLE '%q'.'%q_rowid';"
    "DROP TABLE '%q'.'%q_parent';",
    VAR_3->zDb, VAR_3->zName,
    VAR_3->zDb, VAR_3->zName,
    VAR_3->zDb, VAR_3->zName
  );
  if( !VAR_5 ){
    VAR_4 = VAR_0;
  }else{
    FUNC_0(VAR_3);
    VAR_4 = FUNC_2(VAR_3->db, VAR_5, 0, 0, 0);
    FUNC_3(VAR_5);
  }
  if( VAR_4==VAR_1 ){
    FUNC_1(VAR_3);
  }

  return VAR_4;
}
