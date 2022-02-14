
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int robj ;
struct TYPE_5__ {int watched_keys; } ;
typedef TYPE_1__ redisDb ;
typedef int listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ client ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(redisDb *VAR_1, robj *VAR_2) {
    list *VAR_3;
    listIter VAR_4;
    listNode *VAR_5;

    if (FUNC_1(VAR_1->watched_keys) == 0) return;
    VAR_3 = FUNC_0(VAR_1->watched_keys, VAR_2);
    if (!VAR_3) return;



    FUNC_4(VAR_3,&VAR_4);
    while((VAR_5 = FUNC_2(&VAR_4))) {
        client *VAR_6 = FUNC_3(VAR_5);

        VAR_6->flags |= VAR_0;
    }
}
