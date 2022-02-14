
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Ptr; scalar_t__ Root; scalar_t__ Size; } ;
typedef TYPE_1__* PSAFE_READ ;
typedef int * PDWORD ;
typedef int DWORD ;



DWORD FUNC_0(PSAFE_READ VAR_0)
{
    if (VAR_0->Ptr + sizeof(DWORD) <= (VAR_0->Root + VAR_0->Size))
    {
        DWORD VAR_1 = *(PDWORD)VAR_0->Ptr;
        VAR_0->Ptr += sizeof(DWORD);
        return VAR_1;
    }
    VAR_0->Ptr = VAR_0->Root + VAR_0->Size;
    return 0;
}
