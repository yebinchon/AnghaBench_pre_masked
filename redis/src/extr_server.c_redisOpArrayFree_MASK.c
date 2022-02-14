
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numops; TYPE_2__* ops; } ;
typedef TYPE_1__ redisOpArray ;
struct TYPE_7__ {int argc; struct TYPE_7__* argv; } ;
typedef TYPE_2__ redisOp ;


 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(redisOpArray *VAR_0) {
    while(VAR_0->numops) {
        int VAR_1;
        redisOp *VAR_2;

        VAR_0->numops--;
        VAR_2 = VAR_0->ops+VAR_0->numops;
        for (VAR_1 = 0; VAR_1 < VAR_2->argc; VAR_1++)
            FUNC_0(VAR_2->argv[VAR_1]);
        FUNC_1(VAR_2->argv);
    }
    FUNC_1(VAR_0->ops);
}
