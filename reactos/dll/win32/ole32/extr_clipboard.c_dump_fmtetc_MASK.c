
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tymed; int lindex; int dwAspect; int ptd; int cfFormat; } ;
typedef TYPE_1__ FORMATETC ;


 char const* FUNC_0 (char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline const char *FUNC_1(FORMATETC *VAR_0)
{
    if (!VAR_0) return "(null)";
    return FUNC_0("cf %04x ptd %p aspect %x lindex %d tymed %x",
                            VAR_0->cfFormat, VAR_0->ptd, VAR_0->dwAspect, VAR_0->lindex, VAR_0->tymed);
}
