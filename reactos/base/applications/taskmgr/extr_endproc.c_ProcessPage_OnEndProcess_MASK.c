
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int ,int *,int *,int) ;
 scalar_t__ FUNC_6 (int,int ,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (scalar_t__,int) ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_8(void)
{
    DWORD VAR_15;
    HANDLE VAR_16;
    WCHAR VAR_17[256];
    WCHAR VAR_18[260];

    VAR_15 = FUNC_2();

    if (VAR_15 == 0)
        return;

    VAR_16 = FUNC_6(VAR_12 | VAR_11, VAR_0, VAR_15);


    if (VAR_16 && FUNC_3(VAR_16))
    {
        FUNC_4(VAR_13, VAR_3, VAR_17, 256);
        FUNC_4(VAR_13, VAR_1, VAR_18, 256);
        FUNC_5(VAR_14, VAR_18, VAR_17, VAR_8|VAR_7|VAR_9);
        FUNC_0(VAR_16);
        return;
    }


    FUNC_4(VAR_13, VAR_4, VAR_18, 256);
    FUNC_4(VAR_13, VAR_2, VAR_17, 256);
    if (FUNC_5(VAR_14, VAR_18, VAR_17, VAR_10|VAR_7|VAR_9) != VAR_5)
    {
        if (VAR_16) FUNC_0(VAR_16);
        return;
    }


    if (!VAR_16)
    {
        FUNC_1(VAR_18, 260);
        FUNC_4(VAR_13, VAR_3, VAR_17, 256);
        FUNC_5(VAR_14, VAR_18, VAR_17, VAR_8|VAR_6|VAR_9);
        return;
    }


    if (!FUNC_7(VAR_16, 1))
    {
        FUNC_1(VAR_18, 260);
        FUNC_4(VAR_13, VAR_3, VAR_17, 256);
        FUNC_5(VAR_14, VAR_18, VAR_17, VAR_8|VAR_6|VAR_9);
    }

    FUNC_0(VAR_16);
}
