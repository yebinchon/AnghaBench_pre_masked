
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int iInst; } ;
typedef TYPE_1__ vtablog_vtab ;
struct TYPE_7__ {int iCursor; } ;
typedef TYPE_2__ vtablog_cursor ;
struct TYPE_8__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1){
  vtablog_cursor *VAR_2 = (vtablog_cursor*)VAR_1;
  vtablog_vtab *VAR_3 = (vtablog_vtab*)VAR_1->pVtab;
  FUNC_0("vtablogClose(tab=%d, cursor=%d)\n", VAR_3->iInst, VAR_2->iCursor);
  FUNC_1(VAR_1);
  return VAR_0;
}
