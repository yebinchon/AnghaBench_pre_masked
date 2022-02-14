
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Status; } ;
struct TYPE_6__ {int UserEvent; } ;
typedef int * PKEVENT ;
typedef TYPE_1__* PIRP ;
typedef TYPE_2__* PIO_STATUS_BLOCK ;
typedef int PDEVICE_OBJECT ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static NTSTATUS FUNC_3(
    PIRP VAR_6,
    PDEVICE_OBJECT VAR_7,
    PKEVENT VAR_8,
    PIO_STATUS_BLOCK VAR_9)
{
    NTSTATUS VAR_10;

    FUNC_0(VAR_4, ("Called\n"));

    FUNC_0(VAR_4, ("Irp->UserEvent = %p\n", VAR_6->UserEvent));

    VAR_10 = FUNC_1(VAR_7, VAR_6);
    FUNC_0(VAR_4, ("IoCallDriver: %08x\n", VAR_10));

    if ((VAR_10 == VAR_5) && (VAR_8 != ((void*)0))) {
        FUNC_0(VAR_3, ("Waiting on transport.\n"));
        FUNC_2(VAR_8,
                              VAR_0,
                              VAR_2,
                              VAR_1,
                              ((void*)0));
        VAR_10 = VAR_9->Status;
    }

    FUNC_0(VAR_3, ("Status (0x%X).\n", VAR_10));

    return VAR_10;
}
