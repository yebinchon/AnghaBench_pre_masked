
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {int nkey; int nbytes; } ;
typedef TYPE_5__ item ;
struct TYPE_17__ {int keylen; int bodylen; } ;
struct TYPE_18__ {TYPE_1__ request; } ;
struct TYPE_22__ {int item; int cmd; int sasl_started; int sfd; int authenticated; TYPE_4__* thread; void* write_and_go; int sasl_conn; TYPE_2__ binary_header; } ;
typedef TYPE_6__ conn ;
struct TYPE_23__ {int sasl; scalar_t__ verbose; } ;
struct TYPE_19__ {int mutex; int auth_errors; int auth_cmds; } ;
struct TYPE_20__ {TYPE_3__ stats; } ;


 char* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_2 (TYPE_6__*,int ,int ,int ,unsigned int) ;
 int FUNC_3 (TYPE_6__*,char const*,unsigned int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_5 (TYPE_6__*,int ) ;
 void* VAR_5 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,char const*,int,char const**,unsigned int*) ;
 int FUNC_13 (int ,char const*,int,char const**,unsigned int*) ;
 TYPE_9__ VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_6__*,int ,int *,int) ;
 int FUNC_16 (TYPE_6__*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_17(conn *VAR_8) {
    FUNC_4(VAR_6.sasl);
    const char *VAR_9 = ((void*)0);
    unsigned int VAR_10 = 0;

    FUNC_4(VAR_8->item);
    FUNC_7(VAR_8);

    int VAR_11 = VAR_8->binary_header.request.keylen;
    int VAR_12 = VAR_8->binary_header.request.bodylen - VAR_11;

    if (VAR_11 > ((item*) VAR_8->item)->nkey) {
        FUNC_15(VAR_8, VAR_2, ((void*)0), VAR_12);
        VAR_8->write_and_go = VAR_5;
        FUNC_8(VAR_8->item);
        return;
    }

    char VAR_13[VAR_11+1];
    FUNC_9(VAR_13, FUNC_1((item*)VAR_8->item), VAR_11);
    VAR_13[VAR_11] = 0x00;

    if (VAR_6.verbose)
        FUNC_6(VAR_7, "mech:  ``%s'' with %d bytes of data\n", VAR_13, VAR_12);

    const char *VAR_14 = VAR_12 == 0 ? ((void*)0) : FUNC_0((item*) VAR_8->item);

    if (VAR_12 > ((item*) VAR_8->item)->nbytes) {
        FUNC_15(VAR_8, VAR_2, ((void*)0), VAR_12);
        VAR_8->write_and_go = VAR_5;
        FUNC_8(VAR_8->item);
        return;
    }

    int VAR_15=-1;

    switch (VAR_8->cmd) {
    case 131:
        VAR_15 = FUNC_12(VAR_8->sasl_conn, VAR_13,
                                   VAR_14, VAR_12,
                                   &VAR_9, &VAR_10);
        VAR_8->sasl_started = (VAR_15 == 128 || VAR_15 == 129);
        break;
    case 130:
        if (!VAR_8->sasl_started) {
            if (VAR_6.verbose) {
                FUNC_6(VAR_7, "%d: SASL_STEP called but sasl_server_start "
                        "not called for this connection!\n", VAR_8->sfd);
            }
            break;
        }
        VAR_15 = FUNC_13(VAR_8->sasl_conn,
                                  VAR_14, VAR_12,
                                  &VAR_9, &VAR_10);
        break;
    default:
        FUNC_4(0);


        if (VAR_6.verbose) {
            FUNC_6(VAR_7, "Unhandled command %d with challenge %s\n",
                    VAR_8->cmd, VAR_14);
        }
        break;
    }

    FUNC_8(VAR_8->item);

    if (VAR_6.verbose) {
        FUNC_6(VAR_7, "sasl result code:  %d\n", VAR_15);
    }

    switch(VAR_15) {
    case 128:
        VAR_8->authenticated = 1;
        FUNC_16(VAR_8, "Authenticated", 0, 0, FUNC_14("Authenticated"));
        FUNC_10(&VAR_8->thread->stats.mutex);
        VAR_8->thread->stats.auth_cmds++;
        FUNC_11(&VAR_8->thread->stats.mutex);
        break;
    case 129:
        FUNC_2(VAR_8, VAR_0, 0, 0, VAR_10);
        if(VAR_10 > 0) {
            FUNC_3(VAR_8, VAR_9, VAR_10);
        }
        FUNC_5(VAR_8, VAR_3);
        VAR_8->write_and_go = VAR_4;
        break;
    default:
        if (VAR_6.verbose)
            FUNC_6(VAR_7, "Unknown sasl response:  %d\n", VAR_15);
        FUNC_15(VAR_8, VAR_1, ((void*)0), 0);
        FUNC_10(&VAR_8->thread->stats.mutex);
        VAR_8->thread->stats.auth_cmds++;
        VAR_8->thread->stats.auth_errors++;
        FUNC_11(&VAR_8->thread->stats.mutex);
    }
}
