
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_8__ {scalar_t__ BytesPerSector; } ;
struct TYPE_10__ {TYPE_1__ NtfsInfo; } ;
struct TYPE_9__ {scalar_t__ UsaCount; scalar_t__ UsaOffset; } ;
typedef TYPE_2__* PNTFS_RECORD_HEADER ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef scalar_t__ PCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,TYPE_3__*,TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

NTSTATUS
FUNC_2(PDEVICE_EXTENSION VAR_2,
                         PNTFS_RECORD_HEADER VAR_3)
{
    USHORT *VAR_4;
    USHORT VAR_5;
    USHORT VAR_6;
    USHORT *VAR_7;

    VAR_4 = (USHORT*)((PCHAR)VAR_3 + VAR_3->UsaOffset);
    VAR_5 = *(VAR_4++);
    VAR_6 = VAR_3->UsaCount - 1;
    VAR_7 = (USHORT*)((PCHAR)VAR_3 + VAR_2->NtfsInfo.BytesPerSector - 2);

    FUNC_0("FixupUpdateSequenceArray(%p, %p)\nUSANumber: %u\tUSACount: %u\n", VAR_2, VAR_3, VAR_5, VAR_6);

    while (VAR_6)
    {
        if (*VAR_7 != VAR_5)
        {
            FUNC_1("Mismatch with USA: %u read, %u expected\n" , *VAR_7, VAR_5);
            return VAR_1;
        }
        *VAR_7 = *(VAR_4++);
        VAR_7 = (USHORT*)((PCHAR)VAR_7 + VAR_2->NtfsInfo.BytesPerSector);
        VAR_6--;
    }

    return VAR_0;
}
