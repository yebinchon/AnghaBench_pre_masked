
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ULONG_PTR ;
struct TYPE_2__ {size_t Address; int Active; } ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (size_t,int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(ULONG_PTR VAR_5)
{
    FUNC_0("GspSetSwBreakpoint(0x%p)\n", VAR_5);

    if (VAR_4 == VAR_2)
    {
        FUNC_1("Trying to set too many software breakpoints\n");
        FUNC_3(VAR_1, "E22");
        return;
    }

    if (FUNC_2(VAR_5, ((void*)0)))
    {
        FUNC_3(VAR_1, "E22");
        return;
    }

    FUNC_0("Stored at index %u\n", VAR_2);
    VAR_3[VAR_2].Address = VAR_5;
    VAR_3[VAR_2].Active = VAR_0;
    VAR_2++;
    FUNC_3(VAR_1, "OK");
}
