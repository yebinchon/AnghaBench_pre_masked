
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subscribed_slot; double timeout; double read_timeout; int failover; int persistent; long waitms; int nodes; int seeds; int * err; int * auth; scalar_t__ clusterdown; void* flags; } ;
typedef TYPE_1__ redisCluster ;
typedef int RedisSock ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,int ,int ) ;

redisCluster *FUNC_3(double VAR_2, double VAR_3,
                                           int VAR_4, int VAR_5)
{
    redisCluster *VAR_6;


    VAR_6 = FUNC_1(1, sizeof(redisCluster));


    VAR_6->flags = FUNC_1(1, sizeof(RedisSock));
    VAR_6->subscribed_slot = -1;
    VAR_6->clusterdown = 0;
    VAR_6->timeout = VAR_2;
    VAR_6->read_timeout = VAR_3;
    VAR_6->failover = VAR_4;
    VAR_6->persistent = VAR_5;
    VAR_6->auth = ((void*)0);
    VAR_6->err = ((void*)0);


    VAR_6->waitms = (long)(1000 * VAR_2);


    FUNC_0(VAR_6->seeds);
    FUNC_2(VAR_6->seeds, 0, ((void*)0), VAR_1, 0);


    FUNC_0(VAR_6->nodes);
    FUNC_2(VAR_6->nodes, 0, ((void*)0), VAR_0, 0);

    return VAR_6;
}
