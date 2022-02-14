
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct redisCommand {int name; } ;
typedef int robj ;
struct TYPE_17__ {int * key; TYPE_1__* db; } ;
typedef TYPE_4__ readyList ;
struct TYPE_18__ {TYPE_6__* value; } ;
typedef TYPE_5__ listNode ;
typedef int list ;
typedef int dictEntry ;
struct TYPE_19__ {scalar_t__ btype; TYPE_3__* db; TYPE_2__* lastcmd; } ;
typedef TYPE_6__ client ;
struct TYPE_20__ {struct redisCommand* zpopmaxCommand; struct redisCommand* zpopminCommand; } ;
struct TYPE_16__ {int id; } ;
struct TYPE_15__ {scalar_t__ proc; } ;
struct TYPE_14__ {int blocking_keys; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_6__*,int **,int,int,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_6__*) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct redisCommand*,int ,int **,int,int) ;
 TYPE_8__ VAR_6 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_6__*) ;
 unsigned long FUNC_13 (int *) ;

void FUNC_14(robj *VAR_7, readyList *VAR_8) {


    dictEntry *VAR_9 = FUNC_2(VAR_8->db->blocking_keys,VAR_8->key);
    if (VAR_9) {
        list *VAR_10 = FUNC_3(VAR_9);
        int VAR_11 = FUNC_9(VAR_10);
        unsigned long VAR_12 = FUNC_13(VAR_7);

        while(VAR_11-- && VAR_12) {
            listNode *VAR_13 = FUNC_8(VAR_10);
            client *VAR_14 = VAR_13->value;

            if (VAR_14->btype != VAR_0) {


                FUNC_7(VAR_10,VAR_13);
                FUNC_6(VAR_10,VAR_14);
                continue;
            }

            int VAR_15 = (VAR_14->lastcmd &&
                         VAR_14->lastcmd->proc == VAR_5)
                         ? VAR_4 : VAR_3;
            FUNC_12(VAR_14);
            FUNC_4(VAR_14,&VAR_8->key,1,VAR_15,1,((void*)0));
            VAR_12--;


            robj *VAR_16[2];
            struct redisCommand *VAR_17 = VAR_15 == VAR_4 ?
                                       VAR_6.zpopminCommand :
                                       VAR_6.zpopmaxCommand;
            VAR_16[0] = FUNC_0(VAR_17->name,FUNC_11(VAR_17->name));
            VAR_16[1] = VAR_8->key;
            FUNC_5(VAR_8->key);
            FUNC_10(VAR_17,VAR_14->db->id,
                      VAR_16,2,VAR_1|VAR_2);
            FUNC_1(VAR_16[0]);
            FUNC_1(VAR_16[1]);
        }
    }
}
