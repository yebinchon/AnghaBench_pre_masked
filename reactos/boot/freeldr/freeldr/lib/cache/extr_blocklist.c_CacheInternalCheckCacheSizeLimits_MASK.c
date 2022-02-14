
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int BlockSize; int BytesPerSector; } ;
typedef int SIZE_T ;
typedef TYPE_1__* PCACHE_DRIVE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

VOID FUNC_3(PCACHE_DRIVE VAR_2)
{
    SIZE_T VAR_3;

    FUNC_2("CacheInternalCheckCacheSizeLimits()\n");


    VAR_3 = (VAR_0 + 1) * (VAR_2->BlockSize * VAR_2->BytesPerSector);


    if (VAR_3 > VAR_1)
    {
        FUNC_1(VAR_2);
        FUNC_0(VAR_2);
    }
}
