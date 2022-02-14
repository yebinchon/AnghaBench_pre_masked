
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* methods; } ;
struct TYPE_5__ {int (* ReScanCustomScan ) (TYPE_2__*) ;} ;
typedef TYPE_2__ CustomScanState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(CustomScanState *VAR_0)
{
 FUNC_0(VAR_0->methods->ReScanCustomScan != ((void*)0));
 VAR_0->methods->ReScanCustomScan(VAR_0);
}
