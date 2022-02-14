
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ModBase; int Address; int Name; int Tag; int Flags; } ;
typedef int TCHAR ;
typedef int SYMBOL_INFO ;
typedef TYPE_1__* PSYMBOL_INFO ;
typedef int HANDLE ;
typedef int DWORD64 ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int*,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(HANDLE VAR_6, DWORD64 VAR_7)
{
    BOOL VAR_8;
    char VAR_9[sizeof(SYMBOL_INFO) + VAR_2 * sizeof(TCHAR)];
    PSYMBOL_INFO VAR_10 = (PSYMBOL_INFO)VAR_9;

    DWORD64 VAR_11;
    DWORD VAR_12;


    VAR_11 = 0;
    FUNC_1(VAR_9);
    VAR_8 = FUNC_2(VAR_6, VAR_7 -1, &VAR_11, VAR_10);
    VAR_12 = FUNC_0();
    FUNC_4(VAR_8, VAR_1);
    FUNC_3(VAR_12, VAR_0);


    VAR_11 = 0;
    FUNC_1(VAR_9);
    VAR_8 = FUNC_2(VAR_6, VAR_7, &VAR_11, VAR_10);
    FUNC_4(VAR_8, VAR_5);
    FUNC_6(VAR_11, 0xffffffffffffffff);
    FUNC_6(VAR_10->ModBase, VAR_7);
    FUNC_3(VAR_10->Flags, 0);
    FUNC_6(VAR_10->Address, VAR_7 + 0x1010);
    FUNC_3(VAR_10->Tag, VAR_3);
    FUNC_5(VAR_10->Name, "DllMain");


    VAR_11 = 0;
    FUNC_1(VAR_9);
    VAR_8 = FUNC_2(VAR_6, VAR_7 + 0x1010, &VAR_11, VAR_10);
    FUNC_4(VAR_8, VAR_5);
    FUNC_6(VAR_11, 0);
    FUNC_6(VAR_10->ModBase, VAR_7);
    FUNC_3(VAR_10->Flags, 0);
    FUNC_6(VAR_10->Address, VAR_7 + 0x1010);
    FUNC_3(VAR_10->Tag, VAR_3);
    FUNC_5(VAR_10->Name, "DllMain");


    VAR_11 = 0;
    FUNC_1(VAR_9);
    VAR_8 = FUNC_2(VAR_6, VAR_7 + 0x102D, &VAR_11, VAR_10);
    FUNC_4(VAR_8, VAR_5);
    FUNC_6(VAR_11, 0x1d);
    FUNC_6(VAR_10->ModBase, VAR_7);
    FUNC_3(VAR_10->Flags, 0);
    FUNC_6(VAR_10->Address, VAR_7 + 0x1010);
    FUNC_3(VAR_10->Tag, VAR_3);
    FUNC_5(VAR_10->Name, "DllMain");


    VAR_11 = 0;
    FUNC_1(VAR_9);
    VAR_8 = FUNC_2(VAR_6, VAR_7 + 0x102E, &VAR_11, VAR_10);
    FUNC_4(VAR_8, VAR_5);
    FUNC_6(VAR_11, 0x1e);
    FUNC_6(VAR_10->ModBase, VAR_7);
    FUNC_3(VAR_10->Flags, 0);
    FUNC_6(VAR_10->Address, VAR_7 + 0x1010);
    FUNC_3(VAR_10->Tag, VAR_3);
    FUNC_5(VAR_10->Name, "DllMain");


    VAR_11 = 0;
    FUNC_1(VAR_9);
    VAR_8 = FUNC_2(VAR_6, VAR_7 + 0x103f, &VAR_11, VAR_10);
    FUNC_4(VAR_8, VAR_5);
    FUNC_6(VAR_11, 0x2f);
    FUNC_6(VAR_10->ModBase, VAR_7);
    FUNC_3(VAR_10->Flags, 0);
    FUNC_6(VAR_10->Address, VAR_7 + 0x1010);
    FUNC_3(VAR_10->Tag, VAR_3);
    FUNC_5(VAR_10->Name, "DllMain");


    VAR_11 = 0;
    FUNC_1(VAR_9);
    VAR_8 = FUNC_2(VAR_6, VAR_7 + 0x1040, &VAR_11, VAR_10);
    FUNC_4(VAR_8, VAR_5);
    FUNC_6(VAR_11, 0);
    FUNC_6(VAR_10->ModBase, VAR_7);
    FUNC_3(VAR_10->Flags, 0);
    FUNC_6(VAR_10->Address, VAR_7 + 0x1040);
    FUNC_3(VAR_10->Tag, VAR_3);
    FUNC_5(VAR_10->Name, "FfsChkdsk");

    if (!FUNC_8(VAR_6, VAR_7))
    {
        FUNC_7("dbghelp.dll too old or cannot read this symbol!\n");
    }
    else
    {

        VAR_11 = 0;
        FUNC_1(VAR_9);
        VAR_8 = FUNC_2(VAR_6, VAR_7 + 0x2000, &VAR_11, VAR_10);
        FUNC_4(VAR_8, VAR_5);
        FUNC_6(VAR_11, 0);
        FUNC_6(VAR_10->ModBase, VAR_7);
        FUNC_3(VAR_10->Flags, 0);
        FUNC_6(VAR_10->Address, VAR_7 + 0x2000);
        FUNC_3(VAR_10->Tag, VAR_4);
        FUNC_5(VAR_10->Name, "__imp__DbgPrint");
    }
}
