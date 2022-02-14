
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int also_propagate; } ;
struct TYPE_5__ {int flags; TYPE_4__* client; int saved_oparray; } ;
typedef TYPE_1__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_5 ;

void FUNC_2(RedisModuleCtx *VAR_6) {


    if (VAR_6->client->flags & (VAR_1|VAR_0)) return;

    if (VAR_6->flags & VAR_3) return;



    if (VAR_6->flags & VAR_4) return;



    if (!(VAR_6->flags & VAR_2)) {
        VAR_6->saved_oparray = VAR_5.also_propagate;
        FUNC_1(&VAR_5.also_propagate);
    }
    FUNC_0(VAR_6->client);
    VAR_6->flags |= VAR_3;
}
