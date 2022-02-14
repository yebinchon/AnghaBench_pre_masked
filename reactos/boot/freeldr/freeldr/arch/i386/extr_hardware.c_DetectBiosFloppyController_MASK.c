
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_14__ {int Channel; scalar_t__ Port; } ;
struct TYPE_13__ {int Level; int Vector; int Affinity; } ;
struct TYPE_11__ {int LowPart; int HighPart; } ;
struct TYPE_12__ {int Length; TYPE_1__ Start; } ;
struct TYPE_15__ {TYPE_4__ Dma; TYPE_3__ Interrupt; TYPE_2__ Port; } ;
struct TYPE_17__ {TYPE_5__ u; scalar_t__ Flags; void* ShareDisposition; int Type; } ;
struct TYPE_16__ {int Version; int Revision; int Count; TYPE_7__* PartialDescriptors; } ;
typedef int * PCONFIGURATION_COMPONENT_DATA ;
typedef TYPE_6__* PCM_PARTIAL_RESOURCE_LIST ;
typedef TYPE_7__* PCM_PARTIAL_RESOURCE_DESCRIPTOR ;
typedef int CM_PARTIAL_RESOURCE_LIST ;
typedef int CM_PARTIAL_RESOURCE_DESCRIPTOR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ,int,int,int,int *,TYPE_6__*,int,int **) ;
 TYPE_6__* FUNC_3 (int,int ) ;
 int VAR_9 ;
 int FUNC_4 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;

__attribute__((used)) static
PCONFIGURATION_COMPONENT_DATA
FUNC_7(PCONFIGURATION_COMPONENT_DATA VAR_12)
{
    PCONFIGURATION_COMPONENT_DATA VAR_13;
    PCM_PARTIAL_RESOURCE_LIST VAR_14;
    PCM_PARTIAL_RESOURCE_DESCRIPTOR VAR_15;
    ULONG VAR_16;
    ULONG VAR_17;

    VAR_17 = FUNC_4();
    FUNC_5("Floppy count: %u\n", VAR_17);


    VAR_16 = sizeof(CM_PARTIAL_RESOURCE_LIST) +
           2 * sizeof(CM_PARTIAL_RESOURCE_DESCRIPTOR);
    VAR_14 = FUNC_3(VAR_16, VAR_11);
    if (VAR_14 == ((void*)0))
    {
        FUNC_1("Failed to allocate resource descriptor\n");
        return ((void*)0);
    }
    FUNC_6(VAR_14, 0, VAR_16);


    VAR_14->Version = 1;
    VAR_14->Revision = 1;
    VAR_14->Count = 3;


    VAR_15 = &VAR_14->PartialDescriptors[0];
    VAR_15->Type = VAR_6;
    VAR_15->ShareDisposition = VAR_2;
    VAR_15->Flags = VAR_1;
    VAR_15->u.Port.Start.LowPart = 0x03F0;
    VAR_15->u.Port.Start.HighPart = 0x0;
    VAR_15->u.Port.Length = 8;


    VAR_15 = &VAR_14->PartialDescriptors[1];
    VAR_15->Type = VAR_5;
    VAR_15->ShareDisposition = VAR_3;
    VAR_15->Flags = VAR_0;
    VAR_15->u.Interrupt.Level = 6;
    VAR_15->u.Interrupt.Vector = 6;
    VAR_15->u.Interrupt.Affinity = 0xFFFFFFFF;


    VAR_15 = &VAR_14->PartialDescriptors[2];
    VAR_15->Type = VAR_4;
    VAR_15->ShareDisposition = VAR_3;
    VAR_15->Flags = 0;
    VAR_15->u.Dma.Channel = 2;
    VAR_15->u.Dma.Port = 0;


    FUNC_2(VAR_12,
                           VAR_7,
                           VAR_8,
                           VAR_10 | VAR_9,
                           0x0,
                           0xFFFFFFFF,
                           ((void*)0),
                           VAR_14,
                           VAR_16,
                           &VAR_13);
    FUNC_5("Created key: DiskController\\0\n");

    if (VAR_17)
        FUNC_0(VAR_13);

    return VAR_13;
}
