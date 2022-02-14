
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {int SectorsPerCluster; int DataSectorStart; } ;
typedef int PVOID ;
typedef int* PUINT32 ;
typedef TYPE_1__* PFAT_VOLUME_INFO ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static
BOOLEAN FUNC_3(
    PFAT_VOLUME_INFO VAR_1,
    UINT32 VAR_2,
    UINT32 VAR_3,
    PVOID VAR_4,
    PUINT32 VAR_5,
    PUINT32 VAR_6)
{
    UINT32 VAR_7;
    UINT32 VAR_8 = 1;
    UINT32 VAR_9 = VAR_2;
    UINT32 VAR_10 = ((VAR_9 - 2) * VAR_1->SectorsPerCluster) + VAR_1->DataSectorStart;

    *VAR_5 = 0;
    *VAR_6 = 0;

    if (!FUNC_1(VAR_1, VAR_2, &VAR_7))
    {
        return VAR_0;
    }


    while (!FUNC_0(VAR_7) && VAR_8 < VAR_3 && (VAR_7 == VAR_9 + 1))
    {
        VAR_8++;
        VAR_9 = VAR_7;
        if (!FUNC_1(VAR_1, VAR_9, &VAR_7))
        {
            return VAR_0;
        }
    }

    if (!FUNC_2(VAR_1, VAR_10, VAR_8 * VAR_1->SectorsPerCluster, VAR_4))
    {
        return VAR_0;
    }

    *VAR_5 = VAR_8;
    *VAR_6 = VAR_7;

    return !FUNC_0(VAR_7) && VAR_8 < VAR_3;
}
