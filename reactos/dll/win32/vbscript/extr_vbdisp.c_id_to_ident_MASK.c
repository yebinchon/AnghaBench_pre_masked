
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ident_map_t ;
struct TYPE_3__ {scalar_t__ ident_map_cnt; scalar_t__ ident_map; } ;
typedef TYPE_1__ ScriptDisp ;
typedef scalar_t__ DISPID ;



__attribute__((used)) static inline ident_map_t *FUNC_0(ScriptDisp *VAR_0, DISPID VAR_1)
{
    return 0 < VAR_1 && VAR_1 <= VAR_0->ident_map_cnt ? VAR_0->ident_map+VAR_1-1 : ((void*)0);
}
