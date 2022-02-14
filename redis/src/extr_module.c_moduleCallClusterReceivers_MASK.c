
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ module_id; struct TYPE_7__* next; int (* callback ) (TYPE_2__*,char const*,size_t,unsigned char const*,int ) ;int module; } ;
typedef TYPE_1__ moduleClusterReceiver ;
struct TYPE_8__ {int client; int module; } ;
typedef TYPE_2__ RedisModuleCtx ;


 TYPE_2__ VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,char const*,size_t,unsigned char const*,int ) ;

void FUNC_3(const char *VAR_3, uint64_t VAR_4, uint8_t VAR_5, const unsigned char *VAR_6, uint32_t VAR_7) {
    moduleClusterReceiver *VAR_8 = VAR_1[VAR_5];
    while(VAR_8) {
        if (VAR_8->module_id == VAR_4) {
            RedisModuleCtx VAR_9 = VAR_0;
            VAR_9.module = VAR_8->module;
            VAR_9.client = VAR_2;
            FUNC_1(VAR_9.client, 0);
            VAR_8->callback(&VAR_9,VAR_3,VAR_5,VAR_6,VAR_7);
            FUNC_0(&VAR_9);
            return;
        }
        VAR_8 = VAR_8->next;
    }
}
