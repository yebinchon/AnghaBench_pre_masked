
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ TestDb ;
struct TYPE_7__ {scalar_t__ bCrash; int nCrashSync; } ;
struct TYPE_5__ {scalar_t__ xClose; } ;
typedef TYPE_3__ BtDb ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

void FUNC_1(TestDb *VAR_1, int VAR_2){
  BtDb *VAR_3 = (BtDb*)VAR_1;
  FUNC_0( VAR_1->pMethods->xClose==VAR_0 );
  FUNC_0( VAR_3->bCrash==0 );
  VAR_3->nCrashSync = VAR_2;
}
