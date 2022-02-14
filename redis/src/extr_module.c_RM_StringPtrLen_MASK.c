
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* ptr; } ;
typedef TYPE_1__ RedisModuleString ;


 size_t FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*) ;

const char *FUNC_2(const RedisModuleString *VAR_0, size_t *VAR_1) {
    if (VAR_0 == ((void*)0)) {
        const char *VAR_2 = "(NULL string reply referenced in module)";
        if (VAR_1) *VAR_1 = FUNC_1(VAR_2);
        return VAR_2;
    }
    if (VAR_1) *VAR_1 = FUNC_0(VAR_0->ptr);
    return VAR_0->ptr;
}
