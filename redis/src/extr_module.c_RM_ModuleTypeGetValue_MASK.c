
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* value; } ;
typedef TYPE_2__ moduleValue ;
struct TYPE_8__ {TYPE_1__* value; } ;
struct TYPE_6__ {TYPE_2__* ptr; } ;
typedef TYPE_3__ RedisModuleKey ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;

void *FUNC_1(RedisModuleKey *VAR_1) {
    if (VAR_1 == ((void*)0) ||
        VAR_1->value == ((void*)0) ||
        FUNC_0(VAR_1) != VAR_0) return ((void*)0);
    moduleValue *VAR_2 = VAR_1->value->ptr;
    return VAR_2->value;
}
