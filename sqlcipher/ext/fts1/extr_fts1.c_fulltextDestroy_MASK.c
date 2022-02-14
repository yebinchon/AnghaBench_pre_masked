
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {int zName; int zDb; int db; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_1){
  fulltext_vtab *VAR_2 = (fulltext_vtab *)VAR_1;
  int VAR_3;

  FUNC_0(("FTS1 Destroy %p\n", VAR_1));
  VAR_3 = FUNC_2(VAR_2->db, VAR_2->zDb, VAR_2->zName,
                "drop table if exists %_content;"
                "drop table if exists %_term;"
                );
  if( VAR_3!=VAR_0 ) return VAR_3;

  FUNC_1((fulltext_vtab *)VAR_1);
  return VAR_0;
}
