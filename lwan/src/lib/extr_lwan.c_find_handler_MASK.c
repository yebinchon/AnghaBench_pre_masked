
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_handler_info {void* handler; int name; } ;
typedef int lwan_handler ;


 struct lwan_handler_info* VAR_0 ;
 struct lwan_handler_info const* VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) __attribute__((no_sanitize_address))
static void *FUNC_1(const char *VAR_2)
{
    extern const struct lwan_handler_info FUNC_2(lwan_handler);
    extern const struct lwan_handler_info FUNC_3(lwan_handler);
    const struct lwan_handler_info *VAR_3;

    for (VAR_3 = VAR_0; VAR_3 < VAR_1;
         VAR_3++) {
        if (FUNC_0(VAR_3->name, VAR_2))
            return VAR_3->handler;
    }

    return ((void*)0);
}
