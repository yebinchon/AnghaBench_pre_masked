
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONGLONG ;
struct TYPE_17__ {int QuadPart; } ;
struct TYPE_24__ {TYPE_1__ FileReferenceNumber; } ;
struct TYPE_18__ {scalar_t__ Type; } ;
struct TYPE_23__ {scalar_t__ BytesInUse; scalar_t__ AttributeOffset; TYPE_2__ Ntfs; } ;
struct TYPE_22__ {scalar_t__ Type; scalar_t__ Length; } ;
struct TYPE_19__ {int QuadPart; } ;
struct TYPE_21__ {TYPE_3__ FileReferenceNumber; scalar_t__ FileRecordBuffer; } ;
struct TYPE_20__ {scalar_t__ BytesPerFileRecordSegment; } ;
typedef TYPE_4__* PNTFS_VOLUME_DATA_BUFFER ;
typedef TYPE_5__* PNTFS_FILE_RECORD_OUTPUT_BUFFER ;
typedef TYPE_6__* PNTFS_ATTR_RECORD ;
typedef int * PNAME_CACHE_ENTRY ;
typedef TYPE_7__* PFILE_RECORD_HEADER ;
typedef int NTFS_FILE_RECORD_OUTPUT_BUFFER ;
typedef TYPE_8__ NTFS_FILE_RECORD_INPUT_BUFFER ;
typedef int InputBuffer ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_8__*,int,TYPE_5__*,scalar_t__,int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_6__*,scalar_t__) ;
 int * FUNC_2 (int ,TYPE_4__*,TYPE_6__*,TYPE_6__*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;

PNAME_CACHE_ENTRY FUNC_5(HANDLE VAR_3, PNTFS_VOLUME_DATA_BUFFER VAR_4, ULONGLONG VAR_5, PNTFS_FILE_RECORD_OUTPUT_BUFFER VAR_6, BOOLEAN VAR_7)
{
    NTFS_FILE_RECORD_INPUT_BUFFER VAR_8;
    PFILE_RECORD_HEADER VAR_9;
    PNTFS_ATTR_RECORD VAR_10, VAR_11;
    DWORD VAR_12;
    PNAME_CACHE_ENTRY VAR_13;


    VAR_8.FileReferenceNumber.QuadPart = VAR_5;
    if (!FUNC_0(VAR_3, VAR_1, &VAR_8, sizeof(VAR_8),
                         VAR_6, VAR_4->BytesPerFileRecordSegment + sizeof(NTFS_FILE_RECORD_OUTPUT_BUFFER),
                         &VAR_12, ((void*)0)))
    {
        return ((void*)0);
    }





    if (VAR_6->FileReferenceNumber.QuadPart != VAR_5)
    {
        return ((void*)0);
    }


    VAR_9 = (PFILE_RECORD_HEADER)VAR_6->FileRecordBuffer;
    if (VAR_9->Ntfs.Type != VAR_2)
    {
        return ((void*)0);
    }

    if (!VAR_7)
    {

        FUNC_4(FUNC_3("\nFile %I64d\n"), VAR_6->FileReferenceNumber.QuadPart);
    }


    VAR_10 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_9 + VAR_9->AttributeOffset);
    VAR_11 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_9 + VAR_9->BytesInUse);


    VAR_13 = FUNC_2(VAR_3, VAR_4, VAR_10, VAR_11, VAR_5, VAR_7);

    if (!VAR_7)
    {

        while (VAR_10 < VAR_11 && VAR_10->Type != VAR_0)
        {
            FUNC_1(VAR_10, VAR_4->BytesPerFileRecordSegment);
            VAR_10 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_10 + VAR_10->Length);
        }
    }

    return VAR_13;
}
