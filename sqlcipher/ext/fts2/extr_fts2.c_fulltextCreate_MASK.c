
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
typedef int fts2Hash ;
struct TYPE_5__ {int zName; int zDb; int azContentColumn; int nColumn; } ;
typedef TYPE_1__ TableSpec ;
typedef int StringBuffer ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,TYPE_1__*,int **,char**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int,char const* const*,char**) ;
 int FUNC_7 (int *,int ,int ,char*) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(sqlite3 *VAR_1, void *VAR_2,
                          int VAR_3, const char * const *VAR_4,
                          sqlite3_vtab **VAR_5, char **VAR_6){
  int VAR_7;
  TableSpec VAR_8;
  StringBuffer VAR_9;
  FUNC_0(("FTS2 Create\n"));

  VAR_7 = FUNC_6(&VAR_8, VAR_3, VAR_4, VAR_6);
  if( VAR_7!=VAR_0 ) return VAR_7;

  FUNC_5(&VAR_9);
  FUNC_1(&VAR_9, "CREATE TABLE %_content(");
  FUNC_2(&VAR_9, VAR_8.nColumn, VAR_8.azContentColumn);
  FUNC_1(&VAR_9, ")");
  VAR_7 = FUNC_7(VAR_1, VAR_8.zDb, VAR_8.zName, FUNC_8(&VAR_9));
  FUNC_9(&VAR_9);
  if( VAR_7!=VAR_0 ) goto out;

  VAR_7 = FUNC_7(VAR_1, VAR_8.zDb, VAR_8.zName,
                "create table %_segments(block blob);");
  if( VAR_7!=VAR_0 ) goto out;

  VAR_7 = FUNC_7(VAR_1, VAR_8.zDb, VAR_8.zName,
                "create table %_segdir("
                "  level integer,"
                "  idx integer,"
                "  start_block integer,"
                "  leaves_end_block integer,"
                "  end_block integer,"
                "  root blob,"
                "  primary key(level, idx)"
                ");");
  if( VAR_7!=VAR_0 ) goto out;

  VAR_7 = FUNC_4(VAR_1, (fts2Hash *)VAR_2, &VAR_8, VAR_5, VAR_6);

out:
  FUNC_3(&VAR_8);
  return VAR_7;
}
