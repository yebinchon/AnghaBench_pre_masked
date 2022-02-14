
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_4__ {int * db; } ;
typedef TYPE_1__ completion_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3 *VAR_2,
  void *VAR_3,
  int VAR_4, const char *const*VAR_5,
  sqlite3_vtab **VAR_6,
  char **VAR_7
){
  completion_vtab *VAR_8;
  int VAR_9;

  (void)(VAR_3);
  (void)(VAR_4);
  (void)(VAR_5);
  (void)(VAR_7);







  VAR_9 = FUNC_1(VAR_2,
      "CREATE TABLE x("
      "  candidate TEXT,"
      "  prefix TEXT HIDDEN,"
      "  wholeline TEXT HIDDEN,"
      "  phase INT HIDDEN"
      ")");
  if( VAR_9==VAR_1 ){
    VAR_8 = FUNC_2( sizeof(*VAR_8) );
    *VAR_6 = (sqlite3_vtab*)VAR_8;
    if( VAR_8==0 ) return VAR_0;
    FUNC_0(VAR_8, 0, sizeof(*VAR_8));
    VAR_8->db = VAR_2;
  }
  return VAR_9;
}
