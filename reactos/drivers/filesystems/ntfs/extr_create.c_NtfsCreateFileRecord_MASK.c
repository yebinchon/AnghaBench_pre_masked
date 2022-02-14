
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
struct TYPE_25__ {int FileRecLookasideList; } ;
struct TYPE_24__ {scalar_t__ SequenceNumber; scalar_t__ AttributeOffset; } ;
struct TYPE_22__ {scalar_t__ ValueOffset; } ;
struct TYPE_23__ {scalar_t__ Length; TYPE_1__ Resident; } ;
typedef TYPE_2__* PNTFS_ATTR_RECORD ;
typedef TYPE_3__* PFILE_RECORD_HEADER ;
typedef int PFILE_OBJECT ;
typedef scalar_t__ PFILENAME_ATTRIBUTE ;
typedef TYPE_4__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_4__*,int ,int ,scalar_t__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,scalar_t__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (char*,TYPE_4__*,int ,char*,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 TYPE_3__* FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_11(PDEVICE_EXTENSION VAR_3,
                     PFILE_OBJECT VAR_4,
                     BOOLEAN VAR_5,
                     BOOLEAN VAR_6)
{
    NTSTATUS VAR_7 = VAR_2;
    PFILE_RECORD_HEADER VAR_8;
    PNTFS_ATTR_RECORD VAR_9;
    PFILENAME_ATTRIBUTE VAR_10;
    ULONGLONG VAR_11;
    ULONGLONG VAR_12;

    FUNC_4("NtfsCreateFileRecord(%p, %p, %s, %s)\n",
            VAR_3,
            VAR_4,
            VAR_5 ? "TRUE" : "FALSE",
            VAR_6 ? "TRUE" : "FALSE");


    VAR_8 = FUNC_9(VAR_3);
    if (!VAR_8)
    {
        FUNC_5("ERROR: Unable to allocate memory for file record!\n");
        return VAR_1;
    }


    VAR_9 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_8 + VAR_8->AttributeOffset);


    FUNC_3(VAR_8, VAR_9);


    VAR_9 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_9 + (ULONG_PTR)VAR_9->Length);


    FUNC_1(VAR_8, VAR_9, VAR_3, VAR_4, VAR_5, &VAR_11);


    VAR_10 = (PFILENAME_ATTRIBUTE)((ULONG_PTR)VAR_9 + VAR_9->Resident.ValueOffset);


    VAR_9 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_9 + (ULONG_PTR)VAR_9->Length);


    FUNC_0(VAR_8, VAR_9);



    FUNC_10(VAR_3, VAR_8);



    VAR_7 = FUNC_2(VAR_8, VAR_3, &VAR_12, VAR_6);
    if (FUNC_7(VAR_7))
    {

        if (VAR_12 == VAR_0)
            VAR_12 = VAR_12 + ((ULONGLONG)VAR_0 << 48);
        else
            VAR_12 = VAR_12 + ((ULONGLONG)VAR_8->SequenceNumber << 48);

        FUNC_5("New File Reference: 0x%016I64x\n", VAR_12);


        VAR_7 = FUNC_8(VAR_3,
                                            VAR_11,
                                            VAR_12,
                                            VAR_10,
                                            VAR_5);
    }

    FUNC_6(&VAR_3->FileRecLookasideList, VAR_8);

    return VAR_7;
}
