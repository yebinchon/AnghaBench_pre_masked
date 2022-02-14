
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int * HKEY ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int **) ;
 scalar_t__ FUNC_3 (int *,int ,long,int ,int const*,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_6(HKEY VAR_3, LPCWSTR VAR_4,
                                  LPCWSTR VAR_5,
                                  LPCWSTR VAR_6,
                                  LPCWSTR VAR_7,
                                  LPCWSTR VAR_8)
{
    HKEY VAR_9, VAR_10 = ((void*)0);
    LONG VAR_11 = FUNC_2(VAR_3, VAR_4, &VAR_9);
    if (VAR_0 != VAR_11)
        return FUNC_0(VAR_11);


    VAR_11 = FUNC_4(VAR_9, ((void*)0), VAR_1, VAR_5,
                       sizeof(WCHAR) * (FUNC_5(VAR_5) + 1));
    if (VAR_0 != VAR_11)
        goto err_out;



    VAR_11 = FUNC_2(VAR_9, VAR_7, &VAR_10);
    if (VAR_0 != VAR_11)
        goto err_out;


    VAR_11 = FUNC_4(VAR_10, ((void*)0), VAR_1, VAR_6,
                       sizeof(WCHAR) * (FUNC_5(VAR_6) + 1));
    if (VAR_0 != VAR_11)
        goto err_out;


    VAR_11 = FUNC_3(VAR_10, VAR_2, 0L, VAR_1,
                         (const BYTE*)VAR_8,
                         sizeof(WCHAR) * (FUNC_5(VAR_8) + 1));
err_out:
    if (VAR_10)
        FUNC_1(VAR_10);
    FUNC_1(VAR_9);
    return FUNC_0(VAR_11);
}
