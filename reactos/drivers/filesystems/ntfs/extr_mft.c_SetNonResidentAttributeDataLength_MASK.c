
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_26__ {scalar_t__ LowPart; scalar_t__ QuadPart; } ;
struct TYPE_18__ {scalar_t__ BytesPerCluster; } ;
struct TYPE_25__ {TYPE_1__ NtfsInfo; } ;
struct TYPE_24__ {int QuadPart; } ;
struct TYPE_23__ {TYPE_3__* pRecord; int DataRunsMCB; } ;
struct TYPE_21__ {scalar_t__ AllocatedSize; scalar_t__ HighestVCN; int InitializedSize; int DataSize; } ;
struct TYPE_22__ {TYPE_4__ NonResident; } ;
struct TYPE_19__ {scalar_t__ AllocatedSize; scalar_t__ HighestVCN; int InitializedSize; int DataSize; } ;
struct TYPE_20__ {TYPE_2__ NonResident; int IsNonResident; } ;
typedef TYPE_5__* PNTFS_ATTR_RECORD ;
typedef TYPE_6__* PNTFS_ATTR_CONTEXT ;
typedef int PLONGLONG ;
typedef TYPE_7__* PLARGE_INTEGER ;
typedef scalar_t__ PFILE_RECORD_HEADER ;
typedef TYPE_8__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int LONGLONG ;
typedef TYPE_9__ LARGE_INTEGER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*,TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_8__*,TYPE_6__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int ,int ,int *,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_8__*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

NTSTATUS
FUNC_9(PDEVICE_EXTENSION VAR_2,
                                  PNTFS_ATTR_CONTEXT VAR_3,
                                  ULONG VAR_4,
                                  PFILE_RECORD_HEADER VAR_5,
                                  PLARGE_INTEGER VAR_6)
{
    NTSTATUS VAR_7 = VAR_1;
    ULONG VAR_8 = VAR_2->NtfsInfo.BytesPerCluster;
    ULONGLONG VAR_9 = FUNC_8(VAR_6->QuadPart, VAR_8);
    PNTFS_ATTR_RECORD VAR_10 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_5 + VAR_4);
    ULONG VAR_11 = VAR_3->pRecord->NonResident.AllocatedSize / VAR_8;

    FUNC_0(VAR_3->pRecord->IsNonResident);


    if (VAR_3->pRecord->NonResident.AllocatedSize < VAR_9)
    {
        ULONG VAR_12 = (VAR_9 / VAR_8) - VAR_11;
        LARGE_INTEGER VAR_13;
        ULONG VAR_14;
        ULONG VAR_15;

        if (VAR_11 == 0)
        {
            VAR_13.QuadPart = 0;
        }
        else
        {
            if (!FUNC_5(&VAR_3->DataRunsMCB,
                                          (LONGLONG)VAR_3->pRecord->NonResident.HighestVCN,
                                          (PLONGLONG)&VAR_13.QuadPart,
                                          ((void*)0),
                                          ((void*)0),
                                          ((void*)0),
                                          ((void*)0)))
            {
                FUNC_3("Error looking up final large MCB entry!\n");


                FUNC_3("Highest VCN of record: %I64u\n", VAR_3->pRecord->NonResident.HighestVCN);
                return VAR_0;
            }
        }

        FUNC_2("LastClusterInDataRun: %I64u\n", VAR_13.QuadPart);
        FUNC_2("Highest VCN of record: %I64u\n", VAR_3->pRecord->NonResident.HighestVCN);

        while (VAR_12 > 0)
        {
            VAR_7 = FUNC_7(VAR_2,
                                          VAR_13.LowPart + 1,
                                          VAR_12,
                                          &VAR_14,
                                          &VAR_15);

            if (!FUNC_6(VAR_7))
            {
                FUNC_3("Error: Unable to allocate requested clusters!\n");
                return VAR_7;
            }


            VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_14, VAR_15);
            if (!FUNC_6(VAR_7))
            {
                FUNC_3("Error: Unable to add data run!\n");
                return VAR_7;
            }

            VAR_12 -= VAR_15;
            VAR_13.LowPart = VAR_14 + VAR_15 - 1;
        }
    }
    else if (VAR_3->pRecord->NonResident.AllocatedSize > VAR_9)
    {

        ULONG VAR_16 = VAR_11 - (VAR_9 / VAR_8);
        VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_16);
    }



    VAR_3->pRecord->NonResident.AllocatedSize = VAR_9;
    VAR_3->pRecord->NonResident.DataSize = VAR_6->QuadPart;
    VAR_3->pRecord->NonResident.InitializedSize = VAR_6->QuadPart;

    VAR_10->NonResident.AllocatedSize = VAR_9;
    VAR_10->NonResident.DataSize = VAR_6->QuadPart;
    VAR_10->NonResident.InitializedSize = VAR_6->QuadPart;



    VAR_3->pRecord->NonResident.HighestVCN = ((ULONGLONG)VAR_9 / VAR_2->NtfsInfo.BytesPerCluster) - 1;
    VAR_10->NonResident.HighestVCN = VAR_3->pRecord->NonResident.HighestVCN;

    FUNC_2("Allocated Size: %I64u\n", VAR_10->NonResident.AllocatedSize);

    return VAR_7;
}
