
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_2__ {scalar_t__ Length; scalar_t__ Address; scalar_t__ Type; } ;


 int FUNC_0 (char*,size_t,...) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(ULONG VAR_6, ULONG_PTR VAR_7, ULONG VAR_8)
{
    FUNC_0("GspSetHwBreakpoint(%lu, 0x%p, %lu)\n", VAR_6, VAR_7, VAR_8);

    if (VAR_1 == VAR_6)
    {
        FUNC_1("Read watchpoint not supported\n");
        FUNC_2(VAR_4, "E22");
    }
    else if (VAR_0 == VAR_6 && 1 != VAR_8)
    {
        FUNC_1("Invalid length %lu for hardware breakpoint\n", VAR_8);
        FUNC_2(VAR_4, "E22");
    }
    else if (1 != VAR_8 && 2 != VAR_8 && 4 != VAR_8)
    {
        FUNC_1("Invalid length %lu for GDB Z type %lu\n", VAR_8, VAR_6);
        FUNC_2(VAR_4, "E22");
    }
    else if (0 != (VAR_7 & (VAR_8 - 1)))
    {
        FUNC_1("Invalid alignment for address 0x%p and length %d\n", VAR_7, VAR_8);
        FUNC_2(VAR_4, "E22");
    }
    else if (VAR_5 == VAR_2)
    {
        FUNC_1("Trying to set too many hardware breakpoints\n");
        FUNC_2(VAR_4, "E22");
    }
    else
    {
        FUNC_0("Stored at index %u\n", VAR_2);
        VAR_3[VAR_2].Type = VAR_6;
        VAR_3[VAR_2].Address = VAR_7;
        VAR_3[VAR_2].Length = VAR_8;
        VAR_2++;
        FUNC_2(VAR_4, "OK");
    }
}
