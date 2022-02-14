
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; size_t len; } ;
typedef TYPE_1__ RedisModuleCallReply ;





 int FUNC_0 (TYPE_1__*) ;

size_t FUNC_1(RedisModuleCallReply *VAR_0) {
    FUNC_0(VAR_0);
    switch(VAR_0->type) {
    case 128:
    case 129:
    case 130:
        return VAR_0->len;
    default:
        return 0;
    }
}
