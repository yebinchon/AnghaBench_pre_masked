
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3 ;
struct TYPE_5__ {scalar_t__ pVtab; } ;
struct TYPE_7__ {int iRowid; TYPE_1__ base; scalar_t__ pStmt; } ;
struct TYPE_6__ {int * db; } ;
typedef TYPE_2__ CidxTable ;
typedef TYPE_3__ CidxCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab_cursor *VAR_2){
  CidxCursor *VAR_3 = (CidxCursor*)VAR_2;
  int VAR_4 = FUNC_3(VAR_3->pStmt);
  if( VAR_4!=VAR_1 ){
    VAR_4 = FUNC_2(VAR_3->pStmt);
    VAR_3->pStmt = 0;
    if( VAR_4!=VAR_0 ){
      sqlite3 *VAR_5 = ((CidxTable*)VAR_3->base.pVtab)->db;
      FUNC_0(VAR_3, "Cursor error: %s", FUNC_1(VAR_5));
    }
  }else{
    VAR_3->iRowid++;
    VAR_4 = VAR_0;
  }
  return VAR_4;
}
