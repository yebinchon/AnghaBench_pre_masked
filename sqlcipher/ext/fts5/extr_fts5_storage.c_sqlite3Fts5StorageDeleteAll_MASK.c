
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int zName; int zDb; int db; scalar_t__ bColumnsize; } ;
struct TYPE_5__ {int pIndex; TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Storage ;
typedef TYPE_2__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int ,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;

int FUNC_3(Fts5Storage *VAR_2){
  Fts5Config *VAR_3 = VAR_2->pConfig;
  int VAR_4;


  VAR_4 = FUNC_0(VAR_3->db, 0,
      "DELETE FROM %Q.'%q_data';"
      "DELETE FROM %Q.'%q_idx';",
      VAR_3->zDb, VAR_3->zName,
      VAR_3->zDb, VAR_3->zName
  );
  if( VAR_4==VAR_1 && VAR_3->bColumnsize ){
    VAR_4 = FUNC_0(VAR_3->db, 0,
        "DELETE FROM %Q.'%q_docsize';",
        VAR_3->zDb, VAR_3->zName
    );
  }



  if( VAR_4==VAR_1 ){
    VAR_4 = FUNC_1(VAR_2->pIndex);
  }
  if( VAR_4==VAR_1 ){
    VAR_4 = FUNC_2(VAR_2, "version", 0, VAR_0);
  }
  return VAR_4;
}
