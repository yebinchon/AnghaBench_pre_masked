
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {scalar_t__ bAccountChanged; TYPE_2__* pService; TYPE_1__* pServiceConfig; } ;
struct TYPE_6__ {int lpServiceName; } ;
struct TYPE_5__ {int dwServiceType; } ;
typedef TYPE_3__* PLOGONDATA ;
typedef int HWND ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ,int,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static
BOOL
FUNC_7(
    HWND VAR_17,
    PLOGONDATA VAR_18)
{
    WCHAR VAR_19[64];
    WCHAR VAR_20[64];
    WCHAR VAR_21[64];
    DWORD VAR_22 = VAR_15;
    BOOL VAR_23 = VAR_16;

    if (!VAR_18->bAccountChanged)
        return VAR_16;

    if (FUNC_3(VAR_17, VAR_8, VAR_0, 0, 0) == VAR_1)
    {

        FUNC_6(VAR_19, L"LocalSystem");
        FUNC_6(VAR_20, L"");
        FUNC_6(VAR_21, L"");


        VAR_22 = VAR_18->pServiceConfig->dwServiceType;
        if (FUNC_3(VAR_17, VAR_5, VAR_0, 0, 0) == VAR_1)
            VAR_22 |= VAR_14;
        else
            VAR_22 &= ~VAR_14;
    }
    else
    {

        FUNC_0(VAR_17, VAR_4, VAR_19, 64);
        FUNC_0(VAR_17, VAR_6, VAR_20, 64);
        FUNC_0(VAR_17, VAR_7, VAR_21, 64);

        if (FUNC_5(VAR_20, VAR_21))
        {
            FUNC_2(FUNC_1(((void*)0)), VAR_17, VAR_13 | VAR_12, VAR_9, VAR_11);
            return VAR_3;
        }

        if (!FUNC_5(VAR_20, VAR_2))
        {
            FUNC_2(FUNC_1(((void*)0)), VAR_17, VAR_13 | VAR_12, VAR_9, VAR_10);
            return VAR_3;
        }
    }


    VAR_23 = FUNC_4(VAR_18->pService->lpServiceName,
                             VAR_22,
                             VAR_19,
                             VAR_20);
    if (VAR_23 == VAR_3)
    {

    }

    if (VAR_23 == VAR_16)
    {
        VAR_18->bAccountChanged = VAR_3;

    }

    return VAR_23;
}
