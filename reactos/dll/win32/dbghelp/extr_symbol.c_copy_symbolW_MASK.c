
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Name; int MaxNameLen; int NameLen; int Tag; int Scope; int Register; int Address; int Value; int Flags; int ModBase; int Size; int Index; int * Reserved; int TypeIndex; int SizeOfStruct; } ;
struct TYPE_5__ {int MaxNameLen; int Name; int NameLen; int Tag; int Scope; int Register; int Address; int Value; int Flags; int ModBase; int Size; int Index; int * Reserved; int TypeIndex; int SizeOfStruct; } ;
typedef TYPE_1__ SYMBOL_INFOW ;
typedef TYPE_2__ SYMBOL_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ) ;

void FUNC_1(SYMBOL_INFOW* VAR_1, const SYMBOL_INFO* VAR_2)
{
    VAR_1->SizeOfStruct = VAR_2->SizeOfStruct;
    VAR_1->TypeIndex = VAR_2->TypeIndex;
    VAR_1->Reserved[0] = VAR_2->Reserved[0];
    VAR_1->Reserved[1] = VAR_2->Reserved[1];
    VAR_1->Index = VAR_2->Index;
    VAR_1->Size = VAR_2->Size;
    VAR_1->ModBase = VAR_2->ModBase;
    VAR_1->Flags = VAR_2->Flags;
    VAR_1->Value = VAR_2->Value;
    VAR_1->Address = VAR_2->Address;
    VAR_1->Register = VAR_2->Register;
    VAR_1->Scope = VAR_2->Scope;
    VAR_1->Tag = VAR_2->Tag;
    VAR_1->NameLen = VAR_2->NameLen;
    VAR_1->MaxNameLen = VAR_2->MaxNameLen;
    FUNC_0(VAR_0, 0, VAR_2->Name, -1, VAR_1->Name, VAR_1->MaxNameLen);
}
