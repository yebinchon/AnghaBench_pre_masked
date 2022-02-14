
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int giststate; } ;
struct TYPE_4__ {int opaque; } ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* GISTScanOpaque ;


 int FUNC_0 (int ) ;

void
FUNC_1(IndexScanDesc VAR_0)
{
 GISTScanOpaque VAR_1 = (GISTScanOpaque) VAR_0->opaque;





 FUNC_0(VAR_1->giststate);
}
