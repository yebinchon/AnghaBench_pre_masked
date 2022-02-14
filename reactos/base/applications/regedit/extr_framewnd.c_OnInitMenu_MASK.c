
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int abValueData ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HWND ;
typedef int HMENU ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int *,scalar_t__*,int *,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,int ,int **) ;
 scalar_t__ FUNC_8 (int ,int,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_9(HWND VAR_10)
{
    LONG VAR_11;
    HKEY VAR_12 = ((void*)0);
    DWORD VAR_13, VAR_14, VAR_15, VAR_16;
    WCHAR VAR_17[256];
    BYTE VAR_18[256];
    static int VAR_19 = -1;
    HMENU VAR_20;
    BOOL VAR_21 = VAR_1;


    VAR_20 = FUNC_4(FUNC_2(VAR_10), VAR_2);
    if (!VAR_20)
        goto done;
    if (VAR_19 < 0)
    {
        VAR_19 = FUNC_3(VAR_20);
    }
    else
    {
        while(FUNC_8(VAR_20, VAR_19, VAR_5)) ;
    }

    VAR_11 = FUNC_7(VAR_3, VAR_9, &VAR_12);
    if (VAR_11 != VAR_0)
        goto done;

    VAR_13 = 0;
    do
    {
        VAR_14 = FUNC_1(VAR_17);
        VAR_15 = sizeof(VAR_18);
        VAR_11 = FUNC_6(VAR_12, VAR_13, VAR_17, &VAR_14, ((void*)0), &VAR_16, VAR_18, &VAR_15);
        if ((VAR_11 == VAR_0) && (VAR_16 == VAR_7))
        {
            if (!VAR_21)
            {
                FUNC_0(VAR_20, VAR_6, 0, ((void*)0));
                VAR_21 = VAR_8;
            }
            FUNC_0(VAR_20, 0, VAR_4 + FUNC_3(VAR_20), VAR_17);
        }
        VAR_13++;
    }
    while(VAR_11 == VAR_0);

done:
    if (VAR_12)
        FUNC_5(VAR_12);
}
