
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_9__ {int argc; int * cmd; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_1__**) ;

void FUNC_4(client *VAR_0, int VAR_1, robj **VAR_2) {
    FUNC_0(VAR_0);
    FUNC_3(VAR_0->argv);
    VAR_0->argv = VAR_2;
    VAR_0->argc = VAR_1;
    VAR_0->cmd = FUNC_1(VAR_0->argv[0]->ptr);
    FUNC_2(VAR_0,((void*)0),VAR_0->cmd != ((void*)0));
}
