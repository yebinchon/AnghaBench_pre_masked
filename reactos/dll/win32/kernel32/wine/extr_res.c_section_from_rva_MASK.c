
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int VirtualAddress; int SizeOfRawData; } ;
typedef TYPE_1__ IMAGE_SECTION_HEADER ;
typedef int DWORD ;


 TYPE_1__* FUNC_0 (void*,int,int*) ;

__attribute__((used)) static const IMAGE_SECTION_HEADER *FUNC_1( void *VAR_0, DWORD VAR_1, DWORD VAR_2 )
{
    const IMAGE_SECTION_HEADER *VAR_3;
    DWORD VAR_4 = 0;
    int VAR_5;

    VAR_3 = FUNC_0( VAR_0, VAR_1, &VAR_4 );
    if (!VAR_3)
        return ((void*)0);

    for (VAR_5=VAR_4-1; VAR_5>=0; VAR_5--)
    {
        if (VAR_3[VAR_5].VirtualAddress <= VAR_2 &&
            VAR_2 <= (DWORD)VAR_3[VAR_5].VirtualAddress + VAR_3[VAR_5].SizeOfRawData)
        {
            return &VAR_3[VAR_5];
        }
    }

    return ((void*)0);
}
