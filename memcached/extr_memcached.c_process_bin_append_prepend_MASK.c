
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int it_flags; } ;
typedef TYPE_3__ item ;
struct TYPE_15__ {int keylen; int bodylen; int cas; } ;
struct TYPE_16__ {TYPE_1__ request; } ;
struct TYPE_18__ {int sbytes; int cmd; int rlbytes; int substate; void* ritem; TYPE_3__* item; TYPE_2__ binary_header; int write_and_go; } ;
typedef TYPE_4__ conn ;
struct TYPE_19__ {int verbose; scalar_t__ detail_enabled; } ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 char* FUNC_4 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,int) ;
 TYPE_3__* FUNC_7 (char*,int,int ,int ,int) ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 TYPE_6__ VAR_7 ;
 int FUNC_10 (char*,int) ;
 int VAR_8 ;
 int FUNC_11 (TYPE_4__*,int ,int *,int) ;

__attribute__((used)) static void FUNC_12(conn *VAR_9) {
    char *VAR_10;
    int VAR_11;
    int VAR_12;
    item *VAR_13;

    FUNC_3(VAR_9 != ((void*)0));

    VAR_10 = FUNC_4(VAR_9);
    VAR_11 = VAR_9->binary_header.request.keylen;
    VAR_12 = VAR_9->binary_header.request.bodylen - VAR_11;

    if (VAR_7.verbose > 1) {
        FUNC_6(VAR_8, "Value len is %d\n", VAR_12);
    }

    if (VAR_7.detail_enabled) {
        FUNC_10(VAR_10, VAR_11);
    }

    VAR_13 = FUNC_7(VAR_10, VAR_11, 0, 0, VAR_12+2);

    if (VAR_13 == 0) {
        if (! FUNC_8(VAR_11, 0, VAR_12 + 2)) {
            FUNC_11(VAR_9, VAR_3, ((void*)0), VAR_12);
        } else {
            FUNC_9(VAR_9, "SERVER_ERROR Out of memory allocating item");

            VAR_9->sbytes = VAR_12;
        }

        VAR_9->write_and_go = VAR_6;
        return;
    }

    FUNC_2(VAR_13, VAR_9->binary_header.request.cas);

    switch (VAR_9->cmd) {
        case 129:
            VAR_9->cmd = VAR_1;
            break;
        case 128:
            VAR_9->cmd = VAR_2;
            break;
        default:
            FUNC_3(0);
    }

    VAR_9->item = VAR_13;







    VAR_9->ritem = FUNC_0(VAR_13);

    VAR_9->rlbytes = VAR_12;
    FUNC_5(VAR_9, VAR_5);
    VAR_9->substate = VAR_4;
}
