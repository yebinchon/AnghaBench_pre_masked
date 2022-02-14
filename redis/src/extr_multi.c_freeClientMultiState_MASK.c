
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int argc; struct TYPE_8__* argv; } ;
typedef TYPE_2__ multiCmd ;
struct TYPE_7__ {int count; TYPE_2__* commands; } ;
struct TYPE_9__ {TYPE_1__ mstate; } ;
typedef TYPE_3__ client ;


 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(client *VAR_0) {
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->mstate.count; VAR_1++) {
        int VAR_2;
        multiCmd *VAR_3 = VAR_0->mstate.commands+VAR_1;

        for (VAR_2 = 0; VAR_2 < VAR_3->argc; VAR_2++)
            FUNC_0(VAR_3->argv[VAR_2]);
        FUNC_1(VAR_3->argv);
    }
    FUNC_1(VAR_0->mstate.commands);
}
