
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_5__ {scalar_t__ ss_ScanTupleSlot; TYPE_3__ ps; } ;
struct TYPE_6__ {TYPE_1__ ss; scalar_t__ iss_RuntimeContext; scalar_t__ iss_ScanDesc; scalar_t__ iss_RelationDesc; } ;
typedef scalar_t__ Relation ;
typedef TYPE_2__ IndexScanState ;
typedef scalar_t__ IndexScanDesc ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(IndexScanState *VAR_1)
{
 Relation VAR_2;
 IndexScanDesc VAR_3;




 VAR_2 = VAR_1->iss_RelationDesc;
 VAR_3 = VAR_1->iss_ScanDesc;
 if (VAR_1->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_1->ss.ps.ps_ResultTupleSlot);
 FUNC_0(VAR_1->ss.ss_ScanTupleSlot);




 if (VAR_3)
  FUNC_4(VAR_3);
 if (VAR_2)
  FUNC_3(VAR_2, VAR_0);
}
