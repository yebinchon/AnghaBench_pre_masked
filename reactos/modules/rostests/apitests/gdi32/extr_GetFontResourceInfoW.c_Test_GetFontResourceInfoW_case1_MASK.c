
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {char* FontInfo; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ GFRI_ENTRY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int ,int*,int*,int) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*,char*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*,int,char) ;

__attribute__((used)) static void
FUNC_8(LPCWSTR VAR_0, const GFRI_ENTRY *VAR_1)
{
    BOOL VAR_2;
    DWORD VAR_3, VAR_4 = 1;
    static WCHAR VAR_5[1024 / sizeof(WCHAR)];


    VAR_3 = 0;
    VAR_2 = FUNC_1(VAR_0, &VAR_3, ((void*)0), VAR_4);
    FUNC_6(VAR_2, 1);

    FUNC_5(VAR_3 != 0, "Size expected non-zero but zero\n");


    VAR_3 = 1024;
    VAR_2 = FUNC_1(VAR_0, &VAR_3, ((void*)0), VAR_4);
    FUNC_6(VAR_2, 0);
    FUNC_6(VAR_3, 1024);


    VAR_3 = 0;
    FUNC_0(VAR_5, L"ABC\0", sizeof(L"ABC\0"));
    VAR_2 = FUNC_1(VAR_0, &VAR_3, VAR_5, VAR_4);
    FUNC_6(VAR_2, 1);

    FUNC_5(VAR_3 != 0, "Size expected non-zero but zero\n");
    FUNC_5(FUNC_3(VAR_5, L"ABC") == 0, "data mismatched: \"%S\"\n", VAR_5);


    VAR_3 = 1024;
    FUNC_0(VAR_5, L"ABC\0", sizeof(L"ABC\0"));
    VAR_2 = FUNC_1(VAR_0, &VAR_3, VAR_5, VAR_4);
    FUNC_6(VAR_2, 1);

    FUNC_5(VAR_3 != 0, "Size expected non-zero but zero\n");

    FUNC_2(VAR_5);
    FUNC_5(FUNC_3(VAR_5, VAR_1->FontInfo) == 0, "data mismatched: \"%S\" and \"%S\"\n",
       VAR_5, VAR_1->FontInfo);
}
