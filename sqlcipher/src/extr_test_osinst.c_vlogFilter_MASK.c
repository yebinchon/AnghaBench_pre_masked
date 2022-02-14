
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_2__ {int iOffset; scalar_t__ iRowid; } ;
typedef TYPE_1__ VfslogCsr ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab_cursor *VAR_0,
  int VAR_1, const char *VAR_2,
  int VAR_3, sqlite3_value **VAR_4
){
  VfslogCsr *VAR_5 = (VfslogCsr *)VAR_0;
  VAR_5->iRowid = 0;
  VAR_5->iOffset = 20;
  return FUNC_0(VAR_0);
}
