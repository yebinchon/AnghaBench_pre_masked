
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ HighPart; int LowPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(LARGE_INTEGER * VAR_0,BOOL VAR_1)
{
    if ((!VAR_1) || (!FUNC_1(VAR_0)))
    {
        VAR_0->LowPart = FUNC_0();
        VAR_0->HighPart = 0;
    }
}
