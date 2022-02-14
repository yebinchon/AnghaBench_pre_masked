
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ PageCount; } ;
typedef TYPE_1__ FREELDR_MEMORY_DESCRIPTOR ;


 TYPE_1__ const* VAR_0 ;

const FREELDR_MEMORY_DESCRIPTOR*
FUNC_0(const FREELDR_MEMORY_DESCRIPTOR* VAR_1)
{
    if (VAR_1 == ((void*)0))
    {
        return VAR_0;
    }
    else
    {
        VAR_1++;
        if (VAR_1->PageCount == 0) return ((void*)0);
        return VAR_1;
    }
}
