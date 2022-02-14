
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *,scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,scalar_t__,int ,int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static HRESULT FUNC_7(HKEY VAR_5, LPCWSTR VAR_6, LPCWSTR VAR_7, DWORD VAR_8, DWORD *VAR_9)
{
    WCHAR *VAR_10;
    DWORD VAR_11, VAR_12, VAR_13;
    DWORD VAR_14;
    HRESULT VAR_15 = VAR_3;

    VAR_14 = FUNC_2(VAR_5, ((void*)0), ((void*)0), ((void*)0), &VAR_11, &VAR_12,
                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if(VAR_14 != VAR_0) {
        FUNC_3("Failed to retrieve information about key\n");
        return VAR_2;
    }

    if(!VAR_11)
        return VAR_3;

    VAR_10 = FUNC_4((VAR_12+1)*sizeof(WCHAR));
    if(!VAR_10)
        return VAR_1;

    for(VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
        DWORD VAR_16 = VAR_12+1;

        VAR_14 = FUNC_1(VAR_5, VAR_13, VAR_10, &VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if(VAR_14 != VAR_0) {
            FUNC_5(VAR_10);
            return VAR_2;
        }

        VAR_15 = FUNC_6(VAR_5, VAR_10, VAR_16, VAR_6, VAR_7, VAR_8, VAR_9);
        if(FUNC_0(VAR_15) || VAR_15 == VAR_4)
            break;
    }

    FUNC_5(VAR_10);
    return VAR_15;
}
