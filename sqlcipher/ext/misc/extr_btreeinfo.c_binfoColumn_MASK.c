
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pVtab; } ;
typedef TYPE_2__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
struct TYPE_8__ {scalar_t__ hasRowid; scalar_t__ nPage; scalar_t__ depth; int zSchema; int nEntry; int pStmt; } ;
struct TYPE_6__ {int zErrMsg; } ;
typedef TYPE_3__ BinfoCursor ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,TYPE_3__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(
  sqlite3_vtab_cursor *VAR_4,
  sqlite3_context *VAR_5,
  int VAR_6
){
  BinfoCursor *VAR_7 = (BinfoCursor *)VAR_4;
  if( VAR_6>=136 && VAR_6<=VAR_0 && VAR_7->hasRowid<0 ){
    int VAR_8 = FUNC_1(VAR_7->pStmt, 132 +1);
    sqlite3 *VAR_9 = FUNC_3(VAR_5);
    int VAR_10 = FUNC_0(VAR_9, VAR_8, VAR_7);
    if( VAR_10 ){
      VAR_4->pVtab->zErrMsg = FUNC_5("%s", FUNC_4(VAR_9));
      return VAR_1;
    }
  }
  switch( VAR_6 ){
    case 135:
    case 128:
    case 129:
    case 132:
    case 130: {
      FUNC_9(VAR_5, FUNC_2(VAR_7->pStmt, VAR_6+1));
      break;
    }
    case 136: {
      FUNC_6(VAR_5, VAR_7->hasRowid);
      break;
    }
    case 134: {
      FUNC_7(VAR_5, VAR_7->nEntry);
      break;
    }
    case 133: {
      FUNC_6(VAR_5, VAR_7->nPage);
      break;
    }
    case 137: {
      FUNC_6(VAR_5, VAR_7->depth);
      break;
    }
    case 131: {
      FUNC_8(VAR_5, VAR_7->zSchema, -1, VAR_3);
      break;
    }
  }
  return VAR_2;
}
