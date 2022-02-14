
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t UINT ;
typedef int LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int GUID ;
typedef int DWORD ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,size_t,int *,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *,int *,size_t*,int *,int *,int *,int *,int *,int *,int *) ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_7(HKEY VAR_7, LPCWSTR VAR_8,
    UINT VAR_9, GUID *VAR_10, UINT *VAR_11)
{
    LONG VAR_12;
    HKEY VAR_13;
    UINT VAR_14;
    WCHAR VAR_15[39];
    DWORD VAR_16;
    HRESULT VAR_17=VAR_6;

    if (!VAR_11)
        return VAR_4;

    VAR_12 = FUNC_5(VAR_7, VAR_8, 0, VAR_5, &VAR_13);
    if (VAR_12 == VAR_0)
    {
        *VAR_11 = 0;
        return VAR_6;
    }
    else if (VAR_12 != VAR_2) return FUNC_2(VAR_12);

    if (VAR_10)
    {
        VAR_14 = 0;
        VAR_16 = 39;
        while (VAR_14 < VAR_9)
        {
            VAR_12 = FUNC_4(VAR_13, VAR_14, VAR_15,
                &VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

            if (VAR_12 != VAR_2)
            {
                VAR_17 = FUNC_2(VAR_12);
                break;
            }

            if (VAR_16 != 38)
            {
                VAR_17 = VAR_3;
                break;
            }

            VAR_17 = FUNC_0(VAR_15, &VAR_10[VAR_14]);
            if (FUNC_1(VAR_17))
                break;

            VAR_14++;
            VAR_16 = 39;
        }

        if (VAR_12 == VAR_1)
            VAR_17 = VAR_6;

        *VAR_11 = VAR_14;
    }
    else
    {
        VAR_12 = FUNC_6(VAR_13, ((void*)0), ((void*)0), ((void*)0), VAR_11, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_12 != VAR_2)
            VAR_17 = FUNC_2(VAR_12);
    }

    FUNC_3(VAR_13);

    return VAR_17;
}
