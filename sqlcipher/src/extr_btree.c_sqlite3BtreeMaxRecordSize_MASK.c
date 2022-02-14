
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_6__ {scalar_t__ eState; TYPE_1__* pBt; } ;
struct TYPE_5__ {int pageSize; scalar_t__ nPage; } ;
typedef TYPE_2__ BtCursor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

sqlite3_int64 FUNC_2(BtCursor *VAR_1){
  FUNC_0( FUNC_1(VAR_1) );
  FUNC_0( VAR_1->eState==VAR_0 );
  return VAR_1->pBt->pageSize * (sqlite3_int64)VAR_1->pBt->nPage;
}
