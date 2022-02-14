
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {int pExplain; } ;
typedef TYPE_1__ explain_cursor ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_1, sqlite_int64 *VAR_2){
  explain_cursor *VAR_3 = (explain_cursor*)VAR_1;
  *VAR_2 = FUNC_0(VAR_3->pExplain, 0);
  return VAR_0;
}
