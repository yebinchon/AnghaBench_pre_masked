
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef size_t ULONG ;
struct TYPE_3__ {scalar_t__ vendorid; int * vendor_name; } ;
typedef int * LPSTR ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

LPSTR FUNC_1(USHORT VAR_1)
{
    ULONG VAR_2;

    for(VAR_2=0;VAR_2<FUNC_0(VAR_0);VAR_2++)
    {
        if(VAR_1 == VAR_0[VAR_2].vendorid)
            return VAR_0[VAR_2].vendor_name;
    }

    return ((void*)0);
}
