
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {int pStmt; } ;
typedef TYPE_1__ fs_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_3){
  fs_cursor *VAR_4 = (fs_cursor *)VAR_3;
  int VAR_5;

  VAR_5 = FUNC_0(VAR_4->pStmt);
  if( VAR_5==VAR_2 || VAR_5==VAR_0 ) VAR_5 = VAR_1;

  return VAR_5;
}
