
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef scalar_t__ ULONG ;
typedef int UINT32 ;
struct TYPE_8__ {scalar_t__ FilePointer; scalar_t__ FileSize; int CurrentCluster; TYPE_1__* Volume; } ;
struct TYPE_7__ {int SectorsPerCluster; int BytesPerSector; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PFAT_VOLUME_INFO ;
typedef TYPE_2__* PFAT_FILE_INFO ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int*) ;
 int FUNC_3 (TYPE_1__*,int,int,scalar_t__,int*) ;
 int FUNC_4 (TYPE_1__*,int,int,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,int,...) ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static
BOOLEAN FUNC_7(PFAT_FILE_INFO VAR_2, ULONG VAR_3, ULONG* VAR_4, PVOID VAR_5)
{
    PFAT_VOLUME_INFO VAR_6 = VAR_2->Volume;
    UINT32 VAR_7, VAR_8;

    FUNC_5("FatReadFile() BytesToRead = %d Buffer = 0x%x\n", VAR_3, VAR_5);

    if (VAR_4 != ((void*)0))
    {
        *VAR_4 = 0;
    }





    if (VAR_2->FilePointer >= VAR_2->FileSize)
    {
        return VAR_1;
    }





    if ((VAR_2->FilePointer + VAR_3) > VAR_2->FileSize)
    {
        VAR_3 = (VAR_2->FileSize - VAR_2->FilePointer);
    }
    VAR_8 = VAR_6->SectorsPerCluster * VAR_6->BytesPerSector;





    if (VAR_2->FilePointer % VAR_8)
    {



        UINT32 VAR_9 = VAR_2->FilePointer % VAR_8;
        UINT32 VAR_10 = FUNC_6(VAR_3, VAR_8 - VAR_9);

        FUNC_0(VAR_10 <= VAR_8 && VAR_10 > 0);




        if (!FUNC_4(VAR_6, VAR_2->CurrentCluster, VAR_9, VAR_10, VAR_5))
        {
            return VAR_0;
        }
        if (VAR_4 != ((void*)0))
        {
            *VAR_4 += VAR_10;
        }
        VAR_3 -= VAR_10;
        VAR_2->FilePointer += VAR_10;
        VAR_5 = (PVOID)((ULONG_PTR)VAR_5 + VAR_10);


        if ((VAR_10 + VAR_9) == VAR_8)
        {
            if (!FUNC_2(VAR_6, VAR_2->CurrentCluster, &VAR_7))
            {
                return VAR_0;
            }

            VAR_2->CurrentCluster = VAR_7;
            FUNC_5("FatReadFile() FatFileInfo->CurrentCluster = 0x%x\n", VAR_2->CurrentCluster);
        }
    }




    if (VAR_3 > 0)
    {



        UINT32 VAR_11 = VAR_3 / VAR_8;

        FUNC_5("Going to read: %u clusters\n", VAR_11);

        if (VAR_11 > 0)
        {
            UINT32 VAR_12 = VAR_11 * VAR_8;

            FUNC_0(!FUNC_1(VAR_2->CurrentCluster));

            if (!FUNC_3(VAR_6, VAR_2->CurrentCluster, VAR_11, VAR_5, &VAR_7))
            {
                return VAR_0;
            }

            if (VAR_4 != ((void*)0))
            {
                *VAR_4 += VAR_12;
            }
            VAR_3 -= VAR_12;
            VAR_5 = (PVOID)((ULONG_PTR)VAR_5 + VAR_12);

            FUNC_0(!FUNC_1(VAR_7) || VAR_3 == 0);

            VAR_2->FilePointer += VAR_12;
            VAR_2->CurrentCluster = VAR_7;
            FUNC_5("FatReadFile() FatFileInfo->CurrentCluster = 0x%x\n", VAR_2->CurrentCluster);
        }
    }




    if (VAR_3 > 0)
    {
        FUNC_0(!FUNC_1(VAR_2->CurrentCluster));




        if (!FUNC_4(VAR_6, VAR_2->CurrentCluster, 0, VAR_3, VAR_5))
        {
            return VAR_0;
        }
        if (VAR_4 != ((void*)0))
        {
            *VAR_4 += VAR_3;
        }
        VAR_2->FilePointer += VAR_3;
        VAR_3 -= VAR_3;
        VAR_5 = (PVOID)((ULONG_PTR)VAR_5 + VAR_3);
    }

    return VAR_1;
}
