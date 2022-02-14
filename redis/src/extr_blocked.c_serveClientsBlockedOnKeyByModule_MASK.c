
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int key; TYPE_1__* db; } ;
typedef TYPE_2__ readyList ;
struct TYPE_13__ {TYPE_4__* value; } ;
typedef TYPE_3__ listNode ;
typedef int list ;
typedef int dictEntry ;
struct TYPE_14__ {scalar_t__ btype; } ;
typedef TYPE_4__ client ;
struct TYPE_11__ {int blocking_keys; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;

void FUNC_8(readyList *VAR_1) {
    dictEntry *VAR_2;



    VAR_2 = FUNC_0(VAR_1->db->blocking_keys,VAR_1->key);
    if (VAR_2) {
        list *VAR_3 = FUNC_1(VAR_2);
        int VAR_4 = FUNC_5(VAR_3);

        while(VAR_4--) {
            listNode *VAR_5 = FUNC_4(VAR_3);
            client *VAR_6 = VAR_5->value;






            FUNC_3(VAR_3,VAR_5);
            FUNC_2(VAR_3,VAR_6);

            if (VAR_6->btype != VAR_0) continue;







            if (!FUNC_6(VAR_6, VAR_1->key)) continue;

            FUNC_7(VAR_6);
        }
    }
}
