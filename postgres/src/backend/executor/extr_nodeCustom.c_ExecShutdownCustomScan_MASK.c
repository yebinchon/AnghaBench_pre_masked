
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* ShutdownCustomScan ) (TYPE_1__*) ;} ;
struct TYPE_5__ {TYPE_2__* methods; } ;
typedef TYPE_1__ CustomScanState ;
typedef TYPE_2__ CustomExecMethods ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(CustomScanState *VAR_0)
{
 const CustomExecMethods *VAR_1 = VAR_0->methods;

 if (VAR_1->ShutdownCustomScan)
  VAR_1->ShutdownCustomScan(VAR_0);
}
