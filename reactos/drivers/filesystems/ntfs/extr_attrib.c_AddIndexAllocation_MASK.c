
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_18__ {int CompressedSize; } ;
struct TYPE_17__ {scalar_t__ BytesInUse; int NextAttributeNumber; } ;
struct TYPE_14__ {scalar_t__ HighestVCN; scalar_t__ MappingPairsOffset; } ;
struct TYPE_16__ {scalar_t__ Type; scalar_t__ Length; int NameLength; TYPE_2__ NonResident; scalar_t__ Instance; scalar_t__ NameOffset; int IsNonResident; } ;
struct TYPE_13__ {scalar_t__ BytesPerFileRecord; } ;
struct TYPE_15__ {TYPE_1__ NtfsInfo; } ;
typedef TYPE_3__* PNTFS_VCB ;
typedef TYPE_4__* PNTFS_ATTR_RECORD ;
typedef TYPE_5__* PFILE_RECORD_HEADER ;
typedef int PCWSTR ;
typedef int PCHAR ;
typedef int NTSTATUS ;
typedef scalar_t__ LONGLONG ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_4 ;
 TYPE_9__ VAR_5 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,scalar_t__) ;
 int VAR_8 ;

NTSTATUS
FUNC_6(PNTFS_VCB VAR_9,
                   PFILE_RECORD_HEADER VAR_10,
                   PNTFS_ATTR_RECORD VAR_11,
                   PCWSTR VAR_12,
                   USHORT VAR_13)
{
    ULONG VAR_14;
    ULONG VAR_15;
    ULONG VAR_16;
    ULONG VAR_17;
    ULONG VAR_18;

    if (VAR_11->Type != VAR_1)
    {
        FUNC_1("FIXME: Can only add $INDEX_ALLOCATION attribute to the end of a file record.\n");
        return VAR_6;
    }


    VAR_16 = FUNC_2(VAR_4, VAR_5.CompressedSize);


    VAR_17 = (sizeof(WCHAR) * VAR_13) + VAR_16;

    VAR_17 = FUNC_0(VAR_17, VAR_3);


    VAR_14 = VAR_17 + 1;


    VAR_14 = FUNC_0(VAR_14, VAR_0);


    VAR_15 = VAR_11->Length;


    VAR_18 = VAR_9->NtfsInfo.BytesPerFileRecord - VAR_10->BytesInUse;
    if (VAR_18 < VAR_14)
    {
        FUNC_1("FIXME: Not enough room in file record for index allocation attribute!\n");
        return VAR_6;
    }


    FUNC_4(VAR_11, VAR_14);

    VAR_11->Type = VAR_2;
    VAR_11->Length = VAR_14;
    VAR_11->IsNonResident = VAR_8;
    VAR_11->NameLength = VAR_13;
    VAR_11->NameOffset = VAR_16;
    VAR_11->Instance = VAR_10->NextAttributeNumber++;

    VAR_11->NonResident.MappingPairsOffset = VAR_17;
    VAR_11->NonResident.HighestVCN = (LONGLONG)-1;


    FUNC_3((PCHAR)((ULONG_PTR)VAR_11 + VAR_16), VAR_12, VAR_13 * sizeof(WCHAR));


    VAR_11 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_11 + VAR_11->Length);
    FUNC_5(VAR_10, VAR_11, VAR_15);

    return VAR_7;
}
