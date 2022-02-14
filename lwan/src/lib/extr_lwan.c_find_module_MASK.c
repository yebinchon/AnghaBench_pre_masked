
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_module_info {struct lwan_module const* module; int name; } ;
struct lwan_module {int dummy; } ;
typedef int lwan_module ;


 struct lwan_module_info* VAR_0 ;
 struct lwan_module_info const* VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) __attribute__((no_sanitize_address))
static const struct lwan_module *FUNC_1(const char *VAR_2)
{
    extern const struct lwan_module_info FUNC_2(lwan_module);
    extern const struct lwan_module_info FUNC_3(lwan_module);
    const struct lwan_module_info *VAR_3;

    for (VAR_3 = VAR_0; VAR_3 < VAR_1; VAR_3++) {
        if (FUNC_0(VAR_3->name, VAR_2))
            return VAR_3->module;
    }

    return ((void*)0);
}
