
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_11__ {int BytesPerFileRecord; int BytesPerSector; } ;
struct TYPE_15__ {TYPE_1__ NtfsInfo; int FileRecLookasideList; } ;
struct TYPE_12__ {int UsaCount; scalar_t__ UsaOffset; int Type; } ;
struct TYPE_14__ {int BytesAllocated; int SequenceNumber; scalar_t__ AttributeOffset; scalar_t__ BytesInUse; int Flags; TYPE_2__ Ntfs; } ;
struct TYPE_13__ {int Length; int Type; } ;
typedef TYPE_3__* PNTFS_ATTR_RECORD ;
typedef TYPE_4__* PFILE_RECORD_HEADER ;
typedef TYPE_5__* PDEVICE_EXTENSION ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_5__*) ;
 int FUNC_2 (char*) ;
 TYPE_4__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_4__*,int) ;

PFILE_RECORD_HEADER
FUNC_6(PDEVICE_EXTENSION VAR_7)
{
    PFILE_RECORD_HEADER VAR_8;
    PNTFS_ATTR_RECORD VAR_9;

    FUNC_1("NtfsCreateEmptyFileRecord(%p)\n", VAR_7);


    VAR_8 = FUNC_3(&VAR_7->FileRecLookasideList);
    if (!VAR_8)
    {
        FUNC_2("ERROR: Unable to allocate memory for file record!\n");
        return ((void*)0);
    }

    FUNC_5(VAR_8, VAR_7->NtfsInfo.BytesPerFileRecord);

    VAR_8->Ntfs.Type = VAR_6;


    VAR_8->Ntfs.UsaOffset = FUNC_4(VAR_3, VAR_5) + sizeof(ULONG);


    VAR_8->BytesAllocated = VAR_7->NtfsInfo.BytesPerFileRecord;
    VAR_8->Ntfs.UsaCount = (VAR_8->BytesAllocated / VAR_7->NtfsInfo.BytesPerSector) + 1;


    VAR_8->SequenceNumber = 1;
    VAR_8->AttributeOffset = VAR_8->Ntfs.UsaOffset + (2 * VAR_8->Ntfs.UsaCount);
    VAR_8->AttributeOffset = FUNC_0(VAR_8->AttributeOffset, VAR_0);
    VAR_8->Flags = VAR_4;
    VAR_8->BytesInUse = VAR_8->AttributeOffset + sizeof(ULONG) * 2;


    VAR_9 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_8 + VAR_8->AttributeOffset);


    VAR_9->Type = VAR_1;
    VAR_9->Length = VAR_2;

    return VAR_8;
}
