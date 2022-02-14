
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int * Interrupt; } ;
struct TYPE_6__ {int OldIrql; } ;
struct TYPE_7__ {int Lock; TYPE_1__ Context; } ;
typedef TYPE_2__* PSTOR_LOCK_HANDLE ;
typedef TYPE_3__* PFDO_DEVICE_EXTENSION ;


 int FUNC_0 (char*,...) ;


 int FUNC_1 (int *,int ) ;


__attribute__((used)) static
VOID
FUNC_2(
    PFDO_DEVICE_EXTENSION VAR_0,
    PSTOR_LOCK_HANDLE VAR_1)
{
    FUNC_0("PortReleaseSpinLock(%p %p)\n",
            VAR_0, VAR_1);

    switch (VAR_1->Lock)
    {
        case 130:
            FUNC_0("DpcLock\n");
            break;

        case 128:
            FUNC_0("StartIoLock\n");
            break;

        case 129:
            FUNC_0("InterruptLock\n");
            if (VAR_0->Interrupt != ((void*)0))
                FUNC_1(VAR_0->Interrupt,
                                           VAR_1->Context.OldIrql);
            break;
    }
}
