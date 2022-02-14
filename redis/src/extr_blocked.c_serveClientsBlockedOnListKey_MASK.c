
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int robj ;
struct TYPE_16__ {TYPE_9__* db; int key; } ;
typedef TYPE_3__ readyList ;
struct TYPE_17__ {TYPE_5__* value; } ;
typedef TYPE_4__ listNode ;
typedef int list ;
typedef int dictEntry ;
struct TYPE_14__ {int * target; } ;
struct TYPE_18__ {scalar_t__ btype; TYPE_2__* lastcmd; TYPE_1__ bpop; } ;
typedef TYPE_5__ client ;
struct TYPE_19__ {int id; int blocking_keys; } ;
struct TYPE_15__ {scalar_t__ proc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_9__*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_13 (TYPE_5__*,int ,int *,TYPE_9__*,int *,int) ;
 int FUNC_14 (TYPE_5__*) ;

void FUNC_15(robj *VAR_6, readyList *VAR_7) {


    dictEntry *VAR_8 = FUNC_2(VAR_7->db->blocking_keys,VAR_7->key);
    if (VAR_8) {
        list *VAR_9 = FUNC_3(VAR_8);
        int VAR_10 = FUNC_8(VAR_9);

        while(VAR_10--) {
            listNode *VAR_11 = FUNC_7(VAR_9);
            client *VAR_12 = VAR_11->value;

            if (VAR_12->btype != VAR_0) {


                FUNC_6(VAR_9,VAR_11);
                FUNC_5(VAR_9,VAR_12);
                continue;
            }

            robj *VAR_13 = VAR_12->bpop.target;
            int VAR_14 = (VAR_12->lastcmd &&
                         VAR_12->lastcmd->proc == VAR_5) ?
                         VAR_2 : VAR_3;
            robj *VAR_15 = FUNC_10(VAR_6,VAR_14);

            if (VAR_15) {



                if (VAR_13) FUNC_4(VAR_13);
                FUNC_14(VAR_12);

                if (FUNC_13(VAR_12,
                    VAR_7->key,VAR_13,VAR_7->db,VAR_15,
                    VAR_14) == VAR_1)
                {


                    FUNC_11(VAR_6,VAR_15,VAR_14);
                }

                if (VAR_13) FUNC_1(VAR_13);
                FUNC_1(VAR_15);
            } else {
                break;
            }
        }
    }

    if (FUNC_9(VAR_6) == 0) {
        FUNC_0(VAR_7->db,VAR_7->key);
        FUNC_12(VAR_4,"del",VAR_7->key,VAR_7->db->id);
    }


}
