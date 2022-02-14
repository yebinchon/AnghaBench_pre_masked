
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int mangled; int vtable; } ;
typedef TYPE_1__ type_info ;


 char const* FUNC_0 (char*,int ,int ,char*) ;

__attribute__((used)) static inline const char* FUNC_1(const type_info* VAR_0)
{
    if (!VAR_0) return "{}";
    return FUNC_0("{vtable=%p name=%s (%s)}",
                            VAR_0->vtable, VAR_0->mangled, VAR_0->name ? VAR_0->name : "");
}
