
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_12__ {int expires; int dict; } ;
typedef TYPE_2__ redisDb ;
typedef int dictEntry ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_3__ client ;
struct TYPE_14__ {scalar_t__ repl_slave_ro; scalar_t__ masterhost; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,long long) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 TYPE_8__ VAR_1 ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;

void FUNC_6(client *VAR_2, redisDb *VAR_3, robj *VAR_4, long long VAR_5) {
    dictEntry *VAR_6, *VAR_7;


    VAR_6 = FUNC_1(VAR_3->dict,VAR_4->ptr);
    FUNC_5(((void*)0),VAR_4,VAR_6 != ((void*)0));
    VAR_7 = FUNC_0(VAR_3->expires,FUNC_2(VAR_6));
    FUNC_3(VAR_7,VAR_5);

    int VAR_8 = VAR_1.masterhost && VAR_1.repl_slave_ro == 0;
    if (VAR_2 && VAR_8 && !(VAR_2->flags & VAR_0))
        FUNC_4(VAR_3,VAR_4);
}
