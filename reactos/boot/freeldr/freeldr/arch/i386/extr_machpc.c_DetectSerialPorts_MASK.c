
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_15__ {int DataSize; } ;
struct TYPE_14__ {int Affinity; scalar_t__ Vector; scalar_t__ Level; } ;
struct TYPE_12__ {int HighPart; scalar_t__ LowPart; } ;
struct TYPE_13__ {int Length; TYPE_1__ Start; } ;
struct TYPE_16__ {TYPE_4__ DeviceSpecificData; TYPE_3__ Interrupt; TYPE_2__ Port; } ;
struct TYPE_19__ {TYPE_5__ u; scalar_t__ Flags; void* ShareDisposition; int Type; } ;
struct TYPE_18__ {int Version; int Revision; int Count; TYPE_8__* PartialDescriptors; } ;
struct TYPE_17__ {int BaudClock; } ;
typedef int PCONFIGURATION_COMPONENT_DATA ;
typedef TYPE_6__* PCM_SERIAL_DEVICE_DATA ;
typedef TYPE_7__* PCM_PARTIAL_RESOURCE_LIST ;
typedef TYPE_8__* PCM_PARTIAL_RESOURCE_DESCRIPTOR ;
typedef scalar_t__ (* GET_SERIAL_PORT ) (scalar_t__,scalar_t__*) ;
typedef int CM_SERIAL_DEVICE_DATA ;
typedef int CM_PARTIAL_RESOURCE_LIST ;
typedef int CM_PARTIAL_RESOURCE_DESCRIPTOR ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,int,scalar_t__,int,int *,TYPE_7__*,scalar_t__,int *) ;
 TYPE_7__* FUNC_4 (scalar_t__,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_7__*,int ,scalar_t__) ;
 int FUNC_9 (int *,char*,scalar_t__) ;

VOID
FUNC_10(PCONFIGURATION_COMPONENT_DATA VAR_14, GET_SERIAL_PORT VAR_15, ULONG VAR_16)
{
    PCM_PARTIAL_RESOURCE_LIST VAR_17;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR VAR_18;
    PCM_SERIAL_DEVICE_DATA VAR_19;
    ULONG VAR_20;
    ULONG VAR_21;
    CHAR VAR_22[80];
    ULONG VAR_23 = 0;
    PCONFIGURATION_COMPONENT_DATA VAR_24;
    ULONG VAR_25;
    ULONG VAR_26;

    FUNC_6("DetectSerialPorts()\n");

    for (VAR_25 = 0; VAR_25 < VAR_16; VAR_25++)
    {
        VAR_21 = VAR_15(VAR_25, &VAR_20);
        if ((VAR_21 == 0) || !FUNC_0(FUNC_7(VAR_21)))
            continue;

        FUNC_6("Found COM%u port at 0x%x\n", VAR_25 + 1, VAR_21);


        FUNC_9(VAR_22, "COM%ld", VAR_25 + 1);


        VAR_26 = sizeof(CM_PARTIAL_RESOURCE_LIST) +
               2 * sizeof(CM_PARTIAL_RESOURCE_DESCRIPTOR) +
               sizeof(CM_SERIAL_DEVICE_DATA);
        VAR_17 = FUNC_4(VAR_26, VAR_13);
        if (VAR_17 == ((void*)0))
        {
            FUNC_2("Failed to allocate resource descriptor\n");
            continue;
        }
        FUNC_8(VAR_17, 0, VAR_26);


        VAR_17->Version = 1;
        VAR_17->Revision = 1;
        VAR_17->Count = 3;


        VAR_18 = &VAR_17->PartialDescriptors[0];
        VAR_18->Type = VAR_6;
        VAR_18->ShareDisposition = VAR_2;
        VAR_18->Flags = VAR_1;
        VAR_18->u.Port.Start.LowPart = VAR_21;
        VAR_18->u.Port.Start.HighPart = 0x0;
        VAR_18->u.Port.Length = 7;


        VAR_18 = &VAR_17->PartialDescriptors[1];
        VAR_18->Type = VAR_5;
        VAR_18->ShareDisposition = VAR_3;
        VAR_18->Flags = VAR_0;
        VAR_18->u.Interrupt.Level = VAR_20;
        VAR_18->u.Interrupt.Vector = VAR_20;
        VAR_18->u.Interrupt.Affinity = 0xFFFFFFFF;


        VAR_18 = &VAR_17->PartialDescriptors[2];
        VAR_18->Type = VAR_4;
        VAR_18->ShareDisposition = VAR_3;
        VAR_18->Flags = 0;
        VAR_18->u.DeviceSpecificData.DataSize = sizeof(CM_SERIAL_DEVICE_DATA);

        VAR_19 =
            (PCM_SERIAL_DEVICE_DATA)&VAR_17->PartialDescriptors[3];
        VAR_19->BaudClock = 1843200;


        FUNC_3(VAR_14,
                               VAR_9,
                               VAR_12,
                               VAR_11 | VAR_10 | VAR_7 | VAR_8,
                               VAR_23,
                               0xFFFFFFFF,
                               VAR_22,
                               VAR_17,
                               VAR_26,
                               &VAR_24);

        if (!FUNC_5(FUNC_7(VAR_21)))
        {

            FUNC_1(VAR_24, FUNC_7(VAR_21));
        }

        VAR_23++;
    }
}
