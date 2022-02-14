
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iValue; } ;
typedef TYPE_1__ wholenumber_cursor ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab_cursor *VAR_1,
  sqlite3_context *VAR_2,
  int VAR_3
){
  wholenumber_cursor *VAR_4 = (wholenumber_cursor*)VAR_1;
  FUNC_0(VAR_2, VAR_4->iValue);
  return VAR_0;
}
