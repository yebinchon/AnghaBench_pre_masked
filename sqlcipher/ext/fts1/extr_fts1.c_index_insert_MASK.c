
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_value ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef int fts1Hash ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int **) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int **) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(fulltext_vtab *VAR_1, sqlite3_value *VAR_2,
                        sqlite3_value **VAR_3,
                        sqlite_int64 *VAR_4, fts1Hash *VAR_5){
  int VAR_6;

  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if( VAR_6!=VAR_0 ) return VAR_6;
  *VAR_4 = FUNC_2(VAR_1->db);
  return FUNC_1(VAR_1, VAR_5, *VAR_4, VAR_3);
}
