
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef int * LPSERVICE_STATUS_PROCESS ;
typedef int LPCTSTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int *,int *,scalar_t__) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *,scalar_t__,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,...) ;

BOOL FUNC_12(LPCTSTR VAR_5, LPCTSTR *VAR_6, INT VAR_7)
{
    SC_HANDLE VAR_8 = ((void*)0);
    SC_HANDLE VAR_9 = ((void*)0);
    LPSERVICE_STATUS_PROCESS VAR_10 = ((void*)0);
    BOOL VAR_11 = VAR_4;
    VAR_8 = FUNC_4(((void*)0),
                               ((void*)0),
                               VAR_1);
    if (VAR_8 == ((void*)0))
    {
        FUNC_11(FUNC_10("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_1());
        VAR_11 = VAR_0;
        goto done;
    }

    VAR_9 = FUNC_5(VAR_8,
                      VAR_5,
                      VAR_3 | VAR_2);
    if (VAR_9 == ((void*)0))
    {
        FUNC_11(FUNC_10("[SC] OpenService FAILED %lu:\n\n"), FUNC_1());
        VAR_11 = VAR_0;
        goto done;
    }

    if (!VAR_7)
    {
        VAR_6 = ((void*)0);
    }

    if (!FUNC_9(VAR_9,
                      VAR_7,
                      VAR_6))
    {
        FUNC_11(FUNC_10("[SC] StartService FAILED %lu:\n\n"), FUNC_1());
        VAR_11 = VAR_0;
        goto done;
    }

    VAR_10 = FUNC_7(VAR_5);
    if (VAR_10 != ((void*)0))
    {
        FUNC_6(VAR_5,
                     ((void*)0),
                     VAR_10,
                     VAR_4);

        FUNC_3(FUNC_2(), 0, VAR_10);
    }

done:
    if (VAR_11 == VAR_0)
        FUNC_8();

    if (VAR_9)
        FUNC_0(VAR_9);

    if (VAR_8)
        FUNC_0(VAR_8);

    return VAR_11;
}
