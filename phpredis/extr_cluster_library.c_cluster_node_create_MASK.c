
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int redisSlotRange ;
struct TYPE_7__ {unsigned short slot; short slave; TYPE_3__* sock; int slots; int * slaves; } ;
typedef TYPE_1__ redisClusterNode ;
struct TYPE_8__ {scalar_t__ auth; int persistent; int read_timeout; int timeout; } ;
typedef TYPE_2__ redisCluster ;
struct TYPE_9__ {int auth; } ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (char*,size_t,unsigned short,int ,int ,int ,int *,int ) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static redisClusterNode*
FUNC_4(redisCluster *VAR_0, char *VAR_1, size_t VAR_2,
                    unsigned short VAR_3, unsigned short VAR_4, short VAR_5)
{
    redisClusterNode *VAR_6 = FUNC_0(sizeof(redisClusterNode));


    VAR_6->slot = VAR_4;
    VAR_6->slave = VAR_5;
    VAR_6->slaves = ((void*)0);


    FUNC_2(&VAR_6->slots, sizeof(redisSlotRange), ((void*)0), 0);


    VAR_6->sock = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0->timeout,
        VAR_0->read_timeout, VAR_0->persistent, ((void*)0), 0);

    if (VAR_0->auth) {
        VAR_6->sock->auth = FUNC_3(VAR_0->auth);
    }

    return VAR_6;
}
