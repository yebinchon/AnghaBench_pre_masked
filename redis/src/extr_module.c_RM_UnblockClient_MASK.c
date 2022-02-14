
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ client; scalar_t__ unblocked; int * timeout_callback; scalar_t__ blocked_on_keys; } ;
typedef TYPE_1__ RedisModuleBlockedClient ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,void*) ;

int FUNC_2(RedisModuleBlockedClient *VAR_2, void *VAR_3) {
    if (VAR_2->blocked_on_keys) {


        if (VAR_2->timeout_callback == ((void*)0)) return VAR_0;
        if (VAR_2->unblocked) return VAR_1;
        if (VAR_2->client) FUNC_0(VAR_2->client);
    }
    FUNC_1(VAR_2,VAR_3);
    return VAR_1;
}
