
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bo_bdesc; int bo_rmAccess; } ;
struct TYPE_5__ {scalar_t__ opaque; } ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__ BrinOpaque ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(IndexScanDesc VAR_0)
{
 BrinOpaque *VAR_1 = (BrinOpaque *) VAR_0->opaque;

 FUNC_0(VAR_1->bo_rmAccess);
 FUNC_1(VAR_1->bo_bdesc);
 FUNC_2(VAR_1);
}
