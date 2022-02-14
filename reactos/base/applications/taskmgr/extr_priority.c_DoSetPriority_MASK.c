
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ,int *,int *,int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int VAR_9 ;
 int FUNC_6 (int ,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_7(DWORD VAR_12)
{
    DWORD VAR_13;
    HANDLE VAR_14;
    WCHAR VAR_15[260];
    WCHAR VAR_16[256];

    VAR_13 = FUNC_2();

    if (VAR_13 == 0)
        return;

    FUNC_3(VAR_10, VAR_1, VAR_16, 256);
    FUNC_3(VAR_10, VAR_3, VAR_15, 260);
    if (FUNC_4(VAR_11, VAR_15, VAR_16, VAR_8|VAR_6) != VAR_4)
        return;

    VAR_14 = FUNC_5(VAR_9, VAR_0, VAR_13);

    if (!VAR_14)
    {
        FUNC_1(VAR_15, 260);
        FUNC_3(VAR_10, VAR_2, VAR_16, 256);
        FUNC_4(VAR_11, VAR_15, VAR_16, VAR_7|VAR_5);
        return;
    }

    if (!FUNC_6(VAR_14, VAR_12))
    {
        FUNC_1(VAR_15, 260);
        FUNC_3(VAR_10, VAR_2, VAR_16, 256);
        FUNC_4(VAR_11, VAR_15, VAR_16, VAR_7|VAR_5);
    }

    FUNC_0(VAR_14);
}
