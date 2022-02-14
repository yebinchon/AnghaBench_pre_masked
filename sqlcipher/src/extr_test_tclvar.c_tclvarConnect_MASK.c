
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * interp; int base; } ;
typedef TYPE_1__ tclvar_vtab ;
typedef int sqlite3_vtab ;
typedef int sqlite3 ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int FUNC_2(
  sqlite3 *VAR_2,
  void *VAR_3,
  int VAR_4, const char *const*VAR_5,
  sqlite3_vtab **VAR_6,
  char **VAR_7
){
  tclvar_vtab *VAR_8;
  static const char VAR_9[] =
     "CREATE TABLE x("
     "  name TEXT,"
     "  arrayname TEXT,"
     "  value TEXT,"
     "  fullname TEXT PRIMARY KEY"
     ") WITHOUT ROWID";
  VAR_8 = FUNC_0( sizeof(*VAR_8) );
  if( VAR_8==0 ) return VAR_0;
  *VAR_6 = &VAR_8->base;
  VAR_8->interp = (Tcl_Interp *)VAR_3;
  FUNC_1(VAR_2, VAR_9);
  return VAR_1;
}
