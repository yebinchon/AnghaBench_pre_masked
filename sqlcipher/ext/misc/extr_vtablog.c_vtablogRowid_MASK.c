
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
typedef scalar_t__ sqlite_int64 ;
struct TYPE_7__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_1, sqlite_int64 *VAR_2){
  vtablog_cursor *VAR_3 = (vtablog_cursor*)VAR_1;
  vtablog_vtab *VAR_4 = (vtablog_vtab*)VAR_1->pVtab;
  FUNC_0("vtablogRowid(tab=%d, cursor=%d): %d\n",
         VAR_4->iInst, VAR_3->iCursor, (int)VAR_3->iRowid);
  *VAR_2 = VAR_3->iRowid;
  return VAR_0;
}
