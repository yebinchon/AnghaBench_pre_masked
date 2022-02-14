
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_3__ {int * db; } ;
typedef TYPE_1__ CidxTable ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int*,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(
  sqlite3 *VAR_1,
  void *VAR_2,
  int VAR_3, const char *const*VAR_4,
  sqlite3_vtab **VAR_5,
  char **VAR_6
){
  int VAR_7 = VAR_0;
  CidxTable *VAR_8;






  VAR_7 = FUNC_1(VAR_1,
      "CREATE TABLE xyz("
      " errmsg TEXT,"
      " current_key TEXT,"
      " index_name HIDDEN,"
      " after_key HIDDEN,"
      " scanner_sql HIDDEN"
      ")"
  );
  VAR_8 = FUNC_0(&VAR_7, sizeof(CidxTable));
  if( VAR_8 ){
    VAR_8->db = VAR_1;
  }

  *VAR_5 = (sqlite3_vtab*)VAR_8;
  return VAR_7;
}
