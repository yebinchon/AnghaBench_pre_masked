
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int robj ;
typedef int list ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_8__ {int * xread_consumer; int * xread_group; int * target; int keys; } ;
struct TYPE_9__ {TYPE_2__ bpop; TYPE_1__* db; } ;
typedef TYPE_3__ client ;
struct TYPE_7__ {int blocking_keys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int *,int) ;

void FUNC_13(client *VAR_0) {
    dictEntry *VAR_1;
    dictIterator *VAR_2;
    list *VAR_3;

    FUNC_12(VAR_0,((void*)0),FUNC_8(VAR_0->bpop.keys) != 0);
    VAR_2 = FUNC_4(VAR_0->bpop.keys);

    while((VAR_1 = FUNC_6(VAR_2)) != ((void*)0)) {
        robj *VAR_4 = FUNC_5(VAR_1);


        VAR_3 = FUNC_3(VAR_0->db->blocking_keys,VAR_4);
        FUNC_12(VAR_0,VAR_4,VAR_3 != ((void*)0));
        FUNC_9(VAR_3,FUNC_11(VAR_3,VAR_0));

        if (FUNC_10(VAR_3) == 0)
            FUNC_1(VAR_0->db->blocking_keys,VAR_4);
    }
    FUNC_7(VAR_2);


    FUNC_2(VAR_0->bpop.keys,((void*)0));
    if (VAR_0->bpop.target) {
        FUNC_0(VAR_0->bpop.target);
        VAR_0->bpop.target = ((void*)0);
    }
    if (VAR_0->bpop.xread_group) {
        FUNC_0(VAR_0->bpop.xread_group);
        FUNC_0(VAR_0->bpop.xread_consumer);
        VAR_0->bpop.xread_group = ((void*)0);
        VAR_0->bpop.xread_consumer = ((void*)0);
    }
}
