
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ eContent; int zName; int zDb; int db; scalar_t__ bColumnsize; } ;
typedef TYPE_1__ Fts5Config ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int ,int ,...) ;

int FUNC_1(Fts5Config *VAR_2){
  int VAR_3 = FUNC_0(VAR_2->db, 0,
      "DROP TABLE IF EXISTS %Q.'%q_data';"
      "DROP TABLE IF EXISTS %Q.'%q_idx';"
      "DROP TABLE IF EXISTS %Q.'%q_config';",
      VAR_2->zDb, VAR_2->zName,
      VAR_2->zDb, VAR_2->zName,
      VAR_2->zDb, VAR_2->zName
  );
  if( VAR_3==VAR_1 && VAR_2->bColumnsize ){
    VAR_3 = FUNC_0(VAR_2->db, 0,
        "DROP TABLE IF EXISTS %Q.'%q_docsize';",
        VAR_2->zDb, VAR_2->zName
    );
  }
  if( VAR_3==VAR_1 && VAR_2->eContent==VAR_0 ){
    VAR_3 = FUNC_0(VAR_2->db, 0,
        "DROP TABLE IF EXISTS %Q.'%q_content';",
        VAR_2->zDb, VAR_2->zName
    );
  }
  return VAR_3;
}
