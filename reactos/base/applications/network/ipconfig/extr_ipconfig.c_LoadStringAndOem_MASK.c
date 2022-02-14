
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef int HINSTANCE ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int VAR_0 ;

int FUNC_4(HINSTANCE VAR_1,
                     UINT VAR_2,
                     LPTSTR VAR_3,
                     int VAR_4)
{
    TCHAR *VAR_5;
    int VAR_6;

    VAR_5 = (LPTSTR)FUNC_1(VAR_0, 0, VAR_4);
    if (VAR_5 == ((void*)0))
    {
        return 0;
    }

    VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_5, VAR_4);
    FUNC_0(VAR_5, VAR_3);
    FUNC_2(VAR_0, 0, VAR_5);
    return VAR_6;
}
