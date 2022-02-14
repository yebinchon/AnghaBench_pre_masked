
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT8 ;
typedef size_t UINT32 ;
struct TYPE_4__ {size_t ActiveFatSectorStart; size_t FatCacheSize; size_t SectorsPerFat; size_t* FatCacheIndex; size_t BytesPerSector; int * FatCache; } ;
typedef int * PUCHAR ;
typedef TYPE_1__* PFAT_VOLUME_INFO ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t,size_t,int *) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (size_t,int) ;

__attribute__((used)) static
PUCHAR FUNC_4(PFAT_VOLUME_INFO VAR_0, UINT32 VAR_1)
{
    UINT32 VAR_2 = VAR_0->ActiveFatSectorStart + VAR_1;
    UINT32 VAR_3 = VAR_1 % VAR_0->FatCacheSize;

    FUNC_0(VAR_1 < VAR_0->SectorsPerFat);


    if (VAR_0->FatCacheIndex[VAR_3] != VAR_2)
    {
        UINT32 VAR_4 = FUNC_3(VAR_0->FatCacheSize - VAR_3, FUNC_3(VAR_0->SectorsPerFat - VAR_2, 4));
        UINT8 VAR_5;

        if (!FUNC_1(VAR_0, VAR_2, VAR_4, &VAR_0->FatCache[VAR_3 * VAR_0->BytesPerSector]))
        {
            return ((void*)0);
        }

        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        {
            VAR_0->FatCacheIndex[VAR_3 + VAR_5] = VAR_2 + VAR_5;
        }

        FUNC_2("FAT cache miss: read sector 0x%x from disk\n", VAR_2);
    }
    else
    {
        FUNC_2("FAT cache hit: sector 0x%x present\n", VAR_2);
    }

    return &VAR_0->FatCache[VAR_3 * VAR_0->BytesPerSector];
}
