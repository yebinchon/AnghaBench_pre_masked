
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * PWSTR ;
typedef char* INT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int *,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,char*,char*) ;
 int * FUNC_10 (int *,int) ;

int FUNC_11(INT VAR_7)
{
    WCHAR VAR_8[250];
    WCHAR VAR_9[VAR_4];

    FUNC_9(VAR_9, L"LPT%d", VAR_7);

    FUNC_2(VAR_6, L"\n");
    FUNC_7(VAR_6, VAR_0, VAR_9);
    FUNC_2(VAR_6, L"\n");

    if (FUNC_6(VAR_9, VAR_8, FUNC_0(VAR_8)))
    {
        PWSTR VAR_10 = FUNC_10(VAR_8, L'\\');
        if (VAR_10 != ((void*)0))
        {
            if (FUNC_8(VAR_9, ++VAR_10) == 0)
                FUNC_4(VAR_6, VAR_2);
            else
                FUNC_3(VAR_6, VAR_3, VAR_10);

            return 0;
        }
        else
        {
            FUNC_3(VAR_5, VAR_1, VAR_9, VAR_8);
        }
    }
    else
    {
        FUNC_1(VAR_5, L"ERROR: QueryDosDeviceW(%s) failed: 0x%lx\n", VAR_9, FUNC_5());
    }
    FUNC_2(VAR_6, L"\n");

    return 1;
}
