
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef int * LPSERVICE_STATUS_PROCESS ;
typedef int LPCTSTR ;
typedef int * LPBYTE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int *) ;
 int * FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int *,scalar_t__,scalar_t__*) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

LPSERVICE_STATUS_PROCESS
FUNC_9(LPCTSTR VAR_4)
{
    SC_HANDLE VAR_5 = ((void*)0);
    LPSERVICE_STATUS_PROCESS VAR_6 = ((void*)0);
    SC_HANDLE VAR_7 = ((void*)0);
    DWORD VAR_8 = 0;
    DWORD VAR_9 = 0;
    DWORD VAR_10;

    VAR_5 = FUNC_5(((void*)0),
                               ((void*)0),
                               VAR_1);
    if (VAR_5 == ((void*)0))
    {
        FUNC_8();
        return ((void*)0);
    }

    VAR_7 = FUNC_6(VAR_5,
                      VAR_4,
                      VAR_3);
    if (VAR_7 == ((void*)0))
        goto fail;

    VAR_10 = FUNC_7(VAR_7,
                               VAR_2,
                               ((void*)0),
                               VAR_8,
                               &VAR_9);
    if ((VAR_10 != 0) || (FUNC_1() != VAR_0))
        goto fail;

    VAR_6 = (LPSERVICE_STATUS_PROCESS)FUNC_3(FUNC_2(),
                                                       0,
                                                       VAR_9);
    if (VAR_6 == ((void*)0))
        goto fail;

    if (!FUNC_7(VAR_7,
                              VAR_2,
                              (LPBYTE)VAR_6,
                              VAR_9,
                              &VAR_9))
    {
        goto fail;
    }

    FUNC_0(VAR_7);
    FUNC_0(VAR_5);
    return VAR_6;

fail:
    FUNC_8();
    if (VAR_6) FUNC_4(FUNC_2(), 0, VAR_6);
    if (VAR_7) FUNC_0(VAR_7);
    if (VAR_5) FUNC_0(VAR_5);
    return ((void*)0);
}
