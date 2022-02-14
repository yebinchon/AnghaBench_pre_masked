
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int slots; } ;
typedef TYPE_2__ redisClusterNode ;
typedef int redisCluster ;
struct TYPE_8__ {int port; int addr; } ;
struct TYPE_10__ {size_t slots; TYPE_4__* slot; TYPE_1__ host; } ;
typedef TYPE_3__ redisCachedMaster ;
struct TYPE_11__ {int low; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,TYPE_4__*) ;

__attribute__((used)) static redisClusterNode*
FUNC_4(redisCluster *VAR_0, redisCachedMaster *VAR_1) {
    redisClusterNode *VAR_2;
    size_t VAR_3;

    VAR_2 = FUNC_2(VAR_0, FUNC_1(VAR_1->host.addr), FUNC_0(VAR_1->host.addr),
                               VAR_1->host.port, VAR_1->slot[0].low, 0);


    for (VAR_3 = 0; VAR_3 < VAR_1->slots; VAR_3++) {
        FUNC_3(&VAR_2->slots, &VAR_1->slot[VAR_3]);
    }

    return VAR_2;
}
