
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int * Flink; } ;
struct TYPE_7__ {int ListEntry; } ;
struct TYPE_6__ {TYPE_3__ CacheBlockHead; } ;
typedef TYPE_1__* PCACHE_DRIVE ;
typedef TYPE_2__* PCACHE_BLOCK ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

VOID FUNC_3(PCACHE_DRIVE VAR_0, PCACHE_BLOCK VAR_1)
{

    FUNC_2("CacheInternalOptimizeBlockList()\n");


    if (&VAR_1->ListEntry != VAR_0->CacheBlockHead.Flink)
    {

        FUNC_1(&VAR_1->ListEntry);


        FUNC_0(&VAR_0->CacheBlockHead, &VAR_1->ListEntry);
    }
}
