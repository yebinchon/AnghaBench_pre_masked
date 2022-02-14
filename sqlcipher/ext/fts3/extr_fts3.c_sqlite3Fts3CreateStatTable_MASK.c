
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bHasStat; int zName; int zDb; int db; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,char*,int ,int ) ;

void FUNC_1(int *VAR_1, Fts3Table *VAR_2){
  FUNC_0(VAR_1, VAR_2->db,
      "CREATE TABLE IF NOT EXISTS %Q.'%q_stat'"
          "(id INTEGER PRIMARY KEY, value BLOB);",
      VAR_2->zDb, VAR_2->zName
  );
  if( (*VAR_1)==VAR_0 ) VAR_2->bHasStat = 1;
}
