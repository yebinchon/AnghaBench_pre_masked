
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int x ;
struct TYPE_22__ {int busy; } ;
struct TYPE_24__ {TYPE_1__ init; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_25__ {int nCol; TYPE_7__* aCol; } ;
typedef TYPE_4__ Table ;
struct TYPE_28__ {TYPE_6__* pDflt; int zName; } ;
struct TYPE_23__ {int zToken; } ;
struct TYPE_27__ {TYPE_2__ u; int flags; struct TYPE_27__* pLeft; int op; } ;
struct TYPE_26__ {TYPE_4__* pNewTable; TYPE_3__* db; } ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ Expr ;
typedef TYPE_7__ Column ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,char const*,char const*) ;
 int FUNC_3 (TYPE_5__*,char*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*) ;
 TYPE_6__* FUNC_5 (TYPE_3__*,TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_6__*) ;

void FUNC_8(
  Parse *VAR_4,
  Expr *VAR_5,
  const char *VAR_6,
  const char *VAR_7
){
  Table *VAR_8;
  Column *VAR_9;
  sqlite3 *VAR_10 = VAR_4->db;
  VAR_8 = VAR_4->pNewTable;
  if( VAR_8!=0 ){
    VAR_9 = &(VAR_8->aCol[VAR_8->nCol-1]);
    if( !FUNC_6(VAR_5, VAR_10->init.busy) ){
      FUNC_3(VAR_4, "default value of column [%s] is not constant",
          VAR_9->zName);
    }else{



      Expr VAR_11;
      FUNC_4(VAR_10, VAR_9->pDflt);
      FUNC_0(&VAR_11, 0, sizeof(VAR_11));
      VAR_11.op = VAR_3;
      VAR_11.u.zToken = FUNC_2(VAR_10, VAR_6, VAR_7);
      VAR_11.pLeft = VAR_5;
      VAR_11.flags = VAR_0;
      VAR_9->pDflt = FUNC_5(VAR_10, &VAR_11, VAR_1);
      FUNC_1(VAR_10, VAR_11.u.zToken);
    }
  }
  if( VAR_2 ){
    FUNC_7(VAR_4, VAR_5);
  }
  FUNC_4(VAR_10, VAR_5);
}
