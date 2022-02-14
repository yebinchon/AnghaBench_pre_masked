
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ MSIINSTALLCONTEXT ;
typedef int LPCWSTR ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int VAR_9 ;

__attribute__((used)) static UINT FUNC_6(LPCWSTR VAR_10, HKEY* VAR_11, DWORD VAR_12,
                          MSIINSTALLCONTEXT VAR_13, BOOL VAR_14)
{
    HKEY VAR_15 = 0;
    UINT VAR_16 = VAR_1;

    if (VAR_13 == VAR_8)
    {
        if (VAR_12 & VAR_5)
            VAR_16 = FUNC_2(VAR_10, &VAR_15, VAR_14);
        else
            VAR_16 = FUNC_1(VAR_10, ((void*)0), VAR_13,
                                       &VAR_15, VAR_14);
    }
    else if (VAR_13 == VAR_7)
    {
        if (VAR_12 & VAR_5)
            VAR_16 = FUNC_2(VAR_10, &VAR_15, VAR_14);
        else
            VAR_16 = FUNC_1(VAR_10, ((void*)0), VAR_13,
                                       &VAR_15, VAR_14);
    }
    else if (VAR_13 == VAR_6)
    {
        if (VAR_12 & VAR_5)
            VAR_16 = FUNC_0(VAR_10, &VAR_15, VAR_14);
        else
            VAR_16 = FUNC_1(VAR_10, ((void*)0), VAR_13,
                                       &VAR_15, VAR_14);
    }

    if (VAR_16 != VAR_2)
    {
        if (VAR_12 & VAR_5)
            return VAR_3;
        else
            return VAR_4;
    }

    if (VAR_14)
        VAR_16 = FUNC_4(VAR_15, VAR_9, VAR_11);
    else
    {
        VAR_16 = FUNC_5(VAR_15,VAR_9, VAR_11);
        if (VAR_16 != VAR_2)
            VAR_16 = VAR_0;
    }
    FUNC_3(VAR_15);

    return VAR_16;
}
