
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ module_id; struct TYPE_10__* next; void* callback; TYPE_1__* module; } ;
typedef TYPE_2__ moduleClusterReceiver ;
struct TYPE_12__ {int cluster_enabled; } ;
struct TYPE_11__ {TYPE_1__* module; } ;
struct TYPE_9__ {int name; } ;
typedef TYPE_3__ RedisModuleCtx ;
typedef void* RedisModuleClusterMessageReceiver ;


 TYPE_2__** VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_6__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;

void FUNC_3(RedisModuleCtx *VAR_2, uint8_t VAR_3, RedisModuleClusterMessageReceiver VAR_4) {
    if (!VAR_1.cluster_enabled) return;

    uint64_t VAR_5 = FUNC_0(VAR_2->module->name,0);
    moduleClusterReceiver *VAR_6 = VAR_0[VAR_3], *VAR_7 = ((void*)0);
    while(VAR_6) {
        if (VAR_6->module_id == VAR_5) {

            if (VAR_4) {
                VAR_6->callback = VAR_4;
            } else {



                if (VAR_7)
                    VAR_7->next = VAR_6->next;
                else
                    VAR_0[VAR_3]->next = VAR_6->next;
                FUNC_1(VAR_6);
            }
            return;
        }
        VAR_7 = VAR_6;
        VAR_6 = VAR_6->next;
    }


    if (VAR_4) {
        VAR_6 = FUNC_2(sizeof(*VAR_6));
        VAR_6->module_id = VAR_5;
        VAR_6->module = VAR_2->module;
        VAR_6->callback = VAR_4;
        VAR_6->next = VAR_0[VAR_3];
        VAR_0[VAR_3] = VAR_6;
    }
}
