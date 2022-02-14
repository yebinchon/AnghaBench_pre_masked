
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* aDb; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_21__ {int zName; int pSchema; } ;
typedef TYPE_4__ Table ;
struct TYPE_23__ {TYPE_3__* db; } ;
struct TYPE_22__ {int nSrc; TYPE_2__* a; } ;
struct TYPE_19__ {scalar_t__ pOn; scalar_t__ pUsing; void* zDatabase; void* zName; } ;
struct TYPE_18__ {int zDbSName; } ;
typedef TYPE_5__ SrcList ;
typedef int SelectDest ;
typedef int Select ;
typedef TYPE_6__ Parse ;
typedef int ExprList ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_3__*,int ) ;
 int * FUNC_2 (TYPE_3__*,int *,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_6__*,int *,int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int *,int ,int) ;
 int * FUNC_7 (TYPE_6__*,int ,TYPE_5__*,int *,int ,int ,int *,int ,int *) ;
 TYPE_5__* FUNC_8 (TYPE_6__*,int ,int ,int ) ;

void FUNC_9(
  Parse *VAR_2,
  Table *VAR_3,
  Expr *VAR_4,
  ExprList *VAR_5,
  Expr *VAR_6,
  int VAR_7
){
  SelectDest VAR_8;
  Select *VAR_9;
  SrcList *VAR_10;
  sqlite3 *VAR_11 = VAR_2->db;
  int VAR_12 = FUNC_3(VAR_11, VAR_3->pSchema);
  VAR_4 = FUNC_2(VAR_11, VAR_4, 0);
  VAR_10 = FUNC_8(VAR_2, 0, 0, 0);
  if( VAR_10 ){
    FUNC_0( VAR_10->nSrc==1 );
    VAR_10->a[0].zName = FUNC_1(VAR_11, VAR_3->zName);
    VAR_10->a[0].zDatabase = FUNC_1(VAR_11, VAR_11->aDb[VAR_12].zDbSName);
    FUNC_0( VAR_10->a[0].pOn==0 );
    FUNC_0( VAR_10->a[0].pUsing==0 );
  }
  VAR_9 = FUNC_7(VAR_2, 0, VAR_10, VAR_4, 0, 0, VAR_5,
                          VAR_0, VAR_6);
  FUNC_6(&VAR_8, VAR_1, VAR_7);
  FUNC_4(VAR_2, VAR_9, &VAR_8);
  FUNC_5(VAR_11, VAR_9);
}
