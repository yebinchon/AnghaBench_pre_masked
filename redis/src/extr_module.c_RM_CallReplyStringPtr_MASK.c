
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* str; } ;
struct TYPE_6__ {scalar_t__ type; size_t len; TYPE_1__ val; } ;
typedef TYPE_2__ RedisModuleCallReply ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

const char *FUNC_1(RedisModuleCallReply *VAR_2, size_t *VAR_3) {
    FUNC_0(VAR_2);
    if (VAR_2->type != VAR_1 &&
        VAR_2->type != VAR_0) return ((void*)0);
    if (VAR_3) *VAR_3 = VAR_2->len;
    return VAR_2->val.str;
}
