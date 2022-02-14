
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_20__ {TYPE_5__* value; } ;
typedef TYPE_2__ listNode ;
struct TYPE_21__ {int flags; int argc; scalar_t__ argv; } ;
typedef TYPE_3__ client ;
struct TYPE_23__ {TYPE_1__* module; int * disconnect_callback; int reply_client; scalar_t__ privdata; int (* free_privdata ) (TYPE_4__*,scalar_t__) ;TYPE_3__* client; int (* reply_callback ) (TYPE_4__*,void**,int ) ;int blocked_on_keys; } ;
struct TYPE_22__ {TYPE_3__* client; TYPE_1__* module; scalar_t__ blocked_privdata; int flags; TYPE_5__* blocked_client; int * blocked_ready_key; } ;
struct TYPE_19__ {int blocked_clients; } ;
struct TYPE_18__ {int clients_pending_write; int * module_blocked_pipe; } ;
typedef TYPE_4__ RedisModuleCtx ;
typedef TYPE_5__ RedisModuleBlockedClient ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int) ;
 TYPE_10__ VAR_6 ;
 int FUNC_11 (TYPE_4__*,void**,int ) ;
 int FUNC_12 (TYPE_4__*,scalar_t__) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_5__*) ;

void FUNC_15(void) {
    listNode *VAR_7;
    RedisModuleBlockedClient *VAR_8;

    FUNC_8(&VAR_5);


    char VAR_9[1];
    while (FUNC_10(VAR_6.module_blocked_pipe[0],VAR_9,1) == 1);
    while (FUNC_6(VAR_4)) {
        VAR_7 = FUNC_5(VAR_4);
        VAR_8 = VAR_7->value;
        client *VAR_10 = VAR_8->client;
        FUNC_4(VAR_4,VAR_7);
        FUNC_9(&VAR_5);
        if (VAR_10 && !VAR_8->blocked_on_keys && VAR_8->reply_callback) {
            RedisModuleCtx VAR_11 = VAR_3;
            VAR_11.flags |= VAR_2;
            VAR_11.blocked_privdata = VAR_8->privdata;
            VAR_11.blocked_ready_key = ((void*)0);
            VAR_11.module = VAR_8->module;
            VAR_11.client = VAR_8->client;
            VAR_11.blocked_client = VAR_8;
            VAR_8->reply_callback(&VAR_11,(void**)VAR_10->argv,VAR_10->argc);
            FUNC_7(&VAR_11);
        }


        if (VAR_8->privdata && VAR_8->free_privdata) {
            RedisModuleCtx VAR_12 = VAR_3;
            if (VAR_10 == ((void*)0))
                VAR_12.flags |= VAR_1;
            VAR_12.blocked_privdata = VAR_8->privdata;
            VAR_12.module = VAR_8->module;
            VAR_12.client = VAR_8->client;
            VAR_8->free_privdata(&VAR_12,VAR_8->privdata);
            FUNC_7(&VAR_12);
        }





        if (VAR_10) FUNC_0(VAR_10, VAR_8->reply_client);
        FUNC_2(VAR_8->reply_client);

        if (VAR_10 != ((void*)0)) {



            VAR_8->disconnect_callback = ((void*)0);
            FUNC_13(VAR_10);



            if (FUNC_1(VAR_10) &&
                !(VAR_10->flags & VAR_0))
            {
                VAR_10->flags |= VAR_0;
                FUNC_3(VAR_6.clients_pending_write,VAR_10);
            }
        }




        VAR_8->module->blocked_clients--;
        FUNC_14(VAR_8);


        FUNC_8(&VAR_5);
    }
    FUNC_9(&VAR_5);
}
