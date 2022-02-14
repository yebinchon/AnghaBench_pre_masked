
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_11__ {int argc; int * cmd; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;
 TYPE_1__** FUNC_4 (TYPE_1__**,int) ;

void FUNC_5(client *VAR_0, int VAR_1, robj *VAR_2) {
    robj *VAR_3;

    if (VAR_1 >= VAR_0->argc) {
        VAR_0->argv = FUNC_4(VAR_0->argv,sizeof(robj*)*(VAR_1+1));
        VAR_0->argc = VAR_1+1;
        VAR_0->argv[VAR_1] = ((void*)0);
    }
    VAR_3 = VAR_0->argv[VAR_1];
    VAR_0->argv[VAR_1] = VAR_2;
    FUNC_1(VAR_2);
    if (VAR_3) FUNC_0(VAR_3);


    if (VAR_1 == 0) {
        VAR_0->cmd = FUNC_2(VAR_0->argv[0]->ptr);
        FUNC_3(VAR_0,((void*)0),VAR_0->cmd != ((void*)0));
    }
}
