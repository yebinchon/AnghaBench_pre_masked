
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bt_db ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ TestDb ;
struct TYPE_7__ {int * pBt; } ;
struct TYPE_5__ {scalar_t__ xClose; } ;
typedef TYPE_3__ BtDb ;


 scalar_t__ VAR_0 ;

bt_db *FUNC_0(TestDb *VAR_1){
  if( VAR_1->pMethods->xClose==VAR_0 ){
    return ((BtDb *)VAR_1)->pBt;
  }
  return 0;
}
