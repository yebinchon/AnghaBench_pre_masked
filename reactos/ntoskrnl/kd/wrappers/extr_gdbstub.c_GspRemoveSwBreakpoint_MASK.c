
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ULONG_PTR ;
typedef size_t ULONG ;
struct TYPE_4__ {int Active; } ;
typedef int GSPSWBREAKPOINT ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t,size_t*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,size_t) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(ULONG_PTR VAR_3)
{
    ULONG VAR_4;

    FUNC_1("GspRemoveSwBreakpoint(0x%p)\n", VAR_3);

    if (FUNC_3(VAR_3, &VAR_4))
    {
        FUNC_1("Found match at index %u\n", VAR_4);
        FUNC_0(!VAR_2[VAR_4].Active);

        if (VAR_4 + 1 < VAR_1)
            FUNC_4(VAR_2 + VAR_4,
                    VAR_2 + (VAR_4 + 1),
                    (VAR_1 - VAR_4 - 1) * sizeof(GSPSWBREAKPOINT));

        VAR_1--;
        FUNC_5(VAR_0, "OK");
        return;
    }

    FUNC_2("Not found\n");
    FUNC_5(VAR_0, "E22");
}
