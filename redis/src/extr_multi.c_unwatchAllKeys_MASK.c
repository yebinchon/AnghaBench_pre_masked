
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int key; TYPE_1__* db; } ;
typedef TYPE_2__ watchedKey ;
typedef int listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_11__ {int * watched_keys; } ;
typedef TYPE_3__ client ;
struct TYPE_9__ {int watched_keys; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int *,int ) ;
 int FUNC_10 (TYPE_2__*) ;

void FUNC_11(client *VAR_0) {
    listIter VAR_1;
    listNode *VAR_2;

    if (FUNC_4(VAR_0->watched_keys) == 0) return;
    FUNC_7(VAR_0->watched_keys,&VAR_1);
    while((VAR_2 = FUNC_5(&VAR_1))) {
        list *VAR_3;
        watchedKey *VAR_4;



        VAR_4 = FUNC_6(VAR_2);
        VAR_3 = FUNC_2(VAR_4->db->watched_keys, VAR_4->key);
        FUNC_9(VAR_0,((void*)0),VAR_3 != ((void*)0));
        FUNC_3(VAR_3,FUNC_8(VAR_3,VAR_0));

        if (FUNC_4(VAR_3) == 0)
            FUNC_1(VAR_4->db->watched_keys, VAR_4->key);

        FUNC_3(VAR_0->watched_keys,VAR_2);
        FUNC_0(VAR_4->key);
        FUNC_10(VAR_4);
    }
}
