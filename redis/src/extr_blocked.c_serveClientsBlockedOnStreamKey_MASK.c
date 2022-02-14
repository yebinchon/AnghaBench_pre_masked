
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct TYPE_36__ {TYPE_3__* member_1; int member_0; } ;
typedef TYPE_5__ streamPropInfo ;
struct TYPE_37__ {int seq; } ;
typedef TYPE_6__ streamID ;
typedef int streamConsumer ;
struct TYPE_38__ {TYPE_6__ last_id; } ;
typedef TYPE_7__ streamCG ;
struct TYPE_39__ {int last_id; } ;
typedef TYPE_8__ stream ;
struct TYPE_40__ {TYPE_8__* ptr; } ;
typedef TYPE_9__ robj ;
struct TYPE_30__ {int key; TYPE_1__* db; } ;
typedef TYPE_10__ readyList ;
typedef int listNode ;
typedef int listIter ;
typedef int list ;
typedef int dictEntry ;
struct TYPE_35__ {int xread_group_noack; int xread_count; TYPE_3__* xread_group; TYPE_2__* xread_consumer; int keys; } ;
struct TYPE_31__ {scalar_t__ btype; int resp; TYPE_4__ bpop; } ;
typedef TYPE_11__ client ;
struct TYPE_34__ {int ptr; } ;
struct TYPE_33__ {int ptr; } ;
struct TYPE_32__ {int blocking_keys; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_11__*,int) ;
 int FUNC_1 (TYPE_11__*,int ) ;
 int FUNC_2 (TYPE_11__*,char*) ;
 int FUNC_3 (TYPE_11__*,int) ;
 TYPE_6__* FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 TYPE_11__* FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,TYPE_6__*) ;
 TYPE_7__* FUNC_11 (TYPE_8__*,int ) ;
 int * FUNC_12 (TYPE_7__*,int ,int) ;
 int FUNC_13 (TYPE_11__*,TYPE_8__*,TYPE_6__*,int *,int ,int ,TYPE_7__*,int *,int,TYPE_5__*) ;
 int FUNC_14 (TYPE_11__*) ;

void FUNC_15(robj *VAR_1, readyList *VAR_2) {
    dictEntry *VAR_3 = FUNC_5(VAR_2->db->blocking_keys,VAR_2->key);
    stream *VAR_4 = VAR_1->ptr;




    if (VAR_3) {
        list *VAR_5 = FUNC_6(VAR_3);
        listNode *VAR_6;
        listIter VAR_7;
        FUNC_9(VAR_5,&VAR_7);

        while((VAR_6 = FUNC_7(&VAR_7))) {
            client *VAR_8 = FUNC_8(VAR_6);
            if (VAR_8->btype != VAR_0) continue;
            streamID *VAR_9 = FUNC_4(VAR_8->bpop.keys,
                                          VAR_2->key);
            streamCG *VAR_10 = ((void*)0);
            if (VAR_8->bpop.xread_group) {
                VAR_10 = FUNC_11(VAR_4,
                        VAR_8->bpop.xread_group->ptr);


                if (!VAR_10) {
                    FUNC_2(VAR_8,
                        "-NOGROUP the consumer group this client "
                        "was blocked on no longer exists");
                    FUNC_14(VAR_8);
                    continue;
                } else {
                    *VAR_9 = VAR_10->last_id;
                }
            }

            if (FUNC_10(&VAR_4->last_id, VAR_9) > 0) {
                streamID VAR_11 = *VAR_9;
                VAR_11.seq++;


                streamConsumer *VAR_12 = ((void*)0);
                int VAR_13 = 0;

                if (VAR_10) {
                    VAR_12 = FUNC_12(VAR_10,
                               VAR_8->bpop.xread_consumer->ptr,
                               1);
                    VAR_13 = VAR_8->bpop.xread_group_noack;
                }





                if (VAR_8->resp == 2) {
                    FUNC_0(VAR_8,1);
                    FUNC_0(VAR_8,2);
                } else {
                    FUNC_3(VAR_8,1);
                }
                FUNC_1(VAR_8,VAR_2->key);

                streamPropInfo VAR_14 = {
                    VAR_2->key,
                    VAR_8->bpop.xread_group
                };
                FUNC_13(VAR_8,VAR_4,&VAR_11,((void*)0),
                                     VAR_8->bpop.xread_count,
                                     0, VAR_10, VAR_12, VAR_13, &VAR_14);





                FUNC_14(VAR_8);
            }
        }
    }
}
