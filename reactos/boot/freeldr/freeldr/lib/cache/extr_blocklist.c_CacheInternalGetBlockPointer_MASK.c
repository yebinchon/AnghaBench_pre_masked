
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int BlockNumber; } ;
typedef int PCACHE_DRIVE ;
typedef TYPE_1__* PCACHE_BLOCK ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (char*,int ,...) ;

PCACHE_BLOCK FUNC_4(PCACHE_DRIVE VAR_0, ULONG VAR_1)
{
    PCACHE_BLOCK VAR_2 = ((void*)0);

    FUNC_3("CacheInternalGetBlockPointer() BlockNumber = %d\n", VAR_1);

    VAR_2 = FUNC_1(VAR_0, VAR_1);

    if (VAR_2 != ((void*)0))
    {
        FUNC_3("Cache hit! BlockNumber: %d CacheBlock->BlockNumber: %d\n", VAR_1, VAR_2->BlockNumber);

        return VAR_2;
    }

    FUNC_3("Cache miss! BlockNumber: %d\n", VAR_1);

    VAR_2 = FUNC_0(VAR_0, VAR_1);


    FUNC_2(VAR_0, VAR_2);

    return VAR_2;
}
