
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_2__ {int db; int zName; int zDb; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ,int ,char const*,int ,int ,char const*,int ,int ,char const*) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab *VAR_1,
  const char *VAR_2
){
  fulltext_vtab *VAR_3 = (fulltext_vtab *)VAR_1;
  int VAR_4 = VAR_0;
  char *VAR_5 = FUNC_2(
    "ALTER TABLE %Q.'%q_content'  RENAME TO '%q_content';"
    "ALTER TABLE %Q.'%q_segments' RENAME TO '%q_segments';"
    "ALTER TABLE %Q.'%q_segdir'   RENAME TO '%q_segdir';"
    , VAR_3->zDb, VAR_3->zName, VAR_2
    , VAR_3->zDb, VAR_3->zName, VAR_2
    , VAR_3->zDb, VAR_3->zName, VAR_2
  );
  if( VAR_5 ){
    VAR_4 = FUNC_0(VAR_3->db, VAR_5, 0, 0, 0);
    FUNC_1(VAR_5);
  }
  return VAR_4;
}
