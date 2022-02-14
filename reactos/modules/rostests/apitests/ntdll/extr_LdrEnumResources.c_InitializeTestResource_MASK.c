
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {scalar_t__ StringBuffer; int * DataEntries; int * Lang4Entries; int Lang4Directory; int * Lang3Entries; int Lang3Directory; int * Lang2Entries; int Lang2Directory; int * Lang1Entries; int Lang1Directory; int * Name2Entries; int Name2Directory; int * Name1Entries; int Name1Directory; int * TypeEntries; int TypeDirectory; scalar_t__ StringIndex; } ;
typedef int PVOID ;
typedef TYPE_1__* PTEST_RESOURCES ;


 int FUNC_0 (int ,int *,scalar_t__,int) ;
 int FUNC_1 (TYPE_1__*,int *,int,int *) ;
 int FUNC_2 (TYPE_1__*,int *,char*,int *) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;

__attribute__((used)) static
VOID
FUNC_5(
    PVOID VAR_0,
    PTEST_RESOURCES VAR_1)
{

    FUNC_4(VAR_1->StringBuffer, 0, sizeof(VAR_1->StringBuffer));
    VAR_1->StringIndex = 0;

    FUNC_3(&VAR_1->TypeDirectory, 0, 2);
    FUNC_1(VAR_1, &VAR_1->TypeEntries[0], 1, &VAR_1->Name1Directory);
    FUNC_1(VAR_1, &VAR_1->TypeEntries[1], 2, &VAR_1->Name2Directory);

    FUNC_3(&VAR_1->Name1Directory, 1, 1);
    FUNC_2(VAR_1, &VAR_1->Name1Entries[0], L"TEST", &VAR_1->Lang1Directory);
    FUNC_1(VAR_1, &VAR_1->Name1Entries[1], 7, &VAR_1->Lang2Directory);

    FUNC_3(&VAR_1->Name2Directory, 2, 0);
    FUNC_2(VAR_1, &VAR_1->Name2Entries[0], L"LOL", &VAR_1->Lang3Directory);
    FUNC_2(VAR_1, &VAR_1->Name2Entries[1], L"xD", &VAR_1->Lang4Directory);

    FUNC_3(&VAR_1->Lang1Directory, 0, 2);
    FUNC_1(VAR_1, &VAR_1->Lang1Entries[0], 0x409, &VAR_1->DataEntries[0]);
    FUNC_1(VAR_1, &VAR_1->Lang1Entries[1], 0x407, &VAR_1->DataEntries[1]);

    FUNC_3(&VAR_1->Lang2Directory, 0, 2);
    FUNC_1(VAR_1, &VAR_1->Lang2Entries[0], 0x408, &VAR_1->DataEntries[2]);
    FUNC_1(VAR_1, &VAR_1->Lang2Entries[1], 0x406, &VAR_1->DataEntries[3]);

    FUNC_3(&VAR_1->Lang3Directory, 0, 2);
    FUNC_1(VAR_1, &VAR_1->Lang3Entries[0], 0x405, &VAR_1->DataEntries[4]);
    FUNC_1(VAR_1, &VAR_1->Lang3Entries[1], 0x403, &VAR_1->DataEntries[5]);

    FUNC_3(&VAR_1->Lang4Directory, 0, 2);
    FUNC_1(VAR_1, &VAR_1->Lang4Entries[0], 0x402, &VAR_1->DataEntries[6]);
    FUNC_1(VAR_1, &VAR_1->Lang4Entries[1], 0x404, &VAR_1->DataEntries[7]);

    FUNC_0(VAR_0, &VAR_1->DataEntries[0], VAR_1->StringBuffer + 0, 2);
    FUNC_0(VAR_0, &VAR_1->DataEntries[1], VAR_1->StringBuffer + 2, 4);
    FUNC_0(VAR_0, &VAR_1->DataEntries[2], VAR_1->StringBuffer + 4, 6);
    FUNC_0(VAR_0, &VAR_1->DataEntries[3], VAR_1->StringBuffer + 6, 8);
    FUNC_0(VAR_0, &VAR_1->DataEntries[4], VAR_1->StringBuffer + 8, 10);
    FUNC_0(VAR_0, &VAR_1->DataEntries[5], VAR_1->StringBuffer + 10, 12);
    FUNC_0(VAR_0, &VAR_1->DataEntries[6], VAR_1->StringBuffer + 12, 14);
    FUNC_0(VAR_0, &VAR_1->DataEntries[7], VAR_1->StringBuffer + 14, 16);

}
