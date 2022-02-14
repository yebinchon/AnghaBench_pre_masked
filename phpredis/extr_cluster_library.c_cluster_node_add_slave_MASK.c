
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zend_ulong ;
struct TYPE_8__ {TYPE_2__* slaves; } ;
typedef TYPE_1__ redisClusterNode ;
struct TYPE_9__ {int nNextFreeElement; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int ,int *,int ,int ) ;

int
FUNC_3(redisClusterNode *VAR_1, redisClusterNode *VAR_2)
{
    zend_ulong VAR_3;


    if (!VAR_1->slaves) {
        FUNC_0(VAR_1->slaves);
        FUNC_2(VAR_1->slaves, 0, ((void*)0), VAR_0, 0);
        VAR_3 = 1;
    } else {
        VAR_3 = VAR_1->slaves->nNextFreeElement;
    }

    return FUNC_1(VAR_1->slaves, VAR_3, VAR_2) != ((void*)0);
}
