
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* array; } ;
struct TYPE_7__ {scalar_t__ type; size_t len; TYPE_1__ val; } ;
typedef TYPE_2__ RedisModuleCallReply ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

RedisModuleCallReply *FUNC_1(RedisModuleCallReply *VAR_1, size_t VAR_2) {
    FUNC_0(VAR_1);
    if (VAR_1->type != VAR_0) return ((void*)0);
    if (VAR_2 >= VAR_1->len) return ((void*)0);
    return VAR_1->val.array+VAR_2;
}
