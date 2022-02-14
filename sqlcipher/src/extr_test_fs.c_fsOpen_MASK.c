
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_3__ {int base; } ;
typedef TYPE_1__ fs_cursor ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab *VAR_1, sqlite3_vtab_cursor **VAR_2){
  fs_cursor *VAR_3;
  VAR_3 = FUNC_0(sizeof(fs_cursor));
  *VAR_2 = &VAR_3->base;
  return VAR_0;
}
