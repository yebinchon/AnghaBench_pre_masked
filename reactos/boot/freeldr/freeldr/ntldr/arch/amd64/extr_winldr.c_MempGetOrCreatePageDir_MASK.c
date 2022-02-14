
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG64 ;
typedef size_t ULONG ;
struct TYPE_8__ {int Valid; int Write; scalar_t__ PageFrameNumber; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PHARDWARE_PTE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static
PHARDWARE_PTE
FUNC_3(PHARDWARE_PTE VAR_2, ULONG VAR_3)
{
    PHARDWARE_PTE VAR_4;

    if (!VAR_2)
        return ((void*)0);

    if (!VAR_2[VAR_3].Valid)
    {
        VAR_4 = FUNC_0(VAR_1, VAR_0);
        if (!VAR_4)
            return ((void*)0);
        FUNC_2(VAR_4, VAR_1);
        VAR_2[VAR_3].PageFrameNumber = FUNC_1(VAR_4);
        VAR_2[VAR_3].Valid = 1;
        VAR_2[VAR_3].Write = 1;
    }
    else
    {
        VAR_4 = (PVOID)((ULONG64)(VAR_2[VAR_3].PageFrameNumber) * VAR_1);
    }
    return VAR_4;
}
