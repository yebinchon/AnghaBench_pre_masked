
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_11__ {int blocking_keys; } ;
typedef TYPE_2__ redisDb ;
typedef int dictIterator ;
typedef int dictEntry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;

void FUNC_6(redisDb *VAR_4) {
    dictEntry *VAR_5;
    dictIterator *VAR_6 = FUNC_1(VAR_4->blocking_keys);
    while((VAR_5 = FUNC_2(VAR_6)) != ((void*)0)) {
        robj *VAR_7 = FUNC_0(VAR_5);
        robj *VAR_8 = FUNC_4(VAR_4,VAR_7,VAR_0);
        if (VAR_8 && (VAR_8->type == VAR_1 ||
                      VAR_8->type == VAR_2 ||
                      VAR_8->type == VAR_3))
            FUNC_5(VAR_4, VAR_7);
    }
    FUNC_3(VAR_6);
}
