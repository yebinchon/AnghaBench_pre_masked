
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* proto; } ;
typedef TYPE_1__ RedisModuleCallReply ;


 size_t FUNC_0 (char const*) ;

const char *FUNC_1(RedisModuleCallReply *VAR_0, size_t *VAR_1) {
    if (VAR_0->proto) *VAR_1 = FUNC_0(VAR_0->proto);
    return VAR_0->proto;
}
