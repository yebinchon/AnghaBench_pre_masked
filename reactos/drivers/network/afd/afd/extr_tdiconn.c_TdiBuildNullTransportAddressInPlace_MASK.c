
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int TAAddressCount; TYPE_1__* Address; } ;
struct TYPE_4__ {int AddressLength; int Address; int AddressType; } ;
typedef TYPE_2__* PTRANSPORT_ADDRESS ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

NTSTATUS FUNC_2(PTRANSPORT_ADDRESS VAR_2, UINT VAR_3)
{
    VAR_2->TAAddressCount = 1;

    VAR_2->Address[0].AddressLength = FUNC_1(VAR_3);
    if (!VAR_2->Address[0].AddressLength)
        return VAR_0;

    VAR_2->Address[0].AddressType = VAR_3;

    FUNC_0(VAR_2->Address[0].Address, VAR_2->Address[0].AddressLength);

    return VAR_1;
}
