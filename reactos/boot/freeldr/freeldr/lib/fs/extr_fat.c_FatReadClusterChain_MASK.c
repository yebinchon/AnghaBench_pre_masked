
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ UINT32 ;
struct TYPE_4__ {scalar_t__ SectorsPerCluster; scalar_t__ BytesPerSector; } ;
typedef scalar_t__ PVOID ;
typedef scalar_t__* PUINT32 ;
typedef TYPE_1__* PFAT_VOLUME_INFO ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static
BOOLEAN FUNC_3(PFAT_VOLUME_INFO VAR_0, UINT32 VAR_1, UINT32 VAR_2, PVOID VAR_3, PUINT32 VAR_4)
{
    UINT32 VAR_5, VAR_6, VAR_7 = VAR_2;

    FUNC_2("FatReadClusterChain() StartClusterNumber = %d NumberOfClusters = %d Buffer = 0x%x\n", VAR_1, VAR_2, VAR_3);

    FUNC_0(VAR_2 > 0);

    while (FUNC_1(VAR_0, VAR_1, VAR_7, VAR_3, &VAR_5, &VAR_6))
    {
        VAR_7 -= VAR_5;
        VAR_3 = (PVOID)((ULONG_PTR)VAR_3 + (VAR_5 * VAR_0->SectorsPerCluster * VAR_0->BytesPerSector));
        VAR_1 = VAR_6;
    }

    if (VAR_4)
    {
        *VAR_4 = VAR_6;
    }

    return (VAR_5 > 0);
}
