
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef size_t ULONG ;
struct TYPE_3__ {int Asuchar; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
typedef scalar_t__* PUSHORT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

void FUNC_0(ULONG VAR_4)
{
    ULONG VAR_5;
    PUSHORT VAR_6 = (PUSHORT)VAR_3;

    if(VAR_4 < VAR_0)
    {
        for(VAR_5=0;VAR_5<VAR_1;VAR_5++)
            VAR_6[VAR_4*VAR_1 + VAR_5] = (USHORT)((VAR_2.u.Asuchar<<8) | 0x20);
    }
}
