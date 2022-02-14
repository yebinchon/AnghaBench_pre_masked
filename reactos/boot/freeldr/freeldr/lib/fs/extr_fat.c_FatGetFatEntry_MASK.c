
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONG ;
typedef int UINT32 ;
struct TYPE_4__ {int FatType; int BytesPerSector; } ;
typedef int* PUINT32 ;
typedef int PUCHAR ;
typedef TYPE_1__* PFAT_VOLUME_INFO ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;





 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static
BOOLEAN FUNC_5(PFAT_VOLUME_INFO VAR_2, UINT32 VAR_3, PUINT32 VAR_4)
{
    UINT32 VAR_5, VAR_6, VAR_7, VAR_8;
    PUCHAR VAR_9;

    FUNC_4("FatGetFatEntry() Retrieving FAT entry for cluster %d.\n", VAR_3);

    switch(VAR_2->FatType)
    {
    case 132:

        VAR_5 = VAR_3 + (VAR_3 / 2);
        VAR_6 = VAR_5 / VAR_2->BytesPerSector;
        VAR_7 = (VAR_5 % VAR_2->BytesPerSector);

        FUNC_4("FatOffset: %d\n", VAR_5);
        FUNC_4("ThisFatSecNum: %d\n", VAR_6);
        FUNC_4("ThisFatEntOffset: %d\n", VAR_7);







        VAR_9 = FUNC_1(VAR_2, VAR_6);
        if (!VAR_9)
        {
            return VAR_0;
        }

        VAR_8 = *((USHORT *) (VAR_9 + VAR_7));
        VAR_8 = FUNC_3(VAR_8);
        if (VAR_3 & 0x0001)
            VAR_8 = VAR_8 >> 4;
        else
            VAR_8 = VAR_8 & 0x0FFF;

        break;

    case 131:
    case 129:

        VAR_5 = (VAR_3 * 2);
        VAR_6 = VAR_5 / VAR_2->BytesPerSector;
        VAR_7 = (VAR_5 % VAR_2->BytesPerSector);

        VAR_9 = FUNC_1(VAR_2, VAR_6);
        if (!VAR_9)
        {
            return VAR_0;
        }

        VAR_8 = *((USHORT *) (VAR_9 + VAR_7));
        VAR_8 = FUNC_3(VAR_8);

        break;

    case 130:
    case 128:

        VAR_5 = (VAR_3 * 4);
        VAR_6 = VAR_5 / VAR_2->BytesPerSector;
        VAR_7 = (VAR_5 % VAR_2->BytesPerSector);

        VAR_9 = FUNC_1(VAR_2, VAR_6);
        if (!VAR_9)
        {
            return VAR_0;
        }


        VAR_8 = (*((ULONG *) (VAR_9 + VAR_7))) & 0x0FFFFFFF;
        VAR_8 = FUNC_2(VAR_8);

        break;

    default:
        FUNC_0("Unknown FAT type %d\n", VAR_2->FatType);
        return VAR_0;
    }

    FUNC_4("FAT entry is 0x%x.\n", VAR_8);

    *VAR_4 = VAR_8;

    return VAR_1;
}
