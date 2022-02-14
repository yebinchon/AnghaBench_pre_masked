
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int SizeOfStruct; scalar_t__ ModBase; scalar_t__ Address; scalar_t__ MaxNameLen; } ;
typedef int SYMBOL_INFO ;
typedef int PVOID ;
typedef TYPE_1__* PSYMBOL_INFO ;
typedef int PIMAGE_NT_HEADERS ;
typedef char* PCSTR ;
typedef int PBYTE ;
typedef int HANDLE ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,char*,TYPE_1__*) ;
 int FUNC_4 (char*,char*,...) ;

PVOID
FUNC_5(HANDLE VAR_1, PSYMBOL_INFO VAR_2, PBYTE VAR_3, PCSTR VAR_4)
{
 PIMAGE_NT_HEADERS VAR_5;
 PVOID VAR_6;

 VAR_2->SizeOfStruct = sizeof(SYMBOL_INFO);
 VAR_2->MaxNameLen = VAR_0-1;

 if (!FUNC_3(VAR_1, VAR_4, VAR_2))
 {
  FUNC_4("SymGetSymFromName64() failed: %ld\n", FUNC_0());
  return 0;
 }


 FUNC_4("looking up adress for %s: 0x%llx\n", VAR_4, VAR_2->Address);




 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_2->Address - VAR_2->ModBase, ((void*)0));

 return VAR_6;
}
