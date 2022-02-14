
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct TYPE_18__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
struct TYPE_19__ {int key; TYPE_14__* db; } ;
typedef TYPE_2__ readyList ;
struct TYPE_20__ {TYPE_2__* value; } ;
typedef TYPE_3__ listNode ;
typedef int list ;
struct TYPE_21__ {int * ready_keys; } ;
struct TYPE_17__ {int ready_keys; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (TYPE_14__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 TYPE_5__ VAR_3 ;
 int FUNC_12 (TYPE_2__*) ;

void FUNC_13(void) {
    while(FUNC_5(VAR_3.ready_keys) != 0) {
        list *VAR_4;





        VAR_4 = VAR_3.ready_keys;
        VAR_3.ready_keys = FUNC_2();

        while(FUNC_5(VAR_4) != 0) {
            listNode *VAR_5 = FUNC_4(VAR_4);
            readyList *VAR_6 = VAR_5->value;



            FUNC_1(VAR_6->db->ready_keys,VAR_6->key);


            robj *VAR_7 = FUNC_7(VAR_6->db,VAR_6->key);

            if (VAR_7 != ((void*)0)) {
                if (VAR_7->type == VAR_0)
                    FUNC_9(VAR_7,VAR_6);
                else if (VAR_7->type == VAR_2)
                    FUNC_10(VAR_7,VAR_6);
                else if (VAR_7->type == VAR_1)
                    FUNC_11(VAR_7,VAR_6);



                FUNC_8(VAR_6);
            }


            FUNC_0(VAR_6->key);
            FUNC_12(VAR_6);
            FUNC_3(VAR_4,VAR_5);
        }
        FUNC_6(VAR_4);
    }
}
