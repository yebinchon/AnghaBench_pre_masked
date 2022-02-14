
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_8__ {scalar_t__ BytesPerFileRecord; } ;
struct TYPE_10__ {TYPE_1__ NtfsInfo; } ;
struct TYPE_9__ {scalar_t__ Type; scalar_t__ Length; } ;
typedef TYPE_2__* PNTFS_ATTR_RECORD ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int PCHAR ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,TYPE_2__*,scalar_t__) ;

PNTFS_ATTR_RECORD
FUNC_2(PDEVICE_EXTENSION VAR_2,
               PNTFS_ATTR_RECORD VAR_3,
               ULONG VAR_4,
               ULONG_PTR VAR_5)
{

    ULONG VAR_6 = 0;
    PNTFS_ATTR_RECORD VAR_7 = VAR_3;
    ULONG VAR_8 = VAR_4;
    PNTFS_ATTR_RECORD VAR_9;

    while (VAR_7->Type != VAR_1 && VAR_8 < VAR_2->NtfsInfo.BytesPerFileRecord)
    {
        VAR_8 += VAR_7->Length;
        VAR_6 += VAR_7->Length;
        VAR_7 = (PNTFS_ATTR_RECORD)((ULONG_PTR)VAR_7 + VAR_7->Length);
    }

    VAR_9 = (PNTFS_ATTR_RECORD)(VAR_5 + VAR_6);
    VAR_6 += sizeof(ULONG) * 2;

    FUNC_0(VAR_6 % VAR_0 == 0);


    FUNC_1((PCHAR)VAR_5, VAR_3, VAR_6);

    return VAR_9;
}
