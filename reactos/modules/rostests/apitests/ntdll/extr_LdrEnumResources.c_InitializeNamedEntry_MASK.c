
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int NameIsString; int DataIsDirectory; scalar_t__ OffsetToData; scalar_t__ Name; } ;
struct TYPE_5__ {int StringIndex; int* StringBuffer; TYPE_2__* Lang1Entries; } ;
typedef int PWCHAR ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_1__* PTEST_RESOURCES ;
typedef TYPE_2__* PIMAGE_RESOURCE_DIRECTORY_ENTRY ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static
VOID
FUNC_3(
    PTEST_RESOURCES VAR_2,
    PIMAGE_RESOURCE_DIRECTORY_ENTRY VAR_3,
    PWCHAR VAR_4,
    PVOID VAR_5)
{
    VAR_3->Name = VAR_2->StringIndex * 2 + FUNC_0(VAR_1, VAR_0);
    VAR_3->NameIsString = 1;
    VAR_3->OffsetToData = (PUCHAR)VAR_5 - (PUCHAR)VAR_2;
    if (VAR_3 < VAR_2->Lang1Entries)
        VAR_3->DataIsDirectory = 1;
    VAR_2->StringBuffer[VAR_2->StringIndex] = FUNC_2(VAR_4);
    FUNC_1(&VAR_2->StringBuffer[VAR_2->StringIndex + 1], VAR_4);
    VAR_2->StringIndex += VAR_2->StringBuffer[VAR_2->StringIndex] * 2 + 1;
}
