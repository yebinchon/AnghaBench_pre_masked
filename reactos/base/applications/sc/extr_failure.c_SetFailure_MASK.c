
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpsaActions; } ;
typedef TYPE_1__ SERVICE_FAILURE_ACTIONS ;
typedef int * SC_HANDLE ;
typedef int * LPCTSTR ;
typedef int LPBYTE ;
typedef int INT ;
typedef scalar_t__ BOOLEAN ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int *) ;
 int * FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int **,int ,int **,TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 () ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,...) ;

BOOL
FUNC_14(
    LPCTSTR *VAR_7,
    INT VAR_8)
{
    SC_HANDLE VAR_9 = ((void*)0);
    SC_HANDLE VAR_10 = ((void*)0);
    BOOL VAR_11 = VAR_6;
    SERVICE_FAILURE_ACTIONS VAR_12;
    LPCTSTR VAR_13 = ((void*)0);
    BOOLEAN VAR_14 = VAR_0;

    FUNC_11(&VAR_12, sizeof(SERVICE_FAILURE_ACTIONS));

    if (!FUNC_7(VAR_7, VAR_8, &VAR_13, &VAR_12))
    {
        FUNC_10();
        return VAR_0;
    }

    VAR_9 = FUNC_5(((void*)0),
                             ((void*)0),
                             VAR_1);
    if (VAR_9 == ((void*)0))
    {
        FUNC_13(FUNC_12("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_2());
        VAR_11 = VAR_0;
        goto done;
    }

    VAR_10 = FUNC_6(VAR_9,
                           VAR_13,
                           VAR_2 | VAR_4);
    if (VAR_10 == ((void*)0))
    {
        FUNC_13(FUNC_12("[SC] OpenService FAILED %lu:\n\n"), FUNC_2());
        VAR_11 = VAR_0;
        goto done;
    }

    FUNC_9(VAR_5, VAR_6, VAR_0, &VAR_14);

    if (!FUNC_0(VAR_10,
                              VAR_3,
                              (LPBYTE)&VAR_12))
    {
        FUNC_13(FUNC_12("[SC] ChangeServiceConfig2 FAILED %lu:\n\n"), FUNC_2());
        VAR_11 = VAR_0;
        goto done;
    }

    FUNC_13(FUNC_12("[SC] ChangeServiceConfig2 SUCCESS\n\n"));

done:
    FUNC_9(VAR_5, VAR_14, VAR_0, &VAR_14);

    if (VAR_11 == VAR_0)
        FUNC_8();

    if (VAR_12.lpsaActions != ((void*)0))
        FUNC_4(FUNC_3(), 0, VAR_12.lpsaActions);

    if (VAR_10)
        FUNC_1(VAR_10);

    if (VAR_9)
        FUNC_1(VAR_9);

    return VAR_11;
}
