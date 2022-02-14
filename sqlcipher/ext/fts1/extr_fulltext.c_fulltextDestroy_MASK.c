
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {int zName; int db; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_1){
  fulltext_vtab *VAR_2 = (fulltext_vtab *)VAR_1;

  int VAR_3 = FUNC_1(VAR_2->db, VAR_2->zName,
                    "drop table %_content; drop table %_term");
  if( VAR_3!=VAR_0 ) return VAR_3;

  FUNC_0((fulltext_vtab *)VAR_1);
  return VAR_0;
}
