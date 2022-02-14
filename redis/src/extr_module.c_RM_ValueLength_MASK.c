
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int type; } ;
struct TYPE_8__ {TYPE_2__* value; } ;
typedef TYPE_1__ RedisModuleKey ;







 size_t FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (TYPE_2__*) ;
 size_t FUNC_2 (TYPE_2__*) ;
 size_t FUNC_3 (TYPE_2__*) ;
 size_t FUNC_4 (TYPE_2__*) ;

size_t FUNC_5(RedisModuleKey *VAR_0) {
    if (VAR_0 == ((void*)0) || VAR_0->value == ((void*)0)) return 0;
    switch(VAR_0->value->type) {
    case 129: return FUNC_3(VAR_0->value);
    case 131: return FUNC_1(VAR_0->value);
    case 130: return FUNC_2(VAR_0->value);
    case 128: return FUNC_4(VAR_0->value);
    case 132: return FUNC_0(VAR_0->value);
    default: return 0;
    }
}
