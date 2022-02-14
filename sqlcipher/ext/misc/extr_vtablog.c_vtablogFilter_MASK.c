
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iInst; } ;
typedef TYPE_1__ vtablog_vtab ;
struct TYPE_6__ {int iCursor; scalar_t__ iRowid; } ;
typedef TYPE_2__ vtablog_cursor ;
struct TYPE_7__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  vtablog_cursor *VAR_6 = (vtablog_cursor *)VAR_1;
  vtablog_vtab *VAR_7 = (vtablog_vtab*)VAR_1->pVtab;
  FUNC_0("vtablogFilter(tab=%d, cursor=%d):\n", VAR_7->iInst, VAR_6->iCursor);
  VAR_6->iRowid = 0;
  return VAR_0;
}
