
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
typedef int UCHAR ;
struct TYPE_18__ {int Reserved; } ;
struct TYPE_17__ {scalar_t__ BytesInUse; int NextAttributeNumber; } ;
struct TYPE_14__ {scalar_t__ ValueOffset; scalar_t__ ValueLength; } ;
struct TYPE_16__ {scalar_t__ Length; scalar_t__ Type; int NameLength; TYPE_2__ Resident; scalar_t__ Instance; scalar_t__ NameOffset; } ;
struct TYPE_13__ {scalar_t__ BytesPerFileRecord; } ;
struct TYPE_15__ {TYPE_1__ NtfsInfo; } ;
typedef TYPE_3__* PNTFS_VCB ;
typedef TYPE_4__* PNTFS_ATTR_RECORD ;
typedef TYPE_5__* PFILE_RECORD_HEADER ;
typedef int PCWSTR ;
typedef int PCHAR ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_3 ;
 TYPE_9__ VAR_4 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,scalar_t__) ;
 int VAR_7 ;

NTSTATUS
FUNC_6(PNTFS_VCB VAR_8,
          PFILE_RECORD_HEADER VAR_9,
          PNTFS_ATTR_RECORD VAR_10,
          PCWSTR VAR_11,
          USHORT VAR_12)
{
    ULONG VAR_13;

    ULONG VAR_14 = FUNC_2(VAR_3, VAR_4.Reserved) + sizeof(UCHAR);
    ULONG VAR_15 = VAR_10->Length;
    ULONG VAR_16;
    ULONG VAR_17;

    ULONG VAR_18 = 8;
    ULONG VAR_19;

    if (VAR_10->Type != VAR_2)
    {
        FUNC_1("FIXME: Can only add $BITMAP attribute to the end of a file record.\n");
        return VAR_5;
    }

    VAR_16 = VAR_14;


    VAR_17 = FUNC_0(VAR_16 + (sizeof(WCHAR) * VAR_12), VAR_7);


    VAR_13 = VAR_17 + VAR_18;
    VAR_13 = FUNC_0(VAR_13, VAR_0);


    VAR_19 = VAR_8->NtfsInfo.BytesPerFileRecord - VAR_9->BytesInUse;
    if (VAR_19 < VAR_13)
    {
        FUNC_1("FIXME: Not enough room in file record for index allocation attribute!\n");
        return VAR_5;
    }


    FUNC_4(VAR_10, VAR_13);

    VAR_10->Type = VAR_1;
    VAR_10->Length = VAR_13;
    VAR_10->NameLength = VAR_12;
    VAR_10->NameOffset = VAR_16;
    VAR_10->Instance = VAR_9->NextAttributeNumber++;

    VAR_10->Resident.ValueLength = VAR_18;
    VAR_10->Resident.ValueOffset = VAR_17;


    FUNC_3((PCHAR)((ULONG_PTR)VAR_10 + VAR_16), VAR_11, VAR_12 * sizeof(WCHAR));


    VAR_10 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_10 + VAR_10->Length);
    FUNC_5(VAR_9, VAR_10, VAR_15);

    return VAR_6;
}
