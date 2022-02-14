
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int Number; int VesaNumber; } ;
typedef TYPE_1__* PCVBE_MODE ;
typedef size_t INT ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

PCVBE_MODE FUNC_0(WORD VAR_2)
{
    INT VAR_3;

    VAR_2 &= 0x1FF;


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        if ((!(VAR_2 & 0x100) && (VAR_2 == VAR_0[VAR_3].Number))
            || ((VAR_2 & 0x100) && (VAR_2== VAR_0[VAR_3].VesaNumber)))
        {
            return &VAR_0[VAR_3];
        }
    }

    return ((void*)0);
}
