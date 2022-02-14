
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_6__ {TYPE_2__* pVtab; int zParentColumn; int zIdColumn; int zTableName; TYPE_1__* pCurrent; } ;
typedef TYPE_3__ closure_cursor ;
struct TYPE_5__ {int zParentColumn; int zIdColumn; int zTableName; } ;
struct TYPE_4__ {int iGeneration; int id; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab_cursor *VAR_2, sqlite3_context *VAR_3, int VAR_4){
  closure_cursor *VAR_5 = (closure_cursor*)VAR_2;
  switch( VAR_4 ){
    case 132: {
      FUNC_1(VAR_3, VAR_5->pCurrent->id);
      break;
    }
    case 133: {
      FUNC_0(VAR_3, VAR_5->pCurrent->iGeneration);
      break;
    }
    case 129: {
      FUNC_2(VAR_3);
      break;
    }
    case 128: {
      FUNC_3(VAR_3,
         VAR_5->zTableName ? VAR_5->zTableName : VAR_5->pVtab->zTableName,
         -1, VAR_1);
      break;
    }
    case 131: {
      FUNC_3(VAR_3,
         VAR_5->zIdColumn ? VAR_5->zIdColumn : VAR_5->pVtab->zIdColumn,
         -1, VAR_1);
      break;
    }
    case 130: {
      FUNC_3(VAR_3,
         VAR_5->zParentColumn ? VAR_5->zParentColumn : VAR_5->pVtab->zParentColumn,
         -1, VAR_1);
      break;
    }
  }
  return VAR_0;
}
