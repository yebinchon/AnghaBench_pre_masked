
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ LowPart; scalar_t__ HighPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;



void FUNC_0(LARGE_INTEGER *VAR_0,LARGE_INTEGER VAR_1,LARGE_INTEGER VAR_2)
{
    VAR_0->HighPart = VAR_1.HighPart - VAR_2.HighPart;
    if (VAR_1.LowPart >= VAR_2.LowPart)
        VAR_0->LowPart = VAR_1.LowPart - VAR_2.LowPart;
    else
    {
        VAR_0->LowPart = VAR_1.LowPart - VAR_2.LowPart;
        VAR_0->HighPart --;
    }
}
