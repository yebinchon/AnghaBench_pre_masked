
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * watched_keys; TYPE_1__* db; int * key; } ;
typedef TYPE_2__ watchedKey ;
typedef int robj ;
typedef int listNode ;
typedef int listIter ;
typedef int list ;
typedef TYPE_2__ client ;
struct TYPE_8__ {int watched_keys; } ;


 int FUNC_0 (int ,int *,int *) ;
 int * FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int * FUNC_5 () ;
 int * FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 TYPE_2__* FUNC_9 (int) ;

void FUNC_10(client *VAR_0, robj *VAR_1) {
    list *VAR_2 = ((void*)0);
    listIter VAR_3;
    listNode *VAR_4;
    watchedKey *VAR_5;


    FUNC_8(VAR_0->watched_keys,&VAR_3);
    while((VAR_4 = FUNC_6(&VAR_3))) {
        VAR_5 = FUNC_7(VAR_4);
        if (VAR_5->db == VAR_0->db && FUNC_2(VAR_1,VAR_5->key))
            return;
    }

    VAR_2 = FUNC_1(VAR_0->db->watched_keys,VAR_1);
    if (!VAR_2) {
        VAR_2 = FUNC_5();
        FUNC_0(VAR_0->db->watched_keys,VAR_1,VAR_2);
        FUNC_3(VAR_1);
    }
    FUNC_4(VAR_2,VAR_0);

    VAR_5 = FUNC_9(sizeof(*VAR_5));
    VAR_5->key = VAR_1;
    VAR_5->db = VAR_0->db;
    FUNC_3(VAR_1);
    FUNC_4(VAR_0->watched_keys,VAR_5);
}
