
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ VirtualAddress; scalar_t__ SizeOfRawData; scalar_t__ PointerToRawData; } ;
typedef scalar_t__ LPBYTE ;
typedef TYPE_1__ IMAGE_SECTION_HEADER ;
typedef scalar_t__ DWORD ;


 TYPE_1__* FUNC_0 (void*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void *FUNC_1( void *VAR_0, DWORD VAR_1, DWORD VAR_2, DWORD VAR_3 )
{
    const IMAGE_SECTION_HEADER *VAR_4;

    VAR_4 = FUNC_0( VAR_0, VAR_1, VAR_2 );
    if (!VAR_4)
        return ((void*)0);

    if (VAR_2 + VAR_3 <= (DWORD)VAR_4->VirtualAddress + VAR_4->SizeOfRawData)
        return (void*)((LPBYTE) VAR_0 + (VAR_4->PointerToRawData + VAR_2 - VAR_4->VirtualAddress));

    return ((void*)0);
}
