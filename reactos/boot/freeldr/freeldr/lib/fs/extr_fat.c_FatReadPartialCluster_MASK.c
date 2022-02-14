
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int SectorsPerCluster; int DataSectorStart; int BytesPerSector; } ;
typedef int PVOID ;
typedef int PUCHAR ;
typedef TYPE_1__* PFAT_VOLUME_INFO ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int,int) ;

BOOLEAN FUNC_4(PFAT_VOLUME_INFO VAR_3, ULONG VAR_4, ULONG VAR_5, ULONG VAR_6, PVOID VAR_7)
{
    ULONG VAR_8;
    ULONG VAR_9, VAR_10, VAR_11;
    PUCHAR VAR_12;
    BOOLEAN VAR_13 = VAR_0;



    VAR_8 = ((VAR_4 - 2) * VAR_3->SectorsPerCluster) + VAR_3->DataSectorStart;


    VAR_9 = (VAR_5 / VAR_3->BytesPerSector);
    VAR_5 %= VAR_3->BytesPerSector;


    VAR_11 = (VAR_5 + VAR_6 + VAR_3->BytesPerSector - 1) / VAR_3->BytesPerSector;


    VAR_10 = VAR_11 * VAR_3->BytesPerSector;

    VAR_12 = FUNC_1(VAR_10, VAR_1);
    if (!VAR_12)
    {
        return VAR_0;
    }

    if (FUNC_0(VAR_3, VAR_8 + VAR_9, VAR_11, VAR_12))
    {
        FUNC_3(VAR_7, VAR_12 + VAR_5, VAR_6);
        VAR_13 = VAR_2;
    }

    FUNC_2(VAR_12, VAR_1);

    return VAR_13;
}
