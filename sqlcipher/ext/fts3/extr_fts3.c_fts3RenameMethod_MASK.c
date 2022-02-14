
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_4__ {scalar_t__ nPendingData; scalar_t__ zContentTbl; int zName; int zDb; scalar_t__ bHasStat; scalar_t__ bHasDocsize; int * db; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int *,char*,int ,int ,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_vtab *VAR_1,
  const char *VAR_2
){
  Fts3Table *VAR_3 = (Fts3Table *)VAR_1;
  sqlite3 *VAR_4 = VAR_3->db;
  int VAR_5;



  VAR_5 = FUNC_2(VAR_3);







  FUNC_0( VAR_3->nPendingData==0 );
  if( VAR_5==VAR_0 ){
    VAR_5 = FUNC_3(VAR_3);
  }

  if( VAR_3->zContentTbl==0 ){
    FUNC_1(&VAR_5, VAR_4,
      "ALTER TABLE %Q.'%q_content'  RENAME TO '%q_content';",
      VAR_3->zDb, VAR_3->zName, VAR_2
    );
  }

  if( VAR_3->bHasDocsize ){
    FUNC_1(&VAR_5, VAR_4,
      "ALTER TABLE %Q.'%q_docsize'  RENAME TO '%q_docsize';",
      VAR_3->zDb, VAR_3->zName, VAR_2
    );
  }
  if( VAR_3->bHasStat ){
    FUNC_1(&VAR_5, VAR_4,
      "ALTER TABLE %Q.'%q_stat'  RENAME TO '%q_stat';",
      VAR_3->zDb, VAR_3->zName, VAR_2
    );
  }
  FUNC_1(&VAR_5, VAR_4,
    "ALTER TABLE %Q.'%q_segments' RENAME TO '%q_segments';",
    VAR_3->zDb, VAR_3->zName, VAR_2
  );
  FUNC_1(&VAR_5, VAR_4,
    "ALTER TABLE %Q.'%q_segdir'   RENAME TO '%q_segdir';",
    VAR_3->zDb, VAR_3->zName, VAR_2
  );
  return VAR_5;
}
