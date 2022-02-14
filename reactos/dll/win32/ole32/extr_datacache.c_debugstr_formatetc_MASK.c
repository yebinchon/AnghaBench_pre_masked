
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tymed; int lindex; int dwAspect; int ptd; int cfFormat; } ;
typedef TYPE_1__ FORMATETC ;


 char const* FUNC_0 (char*,int ,int ,int ,int ,int ) ;

const char *FUNC_1(const FORMATETC *VAR_0)
{
    return FUNC_0("{ cfFormat = 0x%x, ptd = %p, dwAspect = %d, lindex = %d, tymed = %d }",
        VAR_0->cfFormat, VAR_0->ptd, VAR_0->dwAspect,
        VAR_0->lindex, VAR_0->tymed);
}
