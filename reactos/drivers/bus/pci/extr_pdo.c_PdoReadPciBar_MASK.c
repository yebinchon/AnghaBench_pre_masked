
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {TYPE_3__* PciDevice; } ;
struct TYPE_6__ {int AsULONG; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_8__ {TYPE_2__ SlotNumber; int BusNumber; } ;
typedef int* PULONG ;
typedef TYPE_4__* PPDO_DEVICE_EXTENSION ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int*,int,int) ;
 int FUNC_2 (int ,int ,int ,int*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOLEAN
FUNC_3(PPDO_DEVICE_EXTENSION VAR_4,
              ULONG VAR_5,
              PULONG VAR_6,
              PULONG VAR_7)
{
    ULONG VAR_8;
    ULONG VAR_9;


    VAR_8 = FUNC_1(VAR_2,
                                 VAR_4->PciDevice->BusNumber,
                                 VAR_4->PciDevice->SlotNumber.u.AsULONG,
                                 VAR_6,
                                 VAR_5,
                                 sizeof(ULONG));
    if (VAR_8 != sizeof(ULONG))
    {
        FUNC_0("Wrong size %lu\n", VAR_8);
        return VAR_0;
    }


    VAR_9 = VAR_1;
    VAR_8 = FUNC_2(VAR_2,
                                 VAR_4->PciDevice->BusNumber,
                                 VAR_4->PciDevice->SlotNumber.u.AsULONG,
                                 &VAR_9,
                                 VAR_5,
                                 sizeof(ULONG));
    if (VAR_8 != sizeof(ULONG))
    {
        FUNC_0("Wrong size %lu\n", VAR_8);
        return VAR_0;
    }


    VAR_8 = FUNC_1(VAR_2,
                                 VAR_4->PciDevice->BusNumber,
                                 VAR_4->PciDevice->SlotNumber.u.AsULONG,
                                 VAR_7,
                                 VAR_5,
                                 sizeof(ULONG));
    if (VAR_8 != sizeof(ULONG))
    {
        FUNC_0("Wrong size %lu\n", VAR_8);
        return VAR_0;
    }


    VAR_8 = FUNC_2(VAR_2,
                                 VAR_4->PciDevice->BusNumber,
                                 VAR_4->PciDevice->SlotNumber.u.AsULONG,
                                 VAR_6,
                                 VAR_5,
                                 sizeof(ULONG));
    if (VAR_8 != sizeof(ULONG))
    {
        FUNC_0("Wrong size %lu\n", VAR_8);
        return VAR_0;
    }

    return VAR_3;
}
