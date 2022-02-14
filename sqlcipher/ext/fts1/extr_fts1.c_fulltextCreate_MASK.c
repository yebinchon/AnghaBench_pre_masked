
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_9__ {int zName; int zDb; int azContentColumn; int nColumn; } ;
typedef TYPE_1__ TableSpec ;
struct TYPE_10__ {char* s; } ;
typedef TYPE_2__ StringBuffer ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,int **,char**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int,char const* const*,char**) ;
 int FUNC_8 (int *,int ,int ,char*) ;

__attribute__((used)) static int FUNC_9(sqlite3 *VAR_1, void *VAR_2,
                          int VAR_3, const char * const *VAR_4,
                          sqlite3_vtab **VAR_5, char **VAR_6){
  int VAR_7;
  TableSpec VAR_8;
  StringBuffer VAR_9;
  FUNC_0(("FTS1 Create\n"));

  VAR_7 = FUNC_7(&VAR_8, VAR_3, VAR_4, VAR_6);
  if( VAR_7!=VAR_0 ) return VAR_7;

  FUNC_6(&VAR_9);
  FUNC_1(&VAR_9, "CREATE TABLE %_content(");
  FUNC_2(&VAR_9, VAR_8.nColumn, VAR_8.azContentColumn);
  FUNC_1(&VAR_9, ")");
  VAR_7 = FUNC_8(VAR_1, VAR_8.zDb, VAR_8.zName, VAR_9.s);
  FUNC_5(VAR_9.s);
  if( VAR_7!=VAR_0 ) goto out;

  VAR_7 = FUNC_8(VAR_1, VAR_8.zDb, VAR_8.zName,
    "create table %_term(term text, segment integer, doclist blob, "
                        "primary key(term, segment));");
  if( VAR_7!=VAR_0 ) goto out;

  VAR_7 = FUNC_4(VAR_1, &VAR_8, VAR_5, VAR_6);

out:
  FUNC_3(&VAR_8);
  return VAR_7;
}
