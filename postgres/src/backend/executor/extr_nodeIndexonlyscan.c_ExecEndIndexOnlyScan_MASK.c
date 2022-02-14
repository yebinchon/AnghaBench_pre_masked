
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_5__ {scalar_t__ ss_ScanTupleSlot; TYPE_3__ ps; } ;
struct TYPE_6__ {scalar_t__ ioss_VMBuffer; TYPE_1__ ss; scalar_t__ ioss_RuntimeContext; scalar_t__ ioss_ScanDesc; scalar_t__ ioss_RelationDesc; } ;
typedef scalar_t__ Relation ;
typedef scalar_t__ IndexScanDesc ;
typedef TYPE_2__ IndexOnlyScanState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;

void
FUNC_6(IndexOnlyScanState *VAR_2)
{
 Relation VAR_3;
 IndexScanDesc VAR_4;




 VAR_3 = VAR_2->ioss_RelationDesc;
 VAR_4 = VAR_2->ioss_ScanDesc;


 if (VAR_2->ioss_VMBuffer != VAR_0)
 {
  FUNC_3(VAR_2->ioss_VMBuffer);
  VAR_2->ioss_VMBuffer = VAR_0;
 }
 if (VAR_2->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_2->ss.ps.ps_ResultTupleSlot);
 FUNC_0(VAR_2->ss.ss_ScanTupleSlot);




 if (VAR_4)
  FUNC_5(VAR_4);
 if (VAR_3)
  FUNC_4(VAR_3, VAR_1);
}
