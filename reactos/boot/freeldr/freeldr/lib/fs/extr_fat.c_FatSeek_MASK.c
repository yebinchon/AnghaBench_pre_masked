
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
typedef scalar_t__ UINT32 ;
struct TYPE_9__ {scalar_t__ HighPart; scalar_t__ LowPart; int QuadPart; } ;
struct TYPE_8__ {scalar_t__ FilePointer; scalar_t__ FileSize; scalar_t__ CurrentCluster; scalar_t__ StartCluster; TYPE_1__* Volume; } ;
struct TYPE_7__ {scalar_t__ SectorsPerCluster; scalar_t__ BytesPerSector; } ;
typedef int SEEKMODE ;
typedef TYPE_1__* PFAT_VOLUME_INFO ;
typedef TYPE_2__* PFAT_FILE_INFO ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int ARC_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__*) ;
 TYPE_2__* FUNC_2 (int ) ;


 int FUNC_3 (char*,scalar_t__,scalar_t__,...) ;

ARC_STATUS FUNC_4(ULONG VAR_4, LARGE_INTEGER* VAR_5, SEEKMODE VAR_6)
{
    PFAT_FILE_INFO VAR_7 = FUNC_2(VAR_4);
    PFAT_VOLUME_INFO VAR_8 = VAR_7->Volume;
    LARGE_INTEGER VAR_9 = *VAR_5;

    switch (VAR_6)
    {
        case 129:
            break;
        case 128:
            VAR_9.QuadPart += (ULONGLONG)VAR_7->FilePointer;
            break;
        default:
            FUNC_0(VAR_3);
            return VAR_0;
    }

    if (VAR_9.HighPart != 0)
        return VAR_0;
    if (VAR_9.LowPart >= VAR_7->FileSize)
        return VAR_0;

    FUNC_3("FatSeek() NewPosition = %u, OldPointer = %u, SeekMode = %d\n", VAR_9.LowPart, VAR_7->FilePointer, VAR_6);

    {
        UINT32 VAR_10 = VAR_7->FilePointer / (VAR_8->SectorsPerCluster * VAR_8->BytesPerSector);
        UINT32 VAR_11 = VAR_9.LowPart / (VAR_8->SectorsPerCluster * VAR_8->BytesPerSector);

        FUNC_3("FatSeek() OldClusterIdx: %u, NewClusterIdx: %u\n", VAR_10, VAR_11);

        if (VAR_11 != VAR_10)
        {
            UINT32 VAR_12, VAR_13;

            if (VAR_11 > VAR_10)
            {
                VAR_12 = VAR_10;
                VAR_13 = VAR_7->CurrentCluster;
            }
            else
            {
                VAR_12 = 0;
                VAR_13 = VAR_7->StartCluster;
            }

            for (; VAR_12 < VAR_11; VAR_12++)
            {
                if (!FUNC_1(VAR_8, VAR_13, &VAR_13))
                {
                    return VAR_1;
                }
            }
            VAR_7->CurrentCluster = VAR_13;
        }
    }

    VAR_7->FilePointer = VAR_9.LowPart;

    return VAR_2;
}
