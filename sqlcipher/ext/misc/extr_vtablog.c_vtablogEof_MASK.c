
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nRow; int iInst; } ;
typedef TYPE_1__ vtablog_vtab ;
struct TYPE_6__ {scalar_t__ iRowid; int iCursor; } ;
typedef TYPE_2__ vtablog_cursor ;
struct TYPE_7__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;


 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_0){
  vtablog_cursor *VAR_1 = (vtablog_cursor*)VAR_0;
  vtablog_vtab *VAR_2 = (vtablog_vtab*)VAR_0->pVtab;
  int VAR_3 = VAR_1->iRowid >= VAR_2->nRow;
  FUNC_0("vtablogEof(tab=%d, cursor=%d): %d\n",
         VAR_2->iInst, VAR_1->iCursor, VAR_3);
  return VAR_3;
}
