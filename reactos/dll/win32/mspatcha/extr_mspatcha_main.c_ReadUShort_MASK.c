
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_3__ {scalar_t__ Ptr; scalar_t__ Root; scalar_t__ Size; } ;
typedef int * PUSHORT ;
typedef TYPE_1__* PSAFE_READ ;



USHORT FUNC_0(PSAFE_READ VAR_0)
{
    if (VAR_0->Ptr + sizeof(USHORT) <= (VAR_0->Root + VAR_0->Size))
    {
        USHORT VAR_1 = *(PUSHORT)VAR_0->Ptr;
        VAR_0->Ptr += sizeof(USHORT);
        return VAR_1;
    }
    VAR_0->Ptr = VAR_0->Root + VAR_0->Size;
    return 0;
}
