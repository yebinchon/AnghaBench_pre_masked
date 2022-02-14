
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gdi_dc_funcs {int dummy; } ;
struct TYPE_6__ {TYPE_1__* physDev; } ;
struct TYPE_5__ {struct TYPE_5__* next; struct gdi_dc_funcs const* funcs; } ;
typedef TYPE_1__* PHYSDEV ;
typedef TYPE_2__ DC ;



__attribute__((used)) static inline PHYSDEV FUNC_0( DC *VAR_0, const struct gdi_dc_funcs *VAR_1 )
{
    PHYSDEV VAR_2, *VAR_3 = &VAR_0->physDev;
    while (*VAR_3 && (*VAR_3)->funcs != VAR_1) VAR_3 = &(*VAR_3)->next;
    if (!*VAR_3) return ((void*)0);
    VAR_2 = *VAR_3;
    *VAR_3 = VAR_2->next;
    return VAR_2;
}
