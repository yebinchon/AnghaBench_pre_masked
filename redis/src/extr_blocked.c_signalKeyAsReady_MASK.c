
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int robj ;
struct TYPE_7__ {int ready_keys; int blocking_keys; } ;
typedef TYPE_1__ redisDb ;
struct TYPE_8__ {TYPE_1__* db; int * key; } ;
typedef TYPE_2__ readyList ;
struct TYPE_9__ {int ready_keys; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (int) ;

void FUNC_6(redisDb *VAR_2, robj *VAR_3) {
    readyList *VAR_4;


    if (FUNC_1(VAR_2->blocking_keys,VAR_3) == ((void*)0)) return;


    if (FUNC_1(VAR_2->ready_keys,VAR_3) != ((void*)0)) return;


    VAR_4 = FUNC_5(sizeof(*VAR_4));
    VAR_4->key = VAR_3;
    VAR_4->db = VAR_2;
    FUNC_2(VAR_3);
    FUNC_3(VAR_1.ready_keys,VAR_4);




    FUNC_2(VAR_3);
    FUNC_4(FUNC_0(VAR_2->ready_keys,VAR_3,((void*)0)) == VAR_0);
}
