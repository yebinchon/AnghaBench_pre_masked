
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_2__ {size_t PageFrameNumber; int Valid; int Write; } ;
typedef scalar_t__ PHARDWARE_PTE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* VAR_5 ;
 size_t VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (char*,size_t) ;

__attribute__((used)) static
VOID
FUNC_1(ULONG VAR_8, PHARDWARE_PTE *VAR_9, PHARDWARE_PTE *VAR_10)
{



    *VAR_9 = (PHARDWARE_PTE)&VAR_7[VAR_6*VAR_4];
    VAR_6++;

    VAR_5[VAR_8].PageFrameNumber = (ULONG)*VAR_9 >> VAR_3;
    VAR_5[VAR_8].Valid = 1;
    VAR_5[VAR_8].Write = 1;

    if (VAR_8+(VAR_0 >> 22) > 1023)
    {
        FUNC_0("WARNING! Entry: %X > 1023\n", VAR_8+(VAR_0 >> 22));
    }


    *VAR_10 = (PHARDWARE_PTE)&VAR_2[VAR_1*VAR_4];
    VAR_1++;

    VAR_5[VAR_8+(VAR_0 >> 22)].PageFrameNumber = ((ULONG)*VAR_10 >> VAR_3);
    VAR_5[VAR_8+(VAR_0 >> 22)].Valid = 1;
    VAR_5[VAR_8+(VAR_0 >> 22)].Write = 1;
}
