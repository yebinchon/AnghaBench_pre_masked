
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zend_string ;
typedef int redisClusterNode ;
struct TYPE_15__ {int ** master; int nodes; int seeds; int persistent; int read_timeout; int timeout; int cache_key; } ;
typedef TYPE_4__ redisCluster ;
struct TYPE_12__ {int port; int * addr; } ;
struct TYPE_16__ {size_t slaves; size_t slots; TYPE_3__* slot; TYPE_2__* slave; TYPE_1__ host; } ;
typedef TYPE_5__ redisCachedMaster ;
struct TYPE_17__ {int count; TYPE_5__* master; int hash; } ;
typedef TYPE_6__ redisCachedCluster ;
typedef int key ;
struct TYPE_14__ {size_t low; size_t high; } ;
struct TYPE_13__ {int port; int * addr; } ;
typedef int RedisSock ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (TYPE_4__*,char*,int ,int ,int ,int) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int) ;
 int FUNC_7 (int*,size_t) ;
 int * FUNC_8 (char*,int ,int,int ,int ,int ,int *,int ) ;
 size_t FUNC_9 (char*,int,char*,char*,int) ;
 int FUNC_10 (int ,char*,size_t,int *) ;

void FUNC_11(redisCluster *VAR_1, redisCachedCluster *VAR_2) {
    RedisSock *VAR_3;
    redisClusterNode *VAR_4, *VAR_5;
    redisCachedMaster *VAR_6;
    char VAR_7[VAR_0];
    size_t VAR_8, VAR_9, VAR_10, VAR_11;
    int *VAR_12;


    VAR_12 = FUNC_6(sizeof(*VAR_12) * VAR_2->count);
    for (VAR_9 = 0; VAR_9 < VAR_2->count; VAR_9++) VAR_12[VAR_9] = VAR_9;
    FUNC_7(VAR_12, VAR_2->count);


    for (VAR_9 = 0; VAR_9 < VAR_2->count; VAR_9++) {

        VAR_1->cache_key = VAR_2->hash;


        VAR_6 = &VAR_2->master[VAR_12[VAR_9]];


        VAR_8 = FUNC_9(VAR_7, sizeof(VAR_7), "%s:%u", FUNC_1(VAR_6->host.addr),
                          VAR_6->host.port);


        VAR_3 = FUNC_8(FUNC_1(VAR_6->host.addr), FUNC_0(VAR_6->host.addr), VAR_6->host.port,
                                 VAR_1->timeout, VAR_1->read_timeout, VAR_1->persistent,
                                 ((void*)0), 0);


        FUNC_10(VAR_1->seeds, VAR_7, VAR_8, VAR_3);


        VAR_4 = FUNC_2(VAR_1, VAR_6);


        FUNC_10(VAR_1->nodes, VAR_7, VAR_8, VAR_4);


        for (VAR_11 = 0; VAR_11 < VAR_6->slaves; VAR_11++) {
            zend_string *VAR_13 = VAR_6->slave[VAR_11].addr;
            VAR_5 = FUNC_4(VAR_1, FUNC_1(VAR_13), FUNC_0(VAR_13), VAR_6->slave[VAR_11].port, 0, 1);
            FUNC_3(VAR_4, VAR_5);
        }


        for (VAR_10 = 0; VAR_10 < VAR_6->slots; VAR_10++) {
            for (VAR_11 = VAR_6->slot[VAR_10].low; VAR_11 <= VAR_6->slot[VAR_10].high; VAR_11++) {
                VAR_1->master[VAR_11] = VAR_4;
            }
        }
    }

    FUNC_5(VAR_12);
}
