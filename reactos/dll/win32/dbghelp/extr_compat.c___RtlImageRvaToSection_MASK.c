
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_8__ {int NumberOfSections; } ;
struct TYPE_10__ {TYPE_1__ FileHeader; } ;
struct TYPE_9__ {int SizeOfRawData; int VirtualAddress; } ;
typedef int PVOID ;
typedef TYPE_2__* PIMAGE_SECTION_HEADER ;
typedef TYPE_3__ IMAGE_NT_HEADERS ;


 TYPE_2__* FUNC_0 (TYPE_3__ const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

PIMAGE_SECTION_HEADER
FUNC_3(
    const IMAGE_NT_HEADERS* VAR_0,
    PVOID VAR_1,
    ULONG VAR_2)
{
    PIMAGE_SECTION_HEADER VAR_3;
    ULONG VAR_4;
    ULONG VAR_5;

    VAR_5 = FUNC_2(VAR_0->FileHeader.NumberOfSections);
    VAR_3 = FUNC_0(VAR_0);

    while (VAR_5--)
    {
        VAR_4 = FUNC_1(VAR_3->VirtualAddress);
        if ((VAR_4 <= VAR_2) && (VAR_2 < VAR_4 + FUNC_1(VAR_3->SizeOfRawData)))
            return VAR_3;
        VAR_3++;
    }

    return ((void*)0);
}
