
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_4__ {scalar_t__ pTmpSpace; int pageSize; int walSyncFlags; int pBusyHandlerArg; int xBusyHandler; scalar_t__ pWal; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int *,int,int ,int ,int ,int ,int *,int*,int*) ;

int FUNC_2(
  Pager *VAR_2,
  sqlite3 *VAR_3,
  int VAR_4,
  int *VAR_5,
  int *VAR_6
){
  int VAR_7 = VAR_1;
  if( VAR_2->pWal ){
    VAR_7 = FUNC_1(VAR_2->pWal, VAR_3, VAR_4,
        (VAR_4==VAR_0 ? 0 : VAR_2->xBusyHandler),
        VAR_2->pBusyHandlerArg,
        VAR_2->walSyncFlags, VAR_2->pageSize, (u8 *)VAR_2->pTmpSpace,
        VAR_5, VAR_6
    );
    FUNC_0(VAR_2);
  }
  return VAR_7;
}
