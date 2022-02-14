
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szTitle ;
typedef int szText ;
typedef int WCHAR ;
typedef int (* RUNFILEDLG ) (int ,int ,int *,int *,int *,int ) ;
typedef int LPCSTR ;
typedef int HMODULE ;
typedef int HICON ;
typedef scalar_t__ FARPROC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_7(void)
{
    HMODULE VAR_6;
    RUNFILEDLG VAR_7;
    WCHAR VAR_8[40];
    WCHAR VAR_9[256];


    FUNC_5(VAR_4, VAR_1, VAR_8, sizeof(VAR_8) / sizeof(VAR_8[0]));
    FUNC_5(VAR_4, VAR_2, VAR_9, sizeof(VAR_9) / sizeof(VAR_9[0]));

    VAR_6 = FUNC_4(L"SHELL32.DLL");
    VAR_7 = (RUNFILEDLG)(FARPROC)FUNC_2(VAR_6, (LPCSTR)61);


    if (VAR_7)
    {
        HICON VAR_10 = FUNC_3(VAR_4, FUNC_6(VAR_0));



        VAR_7(VAR_5, VAR_10, ((void*)0), VAR_8, VAR_9, VAR_3);

        FUNC_0(VAR_10);
    }

    FUNC_1(VAR_6);
}
