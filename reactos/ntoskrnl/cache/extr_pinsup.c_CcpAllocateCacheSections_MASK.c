
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {TYPE_1__* SectionObjectPointer; } ;
struct TYPE_7__ {int RefCount; } ;
struct TYPE_6__ {scalar_t__ SharedCacheMap; } ;
typedef int PROS_SECTION_OBJECT ;
typedef scalar_t__ PNOCC_CACHE_MAP ;
typedef TYPE_2__* PNOCC_BCB ;
typedef TYPE_3__* PFILE_OBJECT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;

ULONG
FUNC_6(PFILE_OBJECT VAR_6,
                         PROS_SECTION_OBJECT VAR_7)
{
    ULONG VAR_8 = VAR_5;
    PNOCC_CACHE_MAP VAR_9;
    PNOCC_BCB VAR_10;

    FUNC_2("AllocateCacheSections: FileObject %x\n", VAR_6);

    if (!VAR_6->SectionObjectPointer)
        return VAR_5;

    VAR_9 = (PNOCC_CACHE_MAP)VAR_6->SectionObjectPointer->SharedCacheMap;

    if (!VAR_9)
        return VAR_5;

    FUNC_2("Allocating Cache Section\n");

    VAR_8 = FUNC_4(VAR_1, 1, VAR_2);
    VAR_2 = (VAR_8 + 1) % VAR_0;

    if (VAR_8 != VAR_5)
    {
        FUNC_2("Setting up Bcb #%x\n", VAR_8);

        VAR_10 = &VAR_3[VAR_8];

        FUNC_0(VAR_10->RefCount < 2);

        if (VAR_10->RefCount > 0)
        {
            FUNC_1(VAR_8, VAR_4);
        }

        FUNC_0(!VAR_10->RefCount);
        VAR_10->RefCount = 1;

        FUNC_2("Bcb #%x RefCount %d\n", VAR_10 - VAR_3, VAR_10->RefCount);

        if (!FUNC_5(VAR_1, VAR_8))
        {
            FUNC_3("Somebody stoeled BCB #%x\n", VAR_8);
        }
        FUNC_0(FUNC_5(VAR_1, VAR_8));

        FUNC_2("Allocated #%x\n", VAR_8);
        FUNC_0(VAR_3[VAR_8].RefCount);
    }
    else
    {
        FUNC_3("Failed to allocate cache segment\n");
    }
    return VAR_8;
}
