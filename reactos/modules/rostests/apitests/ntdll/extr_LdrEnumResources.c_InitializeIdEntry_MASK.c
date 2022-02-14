
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int USHORT ;
struct TYPE_6__ {int DataIsDirectory; scalar_t__ OffsetToData; scalar_t__ NameIsString; int Name; } ;
struct TYPE_5__ {TYPE_2__* Lang1Entries; } ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_1__* PTEST_RESOURCES ;
typedef TYPE_2__* PIMAGE_RESOURCE_DIRECTORY_ENTRY ;



__attribute__((used)) static
VOID
FUNC_0(
    PTEST_RESOURCES VAR_0,
    PIMAGE_RESOURCE_DIRECTORY_ENTRY VAR_1,
    USHORT VAR_2,
    PVOID VAR_3)
{
    VAR_1->Name = VAR_2;
    VAR_1->NameIsString = 0;
    VAR_1->OffsetToData = (PUCHAR)VAR_3 - (PUCHAR)VAR_0;
    if (VAR_1 < VAR_0->Lang1Entries)
        VAR_1->DataIsDirectory = 1;
}
