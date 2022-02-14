
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * pServiceFailure; TYPE_1__* pService; } ;
struct TYPE_4__ {int lpServiceName; } ;
typedef int * SC_HANDLE ;
typedef TYPE_2__* PRECOVERYDATA ;
typedef int * LPSERVICE_FAILURE_ACTIONS ;
typedef int * LPBYTE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int *,scalar_t__,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static
BOOL
FUNC_8(
    PRECOVERYDATA VAR_6)
{
    LPSERVICE_FAILURE_ACTIONS VAR_7 = ((void*)0);
    SC_HANDLE VAR_8 = ((void*)0);
    SC_HANDLE VAR_9 = ((void*)0);
    BOOL VAR_10 = VAR_5;
    DWORD VAR_11 = 0;

    VAR_8 = FUNC_4(((void*)0),
                             ((void*)0),
                             VAR_2);
    if (VAR_8 == ((void*)0))
    {
        VAR_10 = VAR_1;
        goto done;
    }

    VAR_9 = FUNC_5(VAR_8, VAR_6->pService->lpServiceName, VAR_4);
    if (VAR_9 == ((void*)0))
    {
        VAR_10 = VAR_1;
        goto done;
    }

    if (!FUNC_6(VAR_9,
                             VAR_3,
                             ((void*)0),
                             0,
                             &VAR_11))
    {
        if (VAR_11 == 0)
        {
            VAR_10 = VAR_1;
            goto done;
        }
    }

    VAR_7 = FUNC_2(FUNC_1(), 0, VAR_11);
    if (VAR_7 == ((void*)0))
    {
        FUNC_7(VAR_0);
        VAR_10 = VAR_1;
        goto done;
    }

    if (!FUNC_6(VAR_9,
                             VAR_3,
                             (LPBYTE)VAR_7,
                             VAR_11,
                             &VAR_11))
    {
        VAR_10 = VAR_1;
        goto done;
    }

    VAR_6->pServiceFailure = VAR_7;

done:
    if (VAR_10 == VAR_1 && VAR_7 != ((void*)0))
        FUNC_3(FUNC_1(), 0, VAR_7);

    if (VAR_9)
        FUNC_0(VAR_9);

    if (VAR_8)
        FUNC_0(VAR_8);

    return VAR_10;
}
