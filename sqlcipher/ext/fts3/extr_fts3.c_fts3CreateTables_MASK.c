
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {scalar_t__ zContentTbl; char* zLanguageid; int nColumn; char** azColumn; scalar_t__ bHasStat; scalar_t__ bFts4; int zName; int zDb; scalar_t__ bHasDocsize; int * db; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int *,char*,int ,int ,...) ;
 int FUNC_2 (int*,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(Fts3Table *VAR_2){
  int VAR_3 = VAR_1;
  int VAR_4;
  sqlite3 *VAR_5 = VAR_2->db;

  if( VAR_2->zContentTbl==0 ){
    const char *VAR_6 = VAR_2->zLanguageid;
    char *VAR_7;


    VAR_7 = FUNC_4("docid INTEGER PRIMARY KEY");
    for(VAR_4=0; VAR_7 && VAR_4<VAR_2->nColumn; VAR_4++){
      char *VAR_8 = VAR_2->azColumn[VAR_4];
      VAR_7 = FUNC_4("%z, 'c%d%q'", VAR_7, VAR_4, VAR_8);
    }
    if( VAR_6 && VAR_7 ){
      VAR_7 = FUNC_4("%z, langid", VAR_7, VAR_6);
    }
    if( VAR_7==0 ) VAR_3 = VAR_0;


    FUNC_1(&VAR_3, VAR_5,
       "CREATE TABLE %Q.'%q_content'(%s)",
       VAR_2->zDb, VAR_2->zName, VAR_7
    );
    FUNC_3(VAR_7);
  }


  FUNC_1(&VAR_3, VAR_5,
      "CREATE TABLE %Q.'%q_segments'(blockid INTEGER PRIMARY KEY, block BLOB);",
      VAR_2->zDb, VAR_2->zName
  );
  FUNC_1(&VAR_3, VAR_5,
      "CREATE TABLE %Q.'%q_segdir'("
        "level INTEGER,"
        "idx INTEGER,"
        "start_block INTEGER,"
        "leaves_end_block INTEGER,"
        "end_block INTEGER,"
        "root BLOB,"
        "PRIMARY KEY(level, idx)"
      ");",
      VAR_2->zDb, VAR_2->zName
  );
  if( VAR_2->bHasDocsize ){
    FUNC_1(&VAR_3, VAR_5,
        "CREATE TABLE %Q.'%q_docsize'(docid INTEGER PRIMARY KEY, size BLOB);",
        VAR_2->zDb, VAR_2->zName
    );
  }
  FUNC_0( VAR_2->bHasStat==VAR_2->bFts4 );
  if( VAR_2->bHasStat ){
    FUNC_2(&VAR_3, VAR_2);
  }
  return VAR_3;
}
