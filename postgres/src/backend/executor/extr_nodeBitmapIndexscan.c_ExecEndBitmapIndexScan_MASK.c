
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ biss_RuntimeContext; scalar_t__ biss_ScanDesc; scalar_t__ biss_RelationDesc; } ;
typedef scalar_t__ Relation ;
typedef scalar_t__ IndexScanDesc ;
typedef TYPE_1__ BitmapIndexScanState ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(BitmapIndexScanState *VAR_1)
{
 Relation VAR_2;
 IndexScanDesc VAR_3;




 VAR_2 = VAR_1->biss_RelationDesc;
 VAR_3 = VAR_1->biss_ScanDesc;
 if (VAR_3)
  FUNC_2(VAR_3);
 if (VAR_2)
  FUNC_1(VAR_2, VAR_0);
}
