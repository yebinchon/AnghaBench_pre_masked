
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_16__ {TYPE_4__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_23__ {int * user; int flags; } ;
struct TYPE_22__ {scalar_t__ id; int dataver; } ;
struct TYPE_21__ {int in_hook; int ver; int name; } ;
struct TYPE_20__ {TYPE_9__* client; TYPE_6__* module; } ;
struct TYPE_19__ {TYPE_6__* module; TYPE_8__ event; int (* callback ) (TYPE_5__*,TYPE_8__,int,void*) ;} ;
struct TYPE_18__ {int dbnum; } ;
struct TYPE_17__ {int module_version; int module_name; int version; } ;
typedef int RedisModuleReplicationInfoV1 ;
typedef TYPE_2__ RedisModuleModuleChangeV1 ;
typedef TYPE_3__ RedisModuleFlushInfoV1 ;
typedef TYPE_4__ RedisModuleEventListener ;
typedef TYPE_5__ RedisModuleCtx ;
typedef int RedisModuleClientInfoV1 ;
typedef TYPE_6__ RedisModule ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_9__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_9__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_9__* VAR_11 ;
 int FUNC_6 (int *,void*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_9__*,int) ;
 int FUNC_9 (TYPE_5__*,TYPE_8__,int,void*) ;

void FUNC_10(uint64_t VAR_12, int VAR_13, void *VAR_14) {



    if (FUNC_2(VAR_10) == 0) return;

    listIter VAR_15;
    listNode *VAR_16;
    FUNC_4(VAR_10,&VAR_15);
    while((VAR_16 = FUNC_3(&VAR_15))) {
        RedisModuleEventListener *VAR_17 = VAR_16->value;
        if (VAR_17->event.id == VAR_12) {
            RedisModuleCtx VAR_18 = VAR_2;
            VAR_18.module = VAR_17->module;

            if (VAR_1 == 0) {
                VAR_18.client = VAR_11;
            } else {
                VAR_18.client = FUNC_0(((void*)0));
                VAR_18.client->flags |= VAR_0;
                VAR_18.client->user = ((void*)0);
            }

            void *VAR_19 = ((void*)0);
            RedisModuleClientInfoV1 VAR_20;
            RedisModuleReplicationInfoV1 VAR_21;
            RedisModuleModuleChangeV1 VAR_22;




            FUNC_8(VAR_18.client, 0);


            if (VAR_12 == VAR_3) {
                FUNC_6(&VAR_20,VAR_14,
                                                  VAR_17->event.dataver);
                VAR_19 = &VAR_20;
            } else if (VAR_12 == VAR_8) {
                FUNC_7(&VAR_21,VAR_17->event.dataver);
                VAR_19 = &VAR_21;
            } else if (VAR_12 == VAR_5) {
                VAR_19 = VAR_14;
                RedisModuleFlushInfoV1 *VAR_23 = VAR_14;
                if (VAR_23->dbnum != -1)
                    FUNC_8(VAR_18.client, VAR_23->dbnum);
            } else if (VAR_12 == VAR_7) {
                RedisModule *VAR_24 = VAR_14;
                if (VAR_24 == VAR_17->module)
                    continue;
                VAR_22 = VAR_9;
                VAR_22 = VAR_24->name;
                VAR_22 = VAR_24->ver;
                VAR_19 = &VAR_22;
            } else if (VAR_12 == VAR_6) {
                VAR_19 = VAR_14;
            } else if (VAR_12 == VAR_4) {
                VAR_19 = VAR_14;
            }

            VAR_1++;
            VAR_17->module->in_hook++;
            VAR_17->callback(&VAR_18,VAR_17->event,VAR_13,VAR_19);
            VAR_17->module->in_hook--;
            VAR_1--;

            if (VAR_1 != 0) FUNC_1(VAR_18.client);
            FUNC_5(&VAR_18);
        }
    }
}
