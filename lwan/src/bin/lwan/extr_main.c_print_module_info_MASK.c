
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_module_info {char* name; } ;
typedef int lwan_module ;


 struct lwan_module_info* VAR_0 ;
 struct lwan_module_info const* VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(void)
{
    extern const struct lwan_module_info FUNC_2(lwan_module);
    extern const struct lwan_module_info FUNC_3(lwan_module);
    const struct lwan_module_info *VAR_2;

    FUNC_0("Available modules:\n");
    for (VAR_2 = VAR_0; VAR_2 < VAR_1; VAR_2++) {
        FUNC_0(" * %s\n", VAR_2->name);
    }
}
