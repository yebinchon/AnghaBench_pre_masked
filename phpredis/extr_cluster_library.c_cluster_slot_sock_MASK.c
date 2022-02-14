
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zend_ulong ;
struct TYPE_3__ {int * sock; } ;
typedef TYPE_1__ redisClusterNode ;
typedef int redisCluster ;
typedef int RedisSock ;


 int FUNC_0 (int *,unsigned short) ;
 int * FUNC_1 (int *,unsigned short) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static RedisSock *FUNC_3(redisCluster *VAR_0, unsigned short VAR_1,
                                    zend_ulong VAR_2)
{
    redisClusterNode *VAR_3;


    if (VAR_2 == 0) {
        return FUNC_1(VAR_0, VAR_1);
    }


    if (!FUNC_0(VAR_0, VAR_1) ||
        (VAR_3 = FUNC_2(FUNC_0(VAR_0,VAR_1), VAR_2)) == ((void*)0)
    ) {
        return ((void*)0);
    }


    return VAR_3->sock;
}
