
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_4__ {int * db; } ;
typedef TYPE_1__ schema_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3 *VAR_2,
  void *VAR_3,
  int VAR_4, const char *const*VAR_5,
  sqlite3_vtab **VAR_6,
  char **VAR_7
){
  int VAR_8 = VAR_1;
  schema_vtab *VAR_9 = FUNC_2(sizeof(schema_vtab));
  if( VAR_9 ){
    FUNC_0(VAR_9, 0, sizeof(schema_vtab));
    VAR_9->db = VAR_2;

    VAR_8 = FUNC_1(VAR_2, VAR_0);

  }
  *VAR_6 = (sqlite3_vtab *)VAR_9;
  return VAR_8;
}
