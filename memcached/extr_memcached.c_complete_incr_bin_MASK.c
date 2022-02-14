
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_23__ {void* value; } ;
struct TYPE_29__ {TYPE_12__ body; } ;
struct TYPE_32__ {TYPE_5__ message; } ;
typedef TYPE_8__ protocol_binary_response_incr ;
struct TYPE_27__ {int expiration; void* initial; void* delta; } ;
struct TYPE_28__ {TYPE_3__ body; } ;
struct TYPE_33__ {TYPE_4__ message; } ;
typedef TYPE_9__ protocol_binary_request_incr ;
typedef int item ;
struct TYPE_25__ {size_t keylen; scalar_t__ cas; } ;
struct TYPE_26__ {TYPE_1__ request; } ;
struct TYPE_22__ {int wsize; scalar_t__ cmd; scalar_t__ cas; TYPE_7__* thread; TYPE_2__ binary_header; scalar_t__ wbuf; } ;
typedef TYPE_10__ conn ;
struct TYPE_30__ {int mutex; int decr_misses; int incr_misses; } ;
struct TYPE_31__ {TYPE_6__ stats; } ;
struct TYPE_24__ {int verbose; } ;





 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_10__*,char*,size_t,int,void*,char*,scalar_t__*) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (TYPE_10__*) ;
 TYPE_9__* FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (int ,char*,...) ;
 void* FUNC_7 (void*) ;
 int * FUNC_8 (char*,size_t,int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int) ;
 void* FUNC_12 (void*) ;
 int FUNC_13 (TYPE_10__*,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 TYPE_15__ VAR_7 ;
 int FUNC_17 (char*,int,char*,unsigned long long) ;
 int VAR_8 ;
 int FUNC_18 (int *,int ,TYPE_10__*) ;
 int FUNC_19 (char*) ;
 void* FUNC_20 (char*,int *,int) ;
 int FUNC_21 (TYPE_10__*,int ,int *,int ) ;
 int FUNC_22 (TYPE_10__*,TYPE_12__*,int ,int ,int) ;

__attribute__((used)) static void FUNC_23(conn *VAR_9) {
    item *VAR_10;
    char *VAR_11;
    size_t VAR_12;

    char VAR_13[VAR_0];
    uint64_t VAR_14 = 0;

    protocol_binary_response_incr* VAR_15 = (protocol_binary_response_incr*)VAR_9->wbuf;
    protocol_binary_request_incr* VAR_16 = FUNC_5(VAR_9);

    FUNC_3(VAR_9 != ((void*)0));
    FUNC_3(VAR_9->wsize >= sizeof(*VAR_15));


    VAR_16->message.body.delta = FUNC_12(VAR_16->message.body.delta);
    VAR_16->message.body.initial = FUNC_12(VAR_16->message.body.initial);
    VAR_16->message.body.expiration = FUNC_11(VAR_16->message.body.expiration);
    VAR_11 = FUNC_4(VAR_9);
    VAR_12 = VAR_9->binary_header.request.keylen;

    if (VAR_7.verbose > 1) {
        int VAR_17;
        FUNC_6(VAR_8, "incr ");

        for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
            FUNC_6(VAR_8, "%c", VAR_11[VAR_17]);
        }
        FUNC_6(VAR_8, " %lld, %llu, %d\n",
                (long long)VAR_16->message.body.delta,
                (long long)VAR_16->message.body.initial,
                VAR_16->message.body.expiration);
    }

    if (VAR_9->binary_header.request.cas != 0) {
        VAR_14 = VAR_9->binary_header.request.cas;
    }
    switch(FUNC_2(VAR_9, VAR_11, VAR_12, VAR_9->cmd == VAR_2,
                     VAR_16->message.body.delta, VAR_13,
                     &VAR_14)) {
    case 128:
        VAR_15->message.body.value = FUNC_7(FUNC_20(VAR_13, ((void*)0), 10));
        if (VAR_14) {
            VAR_9->cas = VAR_14;
        }
        FUNC_22(VAR_9, &VAR_15->message.body, 0, 0,
                           sizeof(VAR_15->message.body.value));
        break;
    case 129:
        FUNC_21(VAR_9, VAR_3, ((void*)0), 0);
        break;
    case 130:
        FUNC_13(VAR_9, "SERVER_ERROR Out of memory incrementing value");
        break;
    case 131:
        if (VAR_16->message.body.expiration != 0xffffffff) {

            VAR_15->message.body.value = FUNC_7(VAR_16->message.body.initial);

            FUNC_17(VAR_13, VAR_0, "%llu",
                (unsigned long long)VAR_16->message.body.initial);
            int VAR_18 = FUNC_19(VAR_13);
            VAR_10 = FUNC_8(VAR_11, VAR_12, 0, FUNC_16(VAR_16->message.body.expiration),
                            VAR_18 + 2);

            if (VAR_10 != ((void*)0)) {
                FUNC_10(FUNC_0(VAR_10), VAR_13, VAR_18);
                FUNC_10(FUNC_0(VAR_10) + VAR_18, "\r\n", 2);

                if (FUNC_18(VAR_10, VAR_1, VAR_9)) {
                    VAR_9->cas = FUNC_1(VAR_10);
                    FUNC_22(VAR_9, &VAR_15->message.body, 0, 0, sizeof(VAR_15->message.body.value));
                } else {
                    FUNC_21(VAR_9, VAR_6,
                                    ((void*)0), 0);
                }
                FUNC_9(VAR_10);
            } else {
                FUNC_13(VAR_9,
                        "SERVER_ERROR Out of memory allocating new item");
            }
        } else {
            FUNC_14(&VAR_9->thread->stats.mutex);
            if (VAR_9->cmd == VAR_2) {
                VAR_9->thread->stats.incr_misses++;
            } else {
                VAR_9->thread->stats.decr_misses++;
            }
            FUNC_15(&VAR_9->thread->stats.mutex);

            FUNC_21(VAR_9, VAR_5, ((void*)0), 0);
        }
        break;
    case 132:
        FUNC_21(VAR_9, VAR_4, ((void*)0), 0);
        break;
    }
}
