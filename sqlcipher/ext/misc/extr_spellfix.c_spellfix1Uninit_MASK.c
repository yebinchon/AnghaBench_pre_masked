
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_4__ {struct TYPE_4__* zCostTable; int pConfig3; struct TYPE_4__* zTableName; int zDbName; int * db; } ;
typedef TYPE_1__ spellfix1_vtab ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int *,char*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(int VAR_1, sqlite3_vtab *VAR_2){
  spellfix1_vtab *VAR_3 = (spellfix1_vtab*)VAR_2;
  int VAR_4 = VAR_0;
  if( VAR_1 ){
    sqlite3 *VAR_5 = VAR_3->db;
    FUNC_1(&VAR_4, VAR_5, "DROP TABLE IF EXISTS \"%w\".\"%w_vocab\"",
                  VAR_3->zDbName, VAR_3->zTableName);
  }
  if( VAR_4==VAR_0 ){
    FUNC_2(VAR_3->zTableName);
    FUNC_0(VAR_3->pConfig3);
    FUNC_2(VAR_3->zCostTable);
    FUNC_2(VAR_3);
  }
  return VAR_4;
}
