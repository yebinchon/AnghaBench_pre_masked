
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SocketType; int TdiAddressObject; } ;
typedef TYPE_1__* PAFDFCB ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int *,int *) ;

NTSTATUS FUNC_2(
    PAFDFCB VAR_7)
{
    NTSTATUS VAR_8;

    VAR_8 = FUNC_1(VAR_7->TdiAddressObject,
        VAR_3,
        ((void*)0),
        ((void*)0));
    if (!FUNC_0(VAR_8)) { return VAR_8; }

    switch (VAR_7->SocketType) {
    case 128:
        VAR_8 = FUNC_1(VAR_7->TdiAddressObject,
            VAR_2,
            ((void*)0),
            ((void*)0));
        if (!FUNC_0(VAR_8)) { return VAR_8; }

        VAR_8 = FUNC_1(VAR_7->TdiAddressObject,
            VAR_4,
            ((void*)0),
            ((void*)0));
        if (!FUNC_0(VAR_8)) { return VAR_8; }

        VAR_8 = FUNC_1(VAR_7->TdiAddressObject,
            VAR_6,
            ((void*)0),
            ((void*)0));
        if (!FUNC_0(VAR_8)) { return VAR_8; }

        VAR_8 = FUNC_1(VAR_7->TdiAddressObject,
            VAR_1,
            ((void*)0),
            ((void*)0));
        if (!FUNC_0(VAR_8)) { return VAR_8; }
        break;

    case 130:
    case 129:
        VAR_8 = FUNC_1(VAR_7->TdiAddressObject,
            VAR_5,
            ((void*)0),
            ((void*)0));
        if (!FUNC_0(VAR_8)) { return VAR_8; }
    }
    return VAR_0;
}
