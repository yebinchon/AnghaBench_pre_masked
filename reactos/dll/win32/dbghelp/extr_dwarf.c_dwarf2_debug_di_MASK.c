
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int symt; int abbrev; } ;
typedef TYPE_1__ dwarf2_debug_info_t ;


 char const* FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static const char* FUNC_1(const dwarf2_debug_info_t* VAR_0)
{
    return FUNC_0("debug_info(abbrev:%p,symt:%p)",
                            VAR_0->abbrev, VAR_0->symt);
}
