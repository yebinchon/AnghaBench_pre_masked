
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int WCHAR ;
typedef scalar_t__ SIZE_T ;
typedef scalar_t__ LPBYTE ;
typedef scalar_t__ HGLOBAL ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,scalar_t__,int,scalar_t__*,int *) ;
 int VAR_7 ;
 int FUNC_17 (int ,scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_18 (int *,char*,int) ;

int FUNC_19(int VAR_9, wchar_t** VAR_10)
{
    HANDLE VAR_11;
    DWORD VAR_12;
    BOOL VAR_13;
    HGLOBAL VAR_14;
    HGLOBAL VAR_15;
    LPBYTE VAR_16;
    SIZE_T VAR_17 = 0;


    VAR_11 = FUNC_6(VAR_7);
    FUNC_1();


    if (VAR_9 > 1 && FUNC_18(VAR_10[1], L"/?", 2) == 0)
    {
        FUNC_2(VAR_8, VAR_5);
        return 0;
    }

    if (FUNC_4(VAR_11) == VAR_2)
    {
        FUNC_2(VAR_8, VAR_6);
        return 0;
    }


    VAR_14 = FUNC_7(VAR_3 | VAR_4, 4096);
    if (!VAR_14)
        goto Failure;





    do
    {
        VAR_16 = FUNC_9(VAR_14);
        if (!VAR_16)
            goto Failure;

        VAR_13 = FUNC_16(VAR_11, VAR_16 + VAR_17, 4096, &VAR_12, ((void*)0));
        VAR_17 += VAR_12;
        FUNC_12(VAR_14);

        VAR_15 = FUNC_10(VAR_14, FUNC_11(VAR_14) + 4096, VAR_4);
        if (!VAR_15)
            goto Failure;

        VAR_14 = VAR_15;
    }
    while (VAR_13 && VAR_12 > 0);







    VAR_15 = FUNC_10(VAR_14, VAR_17 + sizeof(WCHAR), VAR_4);
    if (VAR_15)
        VAR_14 = VAR_15;


    if (!FUNC_14(((void*)0)))
        goto Failure;



    FUNC_3();

    if (FUNC_13(VAR_14))
    {
        FUNC_17(VAR_1, VAR_14);
    }
    else
    {


        FUNC_17(VAR_0, VAR_14);
    }

    FUNC_0();
    return 0;

Failure:
    if (VAR_14) FUNC_8(VAR_14);
    FUNC_15(FUNC_5());
    return -1;
}
