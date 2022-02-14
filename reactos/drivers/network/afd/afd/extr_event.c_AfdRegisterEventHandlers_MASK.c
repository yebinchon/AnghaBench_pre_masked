
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SocketType; int TdiAddressObject; } ;
typedef int PVOID ;
typedef TYPE_1__* PAFDFCB ;
typedef int NTSTATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

NTSTATUS FUNC_3(
    PAFDFCB VAR_13)
{
    NTSTATUS VAR_14;

    FUNC_2(VAR_13->TdiAddressObject);


    VAR_14 = FUNC_1(VAR_13->TdiAddressObject,
        VAR_9,
        (PVOID)VAR_1,
        (PVOID)VAR_13);
    if (!FUNC_0(VAR_14)) { return VAR_14; }

    switch (VAR_13->SocketType) {
    case 128:
        VAR_14 = FUNC_1(VAR_13->TdiAddressObject,
            VAR_8,
            (PVOID)VAR_0,
            (PVOID)VAR_13);
        if (!FUNC_0(VAR_14)) { return VAR_14; }

        VAR_14 = FUNC_1(VAR_13->TdiAddressObject,
            VAR_10,
            (PVOID)VAR_2,
            (PVOID)VAR_13);
        if (!FUNC_0(VAR_14)) { return VAR_14; }

        VAR_14 = FUNC_1(VAR_13->TdiAddressObject,
            VAR_12,
            (PVOID)VAR_5,
            (PVOID)VAR_13);
        if (!FUNC_0(VAR_14)) { return VAR_14; }

        VAR_14 = FUNC_1(VAR_13->TdiAddressObject,
            VAR_7,
            (PVOID)VAR_4,
            (PVOID)VAR_13);
        if (!FUNC_0(VAR_14)) { return VAR_14; }
        break;

    case 130:
    case 129:
        VAR_14 = FUNC_1(VAR_13->TdiAddressObject,
            VAR_11,
            (PVOID)VAR_3,
            (PVOID)VAR_13);
        if (!FUNC_0(VAR_14)) { return VAR_14; }
    }
    return VAR_6;
}
