
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sentinelRedisInstance ;
struct TYPE_4__ {int ptr; } ;
typedef TYPE_1__ robj ;
typedef int client ;
struct TYPE_5__ {int masters; } ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_0 ;

sentinelRedisInstance *FUNC_2(client *VAR_1,
                        robj *VAR_2)
{
    sentinelRedisInstance *VAR_3;

    VAR_3 = FUNC_1(VAR_0.masters,VAR_2->ptr);
    if (!VAR_3) {
        FUNC_0(VAR_1,"No such master with that name");
        return ((void*)0);
    }
    return VAR_3;
}
