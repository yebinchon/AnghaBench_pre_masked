
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDC ;
typedef int * HANDLE ;


 int * FUNC_0 (char*,int *,int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *,int *,int,char*) ;
 int FUNC_5 (int *,int *,int,char*) ;

HANDLE
FUNC_6()
{
    HANDLE VAR_0=0;
    int VAR_1=0;
    HDC VAR_2=FUNC_0(L"Display",((void*)0),((void*)0),((void*)0));

    if (VAR_2 == ((void*)0))
    {
        FUNC_2("No hdc was created with Display, trying now with DISPLAY\n");
        VAR_2=FUNC_0(L"DISPLAY",((void*)0),((void*)0),((void*)0));
        if (VAR_2 == ((void*)0))
        {
            FUNC_2("No hdc was created with DISPLAY, trying now with NULL\n");
            VAR_2=FUNC_0(((void*)0),((void*)0),((void*)0),((void*)0));
        }
    }

    if (VAR_2 == ((void*)0))
    {
        FUNC_2("No hdc was created at all perpare all test will fail\n");
        return ((void*)0);
    }

    FUNC_2("Start testing of NtGdiDdCreateDirectDrawObject\n");

    VAR_0 = FUNC_1(((void*)0));
    FUNC_5(VAR_0,((void*)0),VAR_1,"NtGdiDdCreateDirectDrawObject(NULL);\0");

    VAR_0 = FUNC_1(VAR_2);
    FUNC_4(VAR_0,((void*)0),VAR_1,"NtGdiDdCreateDirectDrawObject(hdc);\0");

    FUNC_3(VAR_1, "NtGdiDdCreateDirectDrawObject\0");

    return VAR_0;
}
