
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ss_currentScanDesc; } ;
struct TYPE_4__ {int tss_TidPtr; TYPE_2__ ss; scalar_t__ tss_NumTids; int * tss_TidList; } ;
typedef TYPE_1__ TidScanState ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;

void
FUNC_3(TidScanState *VAR_0)
{
 if (VAR_0->tss_TidList)
  FUNC_1(VAR_0->tss_TidList);
 VAR_0->tss_TidList = ((void*)0);
 VAR_0->tss_NumTids = 0;
 VAR_0->tss_TidPtr = -1;


 if (VAR_0->ss.ss_currentScanDesc)
  FUNC_2(VAR_0->ss.ss_currentScanDesc, ((void*)0));

 FUNC_0(&VAR_0->ss);
}
