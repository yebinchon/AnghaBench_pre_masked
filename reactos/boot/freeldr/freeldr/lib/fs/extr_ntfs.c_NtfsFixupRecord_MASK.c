
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_8__ {scalar_t__ USACount; scalar_t__ USAOffset; } ;
struct TYPE_6__ {scalar_t__ BytesPerSector; } ;
struct TYPE_7__ {TYPE_1__ BootSector; } ;
typedef TYPE_2__* PNTFS_VOLUME_INFO ;
typedef TYPE_3__* PNTFS_RECORD ;
typedef scalar_t__ PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOLEAN FUNC_0(PNTFS_VOLUME_INFO VAR_2, PNTFS_RECORD VAR_3)
{
    USHORT *VAR_4;
    USHORT VAR_5;
    USHORT VAR_6;
    USHORT *VAR_7;

    VAR_4 = (USHORT*)((PCHAR)VAR_3 + VAR_3->USAOffset);
    VAR_5 = *(VAR_4++);
    VAR_6 = VAR_3->USACount - 1;
    VAR_7 = (USHORT*)((PCHAR)VAR_3 + VAR_2->BootSector.BytesPerSector - 2);

    while (VAR_6)
    {
        if (*VAR_7 != VAR_5)
            return VAR_0;
        *VAR_7 = *(VAR_4++);
        VAR_7 = (USHORT*)((PCHAR)VAR_7 + VAR_2->BootSector.BytesPerSector);
        VAR_6--;
    }

    return VAR_1;
}
