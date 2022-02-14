
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int USHORT ;
typedef size_t ULONG ;
typedef int UCHAR ;
struct TYPE_8__ {size_t BytesPerSector; } ;
struct TYPE_11__ {TYPE_1__ NtfsInfo; } ;
struct TYPE_10__ {int USN; int * Array; } ;
struct TYPE_9__ {size_t UsaCount; int UsaOffset; } ;
typedef TYPE_2__* PNTFS_RECORD_HEADER ;
typedef TYPE_3__* PFIXUP_ARRAY ;
typedef TYPE_4__* PDEVICE_EXTENSION ;
typedef int PCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,TYPE_4__*,...) ;
 int VAR_0 ;

NTSTATUS
FUNC_1(PDEVICE_EXTENSION VAR_1,
              PNTFS_RECORD_HEADER VAR_2)
{
    USHORT *VAR_3;
    ULONG VAR_4 = VAR_2->UsaCount - 1;
    ULONG VAR_5 = VAR_1->NtfsInfo.BytesPerSector - 2;
    ULONG VAR_6;

    PFIXUP_ARRAY VAR_7 = (PFIXUP_ARRAY)((UCHAR*)VAR_2 + VAR_2->UsaOffset);

    FUNC_0("AddFixupArray(%p, %p)\n fixupArray->USN: %u, ArrayEntryCount: %u\n", VAR_1, VAR_2, VAR_7->USN, VAR_4);

    VAR_7->USN++;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
        FUNC_0("USN: %u\tOffset: %u\n", VAR_7->USN, VAR_5);

        VAR_3 = (USHORT*)((PCHAR)VAR_2 + VAR_5);
        VAR_7->Array[VAR_6] = *VAR_3;
        *VAR_3 = VAR_7->USN;
        VAR_5 += VAR_1->NtfsInfo.BytesPerSector;
    }

    return VAR_0;
}
