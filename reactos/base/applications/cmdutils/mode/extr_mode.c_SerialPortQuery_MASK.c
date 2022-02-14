
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPDCB ;
typedef int LPCOMMTIMEOUTS ;
typedef char* INT ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int *,...) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int VAR_13 ;
 int FUNC_9 (int *,char*,char*) ;

__attribute__((used)) static BOOL
FUNC_10(INT VAR_14, LPDCB VAR_15, LPCOMMTIMEOUTS VAR_16, BOOL VAR_17)
{
    BOOL VAR_18;
    HANDLE VAR_19;
    WCHAR VAR_20[VAR_11];

    FUNC_0(VAR_15);
    FUNC_0(VAR_16);

    FUNC_9(VAR_20, L"COM%d", VAR_14);
    VAR_19 = FUNC_3(VAR_20,
                        VAR_17 ? VAR_3 : VAR_2,
                        0,
                        ((void*)0),
                        VAR_12,
                        0,
                        ((void*)0));

    if (VAR_19 == VAR_10)
    {
        DWORD VAR_21 = FUNC_6();
        if (VAR_21 == VAR_0)
            FUNC_2(VAR_13, VAR_4, VAR_20);
        else
            FUNC_2(VAR_13, VAR_5, VAR_20, VAR_21);
        return VAR_1;
    }

    VAR_18 = VAR_17 ? FUNC_7(VAR_19, VAR_15)
                     : FUNC_4(VAR_19, VAR_15);
    if (!VAR_18)
    {
        FUNC_2(VAR_13,
                     VAR_17 ? VAR_7 : VAR_6,
                     VAR_20);
        goto Quit;
    }

    VAR_18 = VAR_17 ? FUNC_8(VAR_19, VAR_16)
                     : FUNC_5(VAR_19, VAR_16);
    if (!VAR_18)
    {
        FUNC_2(VAR_13,
                     VAR_17 ? VAR_9 : VAR_8,
                     VAR_20);
        goto Quit;
    }

Quit:
    FUNC_1(VAR_19);
    return VAR_18;
}
