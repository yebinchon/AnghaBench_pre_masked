
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
typedef int listNode ;
struct TYPE_2__ {scalar_t__ repl_scriptcache_size; int repl_scriptcache_fifo; int repl_scriptcache_dict; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_8 (int) ;

void FUNC_9(sds VAR_2) {
    int VAR_3;
    sds VAR_4 = FUNC_7(VAR_2);


    if (FUNC_5(VAR_1.repl_scriptcache_fifo) == VAR_1.repl_scriptcache_size)
    {
        listNode *VAR_5 = FUNC_4(VAR_1.repl_scriptcache_fifo);
        sds VAR_6 = FUNC_6(VAR_5);

        VAR_3 = FUNC_1(VAR_1.repl_scriptcache_dict,VAR_6);
        FUNC_8(VAR_3 == VAR_0);
        FUNC_3(VAR_1.repl_scriptcache_fifo,VAR_5);
    }


    VAR_3 = FUNC_0(VAR_1.repl_scriptcache_dict,VAR_4,((void*)0));
    FUNC_2(VAR_1.repl_scriptcache_fifo,VAR_4);
    FUNC_8(VAR_3 == VAR_0);
}
