
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Address; scalar_t__ SourceLine; } ;
typedef TYPE_1__* PROSSYM_ENTRY ;



__attribute__((used)) static int
FUNC_0(const PROSSYM_ENTRY VAR_0, const PROSSYM_ENTRY VAR_1)
{
    if (VAR_0->Address < VAR_1->Address)
    {
        return -1;
    }

    if (VAR_1->Address < VAR_0->Address)
    {
        return +1;
    }

    if (VAR_1->SourceLine == 0)
    {
        return -1;
    }

    if (VAR_0->SourceLine == 0)
    {
        return +1;
    }

    return 0;
}
