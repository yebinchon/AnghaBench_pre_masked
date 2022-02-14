
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


typedef int ULONG_PTR ;
typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_26__ {int QuadPart; } ;
struct TYPE_23__ {int BytesPerIndexRecord; int BytesPerCluster; } ;
struct TYPE_25__ {TYPE_1__ NtfsInfo; } ;
struct TYPE_24__ {int FileMFTIndex; TYPE_19__* pRecord; } ;
struct TYPE_22__ {scalar_t__ IsNonResident; } ;
typedef int RTL_BITMAP ;
typedef int* PULONGLONG ;
typedef int* PULONG ;
typedef int PUCHAR ;
typedef TYPE_2__* PNTFS_ATTR_CONTEXT ;
typedef int PFILE_RECORD_HEADER ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int PCHAR ;
typedef int NTSTATUS ;
typedef TYPE_4__ LARGE_INTEGER ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_19__*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ,char*,int,TYPE_2__**,int*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,int ,int ,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *,int*,int) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (TYPE_3__*,TYPE_2__*,int,int ,TYPE_4__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_2__*,int,int ,TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_16 (TYPE_3__*,int ,int ) ;
 int FUNC_17 (TYPE_3__*,TYPE_2__*,int ,int const,int,int*,int ) ;

NTSTATUS
FUNC_18(PDEVICE_EXTENSION VAR_6,
                  PFILE_RECORD_HEADER VAR_7,
                  ULONG VAR_8,
                  PNTFS_ATTR_CONTEXT VAR_9,
                  ULONG VAR_10,
                  PULONGLONG VAR_11)
{
    NTSTATUS VAR_12;
    PNTFS_ATTR_CONTEXT VAR_13;
    ULONGLONG VAR_14, VAR_15;
    ULONG VAR_16;
    ULONGLONG VAR_17;
    PCHAR *VAR_18;
    ULONG *VAR_19;
    RTL_BITMAP VAR_20;
    ULONG VAR_21;
    ULONG VAR_22;
    LARGE_INTEGER VAR_23;

    FUNC_4("AllocateIndexNode(%p, %p, %lu, %p, %lu, %p) called.\n", VAR_6,
            VAR_7,
            VAR_8,
            VAR_9,
            VAR_10,
            VAR_11);


    VAR_14 = FUNC_2(VAR_9->pRecord);


    VAR_12 = FUNC_7(VAR_6,
                           VAR_7,
                           VAR_1,
                           L"$I30",
                           4,
                           &VAR_13,
                           &VAR_16);
    if (!FUNC_8(VAR_12))
    {
        FUNC_4("FIXME: Need to add bitmap attribute!\n");
        return VAR_4;
    }


    VAR_15 = FUNC_2(VAR_13->pRecord);

    VAR_17 = VAR_14 / VAR_6->NtfsInfo.BytesPerIndexRecord;






    VAR_22 = VAR_17 / 8;
    VAR_22++;


    VAR_22 = FUNC_0(VAR_22, VAR_0);



    VAR_18 = FUNC_5(VAR_2, VAR_22 + sizeof(ULONG), VAR_5);
    if (!VAR_18)
    {
        FUNC_4("Error: failed to allocate bitmap!");
        FUNC_10(VAR_13);
        return VAR_3;
    }

    VAR_19 = (PULONG)FUNC_1((ULONG_PTR)VAR_18, sizeof(ULONG));

    FUNC_13(VAR_19, VAR_22);


    VAR_12 = FUNC_9(VAR_6, VAR_13, 0, (PCHAR)VAR_19, VAR_15);


    FUNC_11(&VAR_20, VAR_19, VAR_17);


    if (VAR_22 > VAR_15)
    {


        VAR_23.QuadPart = VAR_22;
        if (VAR_13->pRecord->IsNonResident)
        {
            VAR_12 = FUNC_14(VAR_6,
                                                       VAR_13,
                                                       VAR_16,
                                                       VAR_7,
                                                       &VAR_23);
        }
        else
        {
            VAR_12 = FUNC_15(VAR_6,
                                                    VAR_13,
                                                    VAR_16,
                                                    VAR_7,
                                                    &VAR_23);
        }
        if (!FUNC_8(VAR_12))
        {
            FUNC_4("ERROR: Failed to set length of bitmap attribute!\n");
            FUNC_10(VAR_13);
            return VAR_12;
        }
    }


    VAR_23.QuadPart = VAR_14 + VAR_8;
    VAR_12 = FUNC_14(VAR_6,
                                               VAR_9,
                                               VAR_10,
                                               VAR_7,
                                               &VAR_23);
    if (!FUNC_8(VAR_12))
    {
        FUNC_4("ERROR: Failed to set length of index allocation!\n");
        FUNC_10(VAR_13);
        return VAR_12;
    }


    VAR_12 = FUNC_16(VAR_6, VAR_9->FileMFTIndex, VAR_7);
    if (!FUNC_8(VAR_12))
    {
        FUNC_4("ERROR: Failed to update file record!\n");
        FUNC_10(VAR_13);
        return VAR_12;
    }


    FUNC_12(&VAR_20, VAR_17, 1);


    VAR_12 = FUNC_17(VAR_6,
                            VAR_13,
                            0,
                            (const PUCHAR)VAR_19,
                            VAR_22,
                            &VAR_21,
                            VAR_7);
    if (!FUNC_8(VAR_12))
    {
        FUNC_4("ERROR: Unable to write to $I30 bitmap attribute!\n");
    }


    *VAR_11 = VAR_17 * (VAR_8 / VAR_6->NtfsInfo.BytesPerCluster);

    FUNC_3("New VCN: %I64u\n", *VAR_11);

    FUNC_6(VAR_18, VAR_5);
    FUNC_10(VAR_13);

    return VAR_12;
}
