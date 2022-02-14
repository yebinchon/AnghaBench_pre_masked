
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int keyCtx; int tempCtx; } ;
struct TYPE_6__ {int opaque; } ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* GinScanOpaque ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(IndexScanDesc VAR_0)
{
 GinScanOpaque VAR_1 = (GinScanOpaque) VAR_0->opaque;

 FUNC_1(VAR_1);

 FUNC_0(VAR_1->tempCtx);
 FUNC_0(VAR_1->keyCtx);

 FUNC_2(VAR_1);
}
