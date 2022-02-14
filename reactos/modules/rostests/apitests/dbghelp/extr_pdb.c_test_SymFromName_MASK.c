
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Name; int Tag; int Address; int Flags; int ModBase; } ;
typedef int TCHAR ;
typedef int SYMBOL_INFO ;
typedef TYPE_1__* PSYMBOL_INFO ;
typedef int HANDLE ;
typedef scalar_t__ DWORD64 ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(HANDLE VAR_4, DWORD64 VAR_5)
{
    BOOL VAR_6;
    char VAR_7[sizeof(SYMBOL_INFO) + VAR_0 * sizeof(TCHAR)];
    PSYMBOL_INFO VAR_8 = (PSYMBOL_INFO)VAR_7;

    if (!FUNC_7(VAR_4, VAR_5))
    {
        FUNC_6("dbghelp.dll too old or cannot enumerate symbols!\n");
    }
    else
    {
        FUNC_0(VAR_7);
        VAR_6 = FUNC_1(VAR_4, "DllMain", VAR_8);
        FUNC_3(VAR_6, VAR_3);
        FUNC_5(VAR_8->ModBase, VAR_5);
        FUNC_2(VAR_8->Flags, 0);
        FUNC_5(VAR_8->Address, VAR_5 + 0x1010);
        FUNC_2(VAR_8->Tag, VAR_1);
        FUNC_4(VAR_8->Name, "DllMain");

        FUNC_0(VAR_7);
        VAR_6 = FUNC_1(VAR_4, "_DllMain@12", VAR_8);
        FUNC_3(VAR_6, VAR_3);
        FUNC_5(VAR_8->ModBase, VAR_5);
        FUNC_2(VAR_8->Flags, 0x400000);
        FUNC_5(VAR_8->Address, VAR_5 + 0x1010);
        FUNC_2(VAR_8->Tag, VAR_2);
        FUNC_4(VAR_8->Name, "_DllMain@12");

        FUNC_0(VAR_7);
        VAR_6 = FUNC_1(VAR_4, "FfsChkdsk", VAR_8);
        FUNC_3(VAR_6, VAR_3);
        FUNC_5(VAR_8->ModBase, VAR_5);
        FUNC_2(VAR_8->Flags, 0);
        FUNC_5(VAR_8->Address, VAR_5 + 0x1040);
        FUNC_2(VAR_8->Tag, VAR_1);
        FUNC_4(VAR_8->Name, "FfsChkdsk");

        FUNC_0(VAR_7);
        VAR_6 = FUNC_1(VAR_4, "_FfsChkdsk@24", VAR_8);
        FUNC_3(VAR_6, VAR_3);
        FUNC_5(VAR_8->ModBase, VAR_5);
        FUNC_2(VAR_8->Flags, 0x400000);
        FUNC_5(VAR_8->Address, VAR_5 + 0x1040);
        FUNC_2(VAR_8->Tag, VAR_2);
        FUNC_4(VAR_8->Name, "_FfsChkdsk@24");

        FUNC_0(VAR_7);
        VAR_6 = FUNC_1(VAR_4, "FfsFormat", VAR_8);
        FUNC_3(VAR_6, VAR_3);
        FUNC_5(VAR_8->ModBase, VAR_5);
        FUNC_2(VAR_8->Flags, 0);
        FUNC_5(VAR_8->Address, VAR_5 + 0x1070);
        FUNC_2(VAR_8->Tag, VAR_1);
        FUNC_4(VAR_8->Name, "FfsFormat");

        FUNC_0(VAR_7);
        VAR_6 = FUNC_1(VAR_4, "_FfsFormat@24", VAR_8);
        FUNC_3(VAR_6, VAR_3);
        FUNC_5(VAR_8->ModBase, VAR_5);
        FUNC_2(VAR_8->Flags, 0x400000);
        FUNC_5(VAR_8->Address, VAR_5 + 0x1070);
        FUNC_2(VAR_8->Tag, VAR_2);
        FUNC_4(VAR_8->Name, "_FfsFormat@24");
    }
}
