
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {int nCursor; } ;
typedef TYPE_1__ closure_vtab ;
struct TYPE_6__ {int base; TYPE_1__* pVtab; } ;
typedef TYPE_2__ closure_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  closure_vtab *VAR_4 = (closure_vtab*)VAR_2;
  closure_cursor *VAR_5;
  VAR_5 = FUNC_1( sizeof(*VAR_5) );
  if( VAR_5==0 ) return VAR_0;
  FUNC_0(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->pVtab = VAR_4;
  *VAR_3 = &VAR_5->base;
  VAR_4->nCursor++;
  return VAR_1;
}
