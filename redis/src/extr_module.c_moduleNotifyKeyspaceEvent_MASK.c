
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_8__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_10__ {int client; int module; } ;
struct TYPE_9__ {int event_mask; int active; int (* notify_callback ) (TYPE_3__*,int,char const*,int *) ;int module; } ;
typedef TYPE_2__ RedisModuleKeyspaceSubscriber ;
typedef TYPE_3__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_3__*,int,char const*,int *) ;

void FUNC_6(int VAR_5, const char *VAR_6, robj *VAR_7, int VAR_8) {

    if (FUNC_0(VAR_4) == 0) return;

    listIter VAR_9;
    listNode *VAR_10;
    FUNC_2(VAR_4,&VAR_9);


    VAR_5 &= ~(VAR_0 | VAR_1);

    while((VAR_10 = FUNC_1(&VAR_9))) {
        RedisModuleKeyspaceSubscriber *VAR_11 = VAR_10->value;


        if ((VAR_11->event_mask & VAR_5) && VAR_11->active == 0) {
            RedisModuleCtx VAR_12 = VAR_2;
            VAR_12.module = VAR_11->module;
            VAR_12.client = VAR_3;
            FUNC_4(VAR_12.client, VAR_8);




            VAR_11->active = 1;
            VAR_11->notify_callback(&VAR_12, VAR_5, VAR_6, VAR_7);
            VAR_11->active = 0;
            FUNC_3(&VAR_12);
        }
    }
}
