
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_3__ {struct TYPE_3__* Next; } ;
typedef TYPE_1__* PSINGLE_LIST_ENTRY ;



USHORT FUNC_0(PSINGLE_LIST_ENTRY VAR_0)
{
    USHORT VAR_1 = 0;
    while (VAR_0->Next)
    {
        ++VAR_1;
        VAR_0 = VAR_0->Next;
    }
    return VAR_1;
}
