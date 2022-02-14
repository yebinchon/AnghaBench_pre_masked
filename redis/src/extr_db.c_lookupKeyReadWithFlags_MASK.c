
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_10__ {int id; } ;
typedef TYPE_3__ redisDb ;
struct TYPE_11__ {int stat_keyspace_hits; int stat_keyspace_misses; TYPE_2__* current_client; TYPE_2__* master; int * masterhost; } ;
struct TYPE_9__ {TYPE_1__* cmd; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int * FUNC_1 (TYPE_3__*,int *,int) ;
 int FUNC_2 (int ,char*,int *,int ) ;
 TYPE_4__ VAR_2 ;

robj *FUNC_3(redisDb *VAR_3, robj *VAR_4, int VAR_5) {
    robj *VAR_6;

    if (FUNC_0(VAR_3,VAR_4) == 1) {



        if (VAR_2.masterhost == ((void*)0)) {
            VAR_2.stat_keyspace_misses++;
            FUNC_2(VAR_1, "keymiss", VAR_4, VAR_3->id);
            return ((void*)0);
        }
        if (VAR_2.current_client &&
            VAR_2.current_client != VAR_2.master &&
            VAR_2.current_client->cmd &&
            VAR_2.current_client->cmd->flags & VAR_0)
        {
            VAR_2.stat_keyspace_misses++;
            FUNC_2(VAR_1, "keymiss", VAR_4, VAR_3->id);
            return ((void*)0);
        }
    }
    VAR_6 = FUNC_1(VAR_3,VAR_4,VAR_5);
    if (VAR_6 == ((void*)0)) {
        VAR_2.stat_keyspace_misses++;
        FUNC_2(VAR_1, "keymiss", VAR_4, VAR_3->id);
    }
    else
        VAR_2.stat_keyspace_hits++;
    return VAR_6;
}
