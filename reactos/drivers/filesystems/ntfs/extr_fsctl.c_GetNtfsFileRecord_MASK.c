
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int ULONGLONG ;
struct TYPE_29__ {int QuadPart; } ;
struct TYPE_35__ {TYPE_3__ FileReferenceNumber; } ;
struct TYPE_31__ {int QuadPart; } ;
struct TYPE_34__ {int FileRecordBuffer; scalar_t__ FileRecordLength; TYPE_5__ FileReferenceNumber; } ;
struct TYPE_33__ {scalar_t__ BytesPerFileRecord; } ;
struct TYPE_32__ {scalar_t__ Information; } ;
struct TYPE_30__ {int * SystemBuffer; } ;
struct TYPE_27__ {int InputBufferLength; scalar_t__ OutputBufferLength; } ;
struct TYPE_28__ {TYPE_1__ FileSystemControl; } ;
struct TYPE_26__ {TYPE_7__ NtfsInfo; int FileRecLookasideList; } ;
struct TYPE_25__ {int Flags; } ;
struct TYPE_24__ {TYPE_2__ Parameters; } ;
struct TYPE_23__ {TYPE_6__ IoStatus; TYPE_4__ AssociatedIrp; } ;
typedef TYPE_8__* PNTFS_FILE_RECORD_OUTPUT_BUFFER ;
typedef TYPE_9__* PNTFS_FILE_RECORD_INPUT_BUFFER ;
typedef TYPE_10__* PIRP ;
typedef TYPE_11__* PIO_STACK_LOCATION ;
typedef TYPE_12__* PFILE_RECORD_HEADER ;
typedef TYPE_13__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int NTFS_FILE_RECORD_INPUT_BUFFER ;


 int FUNC_0 (char*,int,...) ;
 TYPE_12__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_12__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_11__* FUNC_4 (TYPE_10__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_13__*,int ,TYPE_12__*) ;
 int FUNC_7 (int ,TYPE_12__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static
NTSTATUS
FUNC_8(PDEVICE_EXTENSION VAR_8,
                  PIRP VAR_9)
{
    NTSTATUS VAR_10;
    PIO_STACK_LOCATION VAR_11;
    PNTFS_FILE_RECORD_INPUT_BUFFER VAR_12;
    PFILE_RECORD_HEADER VAR_13;
    PNTFS_FILE_RECORD_OUTPUT_BUFFER VAR_14;
    ULONGLONG VAR_15;

    VAR_11 = FUNC_4(VAR_9);

    if (VAR_11->Parameters.FileSystemControl.InputBufferLength < sizeof(NTFS_FILE_RECORD_INPUT_BUFFER) ||
        VAR_9->AssociatedIrp.SystemBuffer == ((void*)0))
    {
        FUNC_0("Invalid input! %d %p\n", VAR_11->Parameters.FileSystemControl.InputBufferLength, VAR_9->AssociatedIrp.SystemBuffer);
        return VAR_5;
    }

    if (VAR_11->Parameters.FileSystemControl.OutputBufferLength < (FUNC_3(VAR_2, VAR_1) + VAR_8->NtfsInfo.BytesPerFileRecord) ||
        VAR_9->AssociatedIrp.SystemBuffer == ((void*)0))
    {
        FUNC_0("Invalid output! %d %p\n", VAR_11->Parameters.FileSystemControl.OutputBufferLength, VAR_9->AssociatedIrp.SystemBuffer);
        return VAR_3;
    }

    VAR_13 = FUNC_1(&VAR_8->FileRecLookasideList);
    if (VAR_13 == ((void*)0))
    {
        return VAR_4;
    }

    VAR_12 = (PNTFS_FILE_RECORD_INPUT_BUFFER)VAR_9->AssociatedIrp.SystemBuffer;

    VAR_15 = VAR_12->FileReferenceNumber.QuadPart;
    FUNC_0("Requesting: %I64x\n", VAR_15);

    do
    {
        VAR_10 = FUNC_6(VAR_8, VAR_15, VAR_13);
        if (FUNC_5(VAR_10))
        {
            if (VAR_13->Flags & VAR_0)
            {
                break;
            }
        }

        --VAR_15;
    } while (VAR_7);

    FUNC_0("Returning: %I64x\n", VAR_15);
    VAR_14 = (PNTFS_FILE_RECORD_OUTPUT_BUFFER)VAR_9->AssociatedIrp.SystemBuffer;
    VAR_14->FileReferenceNumber.QuadPart = VAR_15;
    VAR_14->FileRecordLength = VAR_8->NtfsInfo.BytesPerFileRecord;
    FUNC_7(VAR_14->FileRecordBuffer, VAR_13, VAR_8->NtfsInfo.BytesPerFileRecord);

    FUNC_2(&VAR_8->FileRecLookasideList, VAR_13);

    VAR_9->IoStatus.Information = FUNC_3(VAR_2, VAR_1) + VAR_8->NtfsInfo.BytesPerFileRecord;

    return VAR_6;
}
