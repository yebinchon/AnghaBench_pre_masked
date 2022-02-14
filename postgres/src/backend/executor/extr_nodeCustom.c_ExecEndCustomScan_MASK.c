
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int ps_ResultTupleSlot; } ;
struct TYPE_8__ {int ss_ScanTupleSlot; TYPE_5__ ps; } ;
struct TYPE_9__ {TYPE_2__ ss; TYPE_1__* methods; } ;
struct TYPE_7__ {int (* EndCustomScan ) (TYPE_3__*) ;} ;
typedef TYPE_3__ CustomScanState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*) ;

void
FUNC_4(CustomScanState *VAR_0)
{
 FUNC_0(VAR_0->methods->EndCustomScan != ((void*)0));
 VAR_0->methods->EndCustomScan(VAR_0);


 FUNC_2(&VAR_0->ss.ps);


 FUNC_1(VAR_0->ss.ps.ps_ResultTupleSlot);
 FUNC_1(VAR_0->ss.ss_ScanTupleSlot);
}
