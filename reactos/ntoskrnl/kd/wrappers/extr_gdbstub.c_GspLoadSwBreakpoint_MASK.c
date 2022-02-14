
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_2__ {int Active; scalar_t__ Address; int PrevContent; } ;
typedef int PCHAR ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(ULONG VAR_4)
{
    VAR_1 = VAR_0;

    VAR_2[VAR_4].PrevContent = FUNC_2((PCHAR)VAR_2[VAR_4].Address);

    if (!VAR_1)
        FUNC_3((PCHAR)VAR_2[VAR_4].Address, VAR_3);

    VAR_2[VAR_4].Active = !VAR_1;

    if (VAR_1)
        FUNC_1("Failed to set software breakpoint at 0x%p\n", VAR_2[VAR_4].Address);
    else
        FUNC_0("Successfully set software breakpoint at 0x%p\n", VAR_2[VAR_4].Address);
}
