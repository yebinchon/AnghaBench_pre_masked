
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int IUri ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int **) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *,int*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static HRESULT FUNC_9(LPCWSTR VAR_5, DWORD *VAR_6, LPWSTR *VAR_7)
{
    IUri *VAR_8;
    LPWSTR VAR_9;
    HRESULT VAR_10;

    *VAR_6 = VAR_3;

    VAR_10 = FUNC_0(VAR_5, &VAR_9, VAR_1, 0);
    if(VAR_10 != VAR_2) {
        DWORD VAR_11 = FUNC_8(VAR_5)*sizeof(WCHAR);

        VAR_9 = FUNC_1(VAR_11);
        if(!VAR_9)
            return VAR_0;

        FUNC_7(VAR_9, VAR_5, VAR_11);
    }

    VAR_10 = FUNC_3(VAR_9, VAR_4, 0, &VAR_8);
    if(FUNC_4(VAR_10)) {
        FUNC_2(VAR_9);
        return VAR_10;
    }

    VAR_10 = FUNC_6(VAR_8, VAR_6);
    FUNC_5(VAR_8);

    if(FUNC_4(VAR_10) || !VAR_7)
        FUNC_2(VAR_9);
    else
        *VAR_7 = VAR_9;

    return VAR_10;
}
