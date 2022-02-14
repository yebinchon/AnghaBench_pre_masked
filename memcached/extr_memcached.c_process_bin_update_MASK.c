
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_29__ {void* expiration; void* flags; } ;
struct TYPE_30__ {TYPE_1__ body; } ;
struct TYPE_34__ {TYPE_2__ message; } ;
typedef TYPE_6__ protocol_binary_request_set ;
struct TYPE_35__ {int it_flags; } ;
typedef TYPE_7__ item ;
typedef enum store_item_type { ____Placeholder_store_item_type } store_item_type ;
struct TYPE_32__ {int keylen; int bodylen; int extlen; int cas; } ;
struct TYPE_33__ {TYPE_4__ request; } ;
struct TYPE_36__ {int cmd; int sfd; int sbytes; int rlbytes; int substate; void* ritem; TYPE_7__* item; TYPE_5__ binary_header; int write_and_go; TYPE_3__* thread; } ;
typedef TYPE_8__ conn ;
struct TYPE_31__ {int storage; int l; } ;
struct TYPE_28__ {int verbose; scalar_t__ detail_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 void* FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 void* FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int *,int,int ,char*,int,void*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int FUNC_6 (int ,TYPE_7__*) ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 char* FUNC_8 (TYPE_8__*) ;
 TYPE_6__* FUNC_9 (TYPE_8__*) ;
 int VAR_12 ;
 int FUNC_10 (TYPE_8__*,int ) ;
 int VAR_13 ;
 int FUNC_11 (int ,char*,...) ;
 TYPE_7__* FUNC_12 (char*,int,void*,int ,int) ;
 TYPE_7__* FUNC_13 (char*,int,TYPE_8__*,int ) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (int,void*,int) ;
 int FUNC_16 (TYPE_7__*) ;
 void* FUNC_17 (void*) ;
 int FUNC_18 (TYPE_8__*,char*) ;
 int FUNC_19 (void*) ;
 TYPE_10__ VAR_14 ;
 int FUNC_20 (char*,int) ;
 int VAR_15 ;
 int FUNC_21 (TYPE_8__*,int ,int *,int) ;

__attribute__((used)) static void FUNC_22(conn *VAR_16) {
    char *VAR_17;
    int VAR_18;
    int VAR_19;
    item *VAR_20;
    protocol_binary_request_set* VAR_21 = FUNC_9(VAR_16);

    FUNC_7(VAR_16 != ((void*)0));

    VAR_17 = FUNC_8(VAR_16);
    VAR_18 = VAR_16->binary_header.request.keylen;


    VAR_21->message.body.flags = FUNC_17(VAR_21->message.body.flags);
    VAR_21->message.body.expiration = FUNC_17(VAR_21->message.body.expiration);

    VAR_19 = VAR_16->binary_header.request.bodylen - (VAR_18 + VAR_16->binary_header.request.extlen);

    if (VAR_14.verbose > 1) {
        int VAR_22;
        if (VAR_16->cmd == 130) {
            FUNC_11(VAR_15, "<%d ADD ", VAR_16->sfd);
        } else if (VAR_16->cmd == 128) {
            FUNC_11(VAR_15, "<%d SET ", VAR_16->sfd);
        } else {
            FUNC_11(VAR_15, "<%d REPLACE ", VAR_16->sfd);
        }
        for (VAR_22 = 0; VAR_22 < VAR_18; ++VAR_22) {
            FUNC_11(VAR_15, "%c", VAR_17[VAR_22]);
        }

        FUNC_11(VAR_15, " Value len is %d", VAR_19);
        FUNC_11(VAR_15, "\n");
    }

    if (VAR_14.detail_enabled) {
        FUNC_20(VAR_17, VAR_18);
    }

    VAR_20 = FUNC_12(VAR_17, VAR_18, VAR_21->message.body.flags,
            FUNC_19(VAR_21->message.body.expiration), VAR_19+2);

    if (VAR_20 == 0) {
        enum store_item_type VAR_23;
        if (! FUNC_15(VAR_18, VAR_21->message.body.flags, VAR_19 + 2)) {
            FUNC_21(VAR_16, VAR_9, ((void*)0), VAR_19);
            VAR_23 = VAR_10;
        } else {
            FUNC_18(VAR_16, "SERVER_ERROR Out of memory allocating item");

            VAR_16->sbytes = VAR_19;
            VAR_23 = VAR_4;
        }

        FUNC_5(VAR_16->thread->l, VAR_3, VAR_2,
                ((void*)0), VAR_23, 0, VAR_17, VAR_18, VAR_21->message.body.expiration,
                FUNC_0(VAR_20), VAR_16->sfd);



        if (VAR_16->cmd == 128) {
            VAR_20 = FUNC_13(VAR_17, VAR_18, VAR_16, VAR_0);
            if (VAR_20) {
                FUNC_16(VAR_20);
                FUNC_6(VAR_16->thread->storage, VAR_20);
                FUNC_14(VAR_20);
            }
        }


        VAR_16->write_and_go = VAR_13;
        return;
    }

    FUNC_4(VAR_20, VAR_16->binary_header.request.cas);

    switch (VAR_16->cmd) {
        case 130:
            VAR_16->cmd = VAR_5;
            break;
        case 128:
            VAR_16->cmd = VAR_8;
            break;
        case 129:
            VAR_16->cmd = VAR_7;
            break;
        default:
            FUNC_7(0);
    }

    if (FUNC_2(VAR_20) != 0) {
        VAR_16->cmd = VAR_6;
    }

    VAR_16->item = VAR_20;







    VAR_16->ritem = FUNC_1(VAR_20);

    VAR_16->rlbytes = VAR_19;
    FUNC_10(VAR_16, VAR_12);
    VAR_16->substate = VAR_11;
}
