
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int iInst; int nCursor; } ;
typedef TYPE_1__ vtablog_vtab ;
struct TYPE_6__ {int iCursor; int base; } ;
typedef TYPE_2__ vtablog_cursor ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (char*,int,int) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  vtablog_vtab *VAR_4 = (vtablog_vtab*)VAR_2;
  vtablog_cursor *VAR_5;
  FUNC_1("vtablogOpen(tab=%d, cursor=%d)\n", VAR_4->iInst, ++VAR_4->nCursor);
  VAR_5 = FUNC_2( sizeof(*VAR_5) );
  if( VAR_5==0 ) return VAR_0;
  FUNC_0(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->iCursor = VAR_4->nCursor;
  *VAR_3 = &VAR_5->base;
  return VAR_1;
}
