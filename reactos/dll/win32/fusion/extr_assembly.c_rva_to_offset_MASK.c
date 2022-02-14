
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_8__ {size_t NumberOfSections; } ;
struct TYPE_11__ {TYPE_1__ FileHeader; } ;
struct TYPE_9__ {scalar_t__ VirtualSize; } ;
struct TYPE_10__ {scalar_t__ PointerToRawData; scalar_t__ SizeOfRawData; scalar_t__ VirtualAddress; TYPE_2__ Misc; } ;
typedef TYPE_3__ IMAGE_SECTION_HEADER ;
typedef TYPE_4__ IMAGE_NT_HEADERS ;
typedef scalar_t__ DWORD ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static DWORD FUNC_1(IMAGE_NT_HEADERS *VAR_0, DWORD VAR_1)
{
    DWORD VAR_2 = VAR_1, VAR_3;
    IMAGE_SECTION_HEADER *VAR_4;
    WORD VAR_5;

    VAR_4 = FUNC_0(VAR_0);

    if (VAR_1 < VAR_4->PointerToRawData)
        return VAR_1;

    for (VAR_5 = 0; VAR_5 < VAR_0->FileHeader.NumberOfSections; VAR_5++)
    {
        if (VAR_4[VAR_5].SizeOfRawData)
            VAR_3 = VAR_4[VAR_5].SizeOfRawData;
        else
            VAR_3 = VAR_4[VAR_5].Misc.VirtualSize;

        if (VAR_1 >= VAR_4[VAR_5].VirtualAddress &&
            VAR_1 < (VAR_4[VAR_5].VirtualAddress + VAR_3))
        {
            if (VAR_4[VAR_5].PointerToRawData != 0)
            {
                VAR_2 -= VAR_4[VAR_5].VirtualAddress;
                VAR_2 += VAR_4[VAR_5].PointerToRawData;
            }

            return VAR_2;
        }
    }

    return 0;
}
