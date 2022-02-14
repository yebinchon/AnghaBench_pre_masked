
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_value ;
struct TYPE_6__ {int db; } ;
typedef TYPE_1__ fulltext_vtab ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int **) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int **) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(fulltext_vtab *VAR_1, sqlite3_value *VAR_2,
                        sqlite3_value **VAR_3, sqlite_int64 *VAR_4){
  int VAR_5;

  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if( VAR_5!=VAR_0 ) return VAR_5;

  *VAR_4 = FUNC_3(VAR_1->db);
  VAR_5 = FUNC_1(VAR_1, *VAR_4);
  if( VAR_5!=VAR_0 ) return VAR_5;

  return FUNC_2(VAR_1, *VAR_4, VAR_3);
}
