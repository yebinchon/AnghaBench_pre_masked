
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,scalar_t__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*,int ) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_4(int VAR_14, LPCWSTR VAR_15, DWORD VAR_16[], DWORD VAR_17[])
{
    HKEY VAR_18;
    DWORD VAR_19 = 0;
    BOOL VAR_20 = VAR_5;
    VAR_16[VAR_14] = 0;
    VAR_17[VAR_14] = 0;

    if(FUNC_3(&VAR_18, &VAR_19, VAR_15) != VAR_4)
        return;

    if(VAR_19 == VAR_8)
    {
        DWORD VAR_21 = sizeof(DWORD);

        if(FUNC_1(VAR_18, VAR_12, 0, ((void*)0), (LPBYTE)&VAR_16[VAR_14],
           &VAR_21) == VAR_4)
            VAR_20 = VAR_11;
    }

    if(!VAR_20)
        VAR_16[VAR_14] = (1 << VAR_3) | (1 << VAR_0) | (1 << VAR_1) | (1 << VAR_2);

    VAR_20 = VAR_5;
    if(VAR_19 == VAR_8)
    {
        DWORD VAR_22 = sizeof(DWORD);
        if(FUNC_1(VAR_18, VAR_13, 0, ((void*)0), (LPBYTE)&VAR_17[VAR_14],
           &VAR_22) == VAR_4)
            VAR_20 = VAR_11;
    }

    if (!VAR_20)
    {
        if(VAR_14 == FUNC_2(VAR_9))
            VAR_17[VAR_14] = VAR_7;
        else if(VAR_14 == FUNC_2(VAR_10))
            VAR_17[VAR_14] = VAR_6;
    }

    FUNC_0(VAR_18);
}
