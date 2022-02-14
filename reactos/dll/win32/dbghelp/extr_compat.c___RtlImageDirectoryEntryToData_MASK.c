
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t USHORT ;
typedef int ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {int SizeOfHeaders; TYPE_1__* DataDirectory; int NumberOfRvaAndSizes; } ;
struct TYPE_8__ {TYPE_2__ OptionalHeader; } ;
struct TYPE_6__ {int Size; int VirtualAddress; } ;
typedef int * PVOID ;
typedef scalar_t__* PULONG ;
typedef TYPE_3__* PIMAGE_NT_HEADERS ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_3__*,int *,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ) ;

PVOID
FUNC_3(
    PVOID VAR_1,
    BOOLEAN VAR_2,
    USHORT VAR_3,
    PULONG VAR_4)
{
    PIMAGE_NT_HEADERS VAR_5;
    ULONG VAR_6;


    if ((ULONG_PTR)VAR_1 & 1)
    {
        VAR_1 = (PVOID)((ULONG_PTR)VAR_1 & ~1);
        VAR_2 = VAR_0;
    }

    VAR_5 = FUNC_0(VAR_1);
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    if (VAR_3 >= FUNC_2(VAR_5->OptionalHeader.NumberOfRvaAndSizes))
        return ((void*)0);

    VAR_6 = FUNC_2(VAR_5->OptionalHeader.DataDirectory[VAR_3].VirtualAddress);
    if (VAR_6 == 0)
        return ((void*)0);

    *VAR_4 = FUNC_2(VAR_5->OptionalHeader.DataDirectory[VAR_3].Size);

    if (VAR_2 || VAR_6 < FUNC_2(VAR_5->OptionalHeader.SizeOfHeaders))
        return (PVOID)((ULONG_PTR)VAR_1 + VAR_6);


    return FUNC_1(VAR_5, VAR_1, VAR_6, ((void*)0));
}
