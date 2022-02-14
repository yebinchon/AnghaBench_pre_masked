
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int WCHAR ;
typedef int UINT ;
typedef scalar_t__ PVOID ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef int LPARAM ;
typedef int HINSTANCE ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (int ,int,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__,int) ;

void
FUNC_7(HINSTANCE VAR_3,
                            UINT VAR_4,
                            BOOL VAR_5,
                            PVOID VAR_6,
                            UINT VAR_7)
{
    FUNC_6(VAR_6, VAR_7 * (VAR_5 ? sizeof(WCHAR) : sizeof(CHAR)));


    if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7) != 0)
        return;


    if (VAR_4 == VAR_0)
    {
        if (FUNC_5(VAR_5, VAR_2,
                                      (WPARAM)VAR_7, (LPARAM)VAR_6) != 0)
        {
            if (VAR_5)
                FUNC_4(VAR_3, VAR_1, (LPWSTR)VAR_6, VAR_7);
            else
                FUNC_3(VAR_3, VAR_1, (LPSTR)VAR_6, VAR_7);
        }
        return;
    }


    if (VAR_5)
    {
        if (!FUNC_1(VAR_4, (LPWSTR)VAR_6, VAR_7))
            FUNC_4(VAR_3, VAR_1, (LPWSTR)VAR_6, VAR_7);
    }
    else
    {
        if (!FUNC_0(VAR_4, (LPSTR)VAR_6, VAR_7))
            FUNC_3(VAR_3, VAR_1, (LPSTR)VAR_6, VAR_7);
    }
}
