
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_4__ {int VirtualAddress; int PointerToRawData; int SizeOfRawData; } ;
typedef int * PVOID ;
typedef TYPE_1__* PIMAGE_SECTION_HEADER ;
typedef int IMAGE_NT_HEADERS ;


 TYPE_1__* FUNC_0 (int const*,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

PVOID
FUNC_2
(const IMAGE_NT_HEADERS* VAR_0,
 PVOID VAR_1,
 ULONG VAR_2,
 PIMAGE_SECTION_HEADER *VAR_3)
{
    PIMAGE_SECTION_HEADER VAR_4 = ((void*)0);

    if (VAR_3)
        VAR_4 = *VAR_3;

    if ((VAR_4 == ((void*)0)) ||
        (VAR_2 < FUNC_1(VAR_4->VirtualAddress)) ||
        (VAR_2 >= FUNC_1(VAR_4->VirtualAddress) + FUNC_1(VAR_4->SizeOfRawData)))
    {
        VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
        if (VAR_4 == ((void*)0))
            return ((void*)0);

        if (VAR_3)
            *VAR_3 = VAR_4;
    }

    return (PVOID)((ULONG_PTR)VAR_1 + VAR_2 +
                   (ULONG_PTR)FUNC_1(VAR_4->PointerToRawData) -
                   (ULONG_PTR)FUNC_1(VAR_4->VirtualAddress));
}
