
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * DriverContext; } ;
struct TYPE_6__ {TYPE_1__ Overlay; } ;
struct TYPE_7__ {TYPE_2__ Tail; int MdlAddress; } ;
typedef int PVOID ;
typedef TYPE_3__* PIRP ;
typedef int PIO_STACK_LOCATION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

PVOID FUNC_2(PIRP VAR_0, PIO_STACK_LOCATION VAR_1)
{
    FUNC_0(VAR_0->MdlAddress);
    FUNC_0(VAR_0->Tail.Overlay.DriverContext[0]);

    FUNC_1(VAR_1);

    return VAR_0->Tail.Overlay.DriverContext[0];
}
