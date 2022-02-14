
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {size_t iDb; } ;
struct TYPE_13__ {TYPE_1__ init; TYPE_2__* aDb; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_14__ {int pCheck; } ;
typedef TYPE_4__ Table ;
struct TYPE_16__ {scalar_t__ n; } ;
struct TYPE_15__ {TYPE_3__* db; TYPE_7__ constraintName; TYPE_4__* pNewTable; } ;
struct TYPE_12__ {int pBt; } ;
typedef TYPE_5__ Parse ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_5__*,int ,int *) ;
 int FUNC_3 (TYPE_5__*,int ,TYPE_7__*,int) ;

void FUNC_4(
  Parse *VAR_1,
  Expr *VAR_2
){

  Table *VAR_3 = VAR_1->pNewTable;
  sqlite3 *VAR_4 = VAR_1->db;
  if( VAR_3 && !VAR_0
   && !FUNC_0(VAR_4->aDb[VAR_4->init.iDb].pBt)
  ){
    VAR_3->pCheck = FUNC_2(VAR_1, VAR_3->pCheck, VAR_2);
    if( VAR_1->constraintName.n ){
      FUNC_3(VAR_1, VAR_3->pCheck, &VAR_1->constraintName, 1);
    }
  }else

  {
    FUNC_1(VAR_1->db, VAR_2);
  }
}
