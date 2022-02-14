
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int relationship ;
struct TYPE_23__ {int ActiveGroupCount; TYPE_7__* GroupInfo; int MaximumGroupCount; } ;
struct TYPE_20__ {int Group; int Mask; } ;
struct TYPE_21__ {TYPE_5__ GroupMask; int Type; int CacheSize; int LineSize; int Associativity; int Level; } ;
struct TYPE_18__ {int Group; int Mask; } ;
struct TYPE_19__ {TYPE_3__ GroupMask; int NodeNumber; } ;
struct TYPE_17__ {int GroupCount; TYPE_1__* GroupMask; int EfficiencyClass; int Flags; } ;
struct TYPE_24__ {int Relationship; scalar_t__ Size; TYPE_8__ Group; TYPE_6__ Cache; TYPE_4__ NumaNode; TYPE_2__ Processor; } ;
struct TYPE_22__ {int ActiveProcessorMask; int ActiveProcessorCount; int MaximumProcessorCount; } ;
struct TYPE_16__ {int Group; int Mask; } ;
typedef TYPE_9__ SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_9__* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_9__*) ;
 scalar_t__ VAR_2 ;





 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_9__*,TYPE_9__*,scalar_t__) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (scalar_t__,TYPE_9__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__*,int,TYPE_9__*,scalar_t__,scalar_t__*) ;
 int FUNC_8 (char*,int,int,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *VAR_6, *VAR_7;
    DWORD VAR_8, VAR_9, VAR_10;
    NTSTATUS VAR_11;
    BOOL VAR_12;

    if (!&FUNC_7)
        return;

    VAR_10 = 0;
    VAR_8 = 129;
    VAR_11 = FUNC_7(VAR_5, &VAR_8, sizeof(VAR_8), ((void*)0), 0, &VAR_10);
    FUNC_5(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);
    FUNC_5(VAR_10 > 0, "got %u\n", VAR_10);

    VAR_10 = 0;
    VAR_8 = VAR_2;
    VAR_11 = FUNC_7(VAR_5, &VAR_8, sizeof(VAR_8), ((void*)0), 0, &VAR_10);
    FUNC_5(VAR_11 == VAR_3, "got 0x%08x\n", VAR_11);
    FUNC_5(VAR_10 > 0, "got %u\n", VAR_10);

    VAR_9 = 0;
    VAR_12 = FUNC_6(VAR_2, ((void*)0), &VAR_9);
    FUNC_5(!VAR_12 && FUNC_0() == VAR_0, "got %d, error %d\n", VAR_12, FUNC_0());
    FUNC_5(VAR_10 == VAR_9, "got %u, expected %u\n", VAR_9, VAR_10);

    if (VAR_10 && VAR_10 == VAR_9) {
        int VAR_13, VAR_14;

        VAR_6 = FUNC_2(FUNC_1(), VAR_1, VAR_10);
        VAR_7 = FUNC_2(FUNC_1(), VAR_1, VAR_10);

        VAR_11 = FUNC_7(VAR_5, &VAR_8, sizeof(VAR_8), VAR_6, VAR_10, &VAR_10);
        FUNC_5(VAR_11 == VAR_4, "got 0x%08x\n", VAR_11);

        VAR_12 = FUNC_6(VAR_2, VAR_7, &VAR_9);
        FUNC_5(VAR_12, "got %d, error %d\n", VAR_12, FUNC_0());
        FUNC_5(!FUNC_4(VAR_6, VAR_7, VAR_10), "returned info data mismatch\n");

        for(VAR_14 = 0; VAR_11 == VAR_4 && VAR_14 < VAR_10; ){
            SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *VAR_15 = (void*)(((char *)VAR_6) + VAR_14);

            FUNC_5(VAR_15->Relationship >= 129 && VAR_15->Relationship <= 131,
                    "Got invalid relationship value: 0x%x\n", VAR_15->Relationship);
            if (!VAR_15->Size)
            {
                FUNC_5(0, "got infoex[%u].Size=0\n", VAR_14);
                break;
            }

            FUNC_8("infoex[%u].Size: %u\n", VAR_14, VAR_15->Size);
            switch(VAR_15->Relationship){
            case 129:
            case 128:
                FUNC_8("infoex[%u].Relationship: 0x%x (Core == 0x0 or Package == 0x3)\n", VAR_14, VAR_15->Relationship);
                FUNC_8("infoex[%u].Processor.Flags: 0x%x\n", VAR_14, VAR_15->Processor.Flags);

                FUNC_8("infoex[%u].Processor.EfficiencyClass: 0x%x\n", VAR_14, VAR_15->Processor.EfficiencyClass);

                FUNC_8("infoex[%u].Processor.GroupCount: 0x%x\n", VAR_14, VAR_15->Processor.GroupCount);
                for(VAR_13 = 0; VAR_13 < VAR_15->Processor.GroupCount; ++VAR_13){
                    FUNC_8("infoex[%u].Processor.GroupMask[%u].Mask: 0x%lx\n", VAR_14, VAR_13, VAR_15->Processor.GroupMask[VAR_13].Mask);
                    FUNC_8("infoex[%u].Processor.GroupMask[%u].Group: 0x%x\n", VAR_14, VAR_13, VAR_15->Processor.GroupMask[VAR_13].Group);
                }
                break;
            case 130:
                FUNC_8("infoex[%u].Relationship: 0x%x (NumaNode)\n", VAR_14, VAR_15->Relationship);
                FUNC_8("infoex[%u].NumaNode.NodeNumber: 0x%x\n", VAR_14, VAR_15->NumaNode.NodeNumber);
                FUNC_8("infoex[%u].NumaNode.GroupMask.Mask: 0x%lx\n", VAR_14, VAR_15->NumaNode.GroupMask.Mask);
                FUNC_8("infoex[%u].NumaNode.GroupMask.Group: 0x%x\n", VAR_14, VAR_15->NumaNode.GroupMask.Group);
                break;
            case 132:
                FUNC_8("infoex[%u].Relationship: 0x%x (Cache)\n", VAR_14, VAR_15->Relationship);
                FUNC_8("infoex[%u].Cache.Level: 0x%x\n", VAR_14, VAR_15->Cache.Level);
                FUNC_8("infoex[%u].Cache.Associativity: 0x%x\n", VAR_14, VAR_15->Cache.Associativity);
                FUNC_8("infoex[%u].Cache.LineSize: 0x%x\n", VAR_14, VAR_15->Cache.LineSize);
                FUNC_8("infoex[%u].Cache.CacheSize: 0x%x\n", VAR_14, VAR_15->Cache.CacheSize);
                FUNC_8("infoex[%u].Cache.Type: 0x%x\n", VAR_14, VAR_15->Cache.Type);
                FUNC_8("infoex[%u].Cache.GroupMask.Mask: 0x%lx\n", VAR_14, VAR_15->Cache.GroupMask.Mask);
                FUNC_8("infoex[%u].Cache.GroupMask.Group: 0x%x\n", VAR_14, VAR_15->Cache.GroupMask.Group);
                break;
            case 131:
                FUNC_8("infoex[%u].Relationship: 0x%x (Group)\n", VAR_14, VAR_15->Relationship);
                FUNC_8("infoex[%u].Group.MaximumGroupCount: 0x%x\n", VAR_14, VAR_15->Group.MaximumGroupCount);
                FUNC_8("infoex[%u].Group.ActiveGroupCount: 0x%x\n", VAR_14, VAR_15->Group.ActiveGroupCount);
                for(VAR_13 = 0; VAR_13 < VAR_15->Group.ActiveGroupCount; ++VAR_13){
                    FUNC_8("infoex[%u].Group.GroupInfo[%u].MaximumProcessorCount: 0x%x\n", VAR_14, VAR_13, VAR_15->Group.GroupInfo[VAR_13].MaximumProcessorCount);
                    FUNC_8("infoex[%u].Group.GroupInfo[%u].ActiveProcessorCount: 0x%x\n", VAR_14, VAR_13, VAR_15->Group.GroupInfo[VAR_13].ActiveProcessorCount);
                    FUNC_8("infoex[%u].Group.GroupInfo[%u].ActiveProcessorMask: 0x%lx\n", VAR_14, VAR_13, VAR_15->Group.GroupInfo[VAR_13].ActiveProcessorMask);
                }
                break;
            default:
                break;
            }

            VAR_14 += VAR_15->Size;
        }

        FUNC_3(FUNC_1(), 0, VAR_6);
        FUNC_3(FUNC_1(), 0, VAR_7);
    }
}
