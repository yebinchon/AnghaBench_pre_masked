
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_14__ {scalar_t__ ValueOffset; scalar_t__ ValueLength; } ;
struct TYPE_17__ {scalar_t__ Length; TYPE_2__ Resident; int IsNonResident; } ;
struct TYPE_16__ {TYPE_6__* pRecord; } ;
struct TYPE_13__ {scalar_t__ ValueLength; } ;
struct TYPE_15__ {scalar_t__ Length; scalar_t__ Type; TYPE_1__ Resident; } ;
typedef int PVOID ;
typedef TYPE_3__* PNTFS_ATTR_RECORD ;
typedef TYPE_4__* PNTFS_ATTR_CONTEXT ;
typedef scalar_t__ PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,...) ;
 TYPE_6__* FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_5 (int ,TYPE_3__*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_6__*,TYPE_3__*,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (scalar_t__,TYPE_3__*,int ) ;
 int VAR_6 ;

NTSTATUS
FUNC_9(PDEVICE_EXTENSION VAR_7,
                                   PNTFS_ATTR_CONTEXT VAR_8,
                                   PFILE_RECORD_HEADER VAR_9,
                                   ULONG VAR_10,
                                   ULONG VAR_11)
{
    PNTFS_ATTR_RECORD VAR_12 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_9 + VAR_10);
    PNTFS_ATTR_RECORD VAR_13 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_12 + VAR_12->Length);
    PNTFS_ATTR_RECORD VAR_14;
    ULONG VAR_15 = VAR_12->Length;
    ULONG VAR_16;

    FUNC_2("InternalSetResidentAttributeLength( %p, %p, %p, %lu, %lu )\n", VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

    FUNC_1(!VAR_8->pRecord->IsNonResident);


    VAR_12->Resident.ValueLength = VAR_11;


    VAR_12->Length = FUNC_0(VAR_11 + VAR_8->pRecord->Resident.ValueOffset, VAR_0);
    VAR_16 = VAR_10 + VAR_12->Length;


    FUNC_1(VAR_16 % VAR_0 == 0);


    if (VAR_12->Length > VAR_15)
    {

        FUNC_4(VAR_8->pRecord, VAR_6);


        VAR_8->pRecord = FUNC_3(VAR_3, VAR_12->Length, VAR_6);
        if (!VAR_8->pRecord)
        {
            FUNC_2("Unable to allocate memory for attribute!\n");
            return VAR_4;
        }
        FUNC_7((PVOID)((ULONG_PTR)VAR_8->pRecord + VAR_15), VAR_12->Length - VAR_15);
        FUNC_6(VAR_8->pRecord, VAR_12, VAR_15);
    }


    if (VAR_13->Type != VAR_1)
    {

        VAR_14 = FUNC_5(VAR_7, VAR_13, VAR_16, (ULONG_PTR)VAR_12 + VAR_12->Length);
    }
    else
    {

        VAR_14 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_13 - VAR_15 + VAR_12->Length);
    }


    VAR_8->pRecord->Length = VAR_12->Length;
    VAR_8->pRecord->Resident.ValueLength = VAR_11;


    FUNC_8(VAR_9, VAR_14, VAR_2);



    return VAR_5;
}
