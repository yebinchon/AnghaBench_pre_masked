
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cx; } ;
typedef TYPE_1__ SIZE ;
typedef int SCRIPT_STRING_ANALYSIS ;
typedef int LPCWSTR ;
typedef scalar_t__ HRESULT ;
typedef int HPEN ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_8 (int ,int,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int,int,int,int ,int,int *,int *,int *,int *,int *,int *) ;
 int FUNC_10 (int ,int,int ,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_13(HDC VAR_10, int VAR_11, int VAR_12, LPCWSTR VAR_13, int VAR_14, int VAR_15)
{
    SCRIPT_STRING_ANALYSIS VAR_16;
    DWORD VAR_17 = VAR_4;
    int VAR_18;
    int VAR_19;
    int VAR_20;
    SIZE VAR_21;
    HPEN VAR_22;
    HPEN VAR_23;
    HRESULT VAR_24 = VAR_6;

    if (VAR_15 == -1)
        return;

    if (FUNC_8(VAR_13, VAR_14, VAR_3) == VAR_7)
    {
        if (FUNC_2(VAR_10) & VAR_1 || FUNC_3(VAR_10) & VAR_8)
            VAR_17 |= VAR_5;

        VAR_24 = FUNC_9(VAR_10, VAR_13, VAR_14, (3 * VAR_14 / 2 + 16),
                                 -1, VAR_17, -1, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_16);
    }

    if (VAR_24 == VAR_7)
    {
        FUNC_10(VAR_16, VAR_15, VAR_0, &VAR_20);
        VAR_18 = VAR_11 + VAR_20;
        FUNC_10(VAR_16, VAR_15, VAR_9, &VAR_20);
        VAR_19 = VAR_11 + VAR_20;
        FUNC_11(&VAR_16);
    }
    else
    {
        FUNC_5(VAR_10, VAR_13, VAR_15, &VAR_21);
        VAR_18 = VAR_11 + VAR_21.cx;
        FUNC_5(VAR_10, VAR_13, VAR_15 + 1, &VAR_21);
        VAR_19 = VAR_11 + VAR_21.cx - 1;
    }
    VAR_22 = FUNC_0(VAR_2, 1, FUNC_4(VAR_10));
    VAR_23 = FUNC_12(VAR_10, VAR_22);
    FUNC_7(VAR_10, VAR_18, VAR_12, ((void*)0));
    FUNC_6(VAR_10, VAR_19, VAR_12);
    FUNC_12(VAR_10, VAR_23);
    FUNC_1(VAR_22);
}
