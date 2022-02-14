
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lpDescription; } ;
typedef TYPE_1__ SERVICE_DESCRIPTION ;
typedef int * SC_HANDLE ;
typedef scalar_t__ LPTSTR ;
typedef scalar_t__ LPCTSTR ;
typedef int LPBYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,...) ;

BOOL FUNC_8(LPCTSTR VAR_5, LPCTSTR VAR_6)
{
    SC_HANDLE VAR_7 = ((void*)0);
    SC_HANDLE VAR_8 = ((void*)0);
    BOOL VAR_9 = VAR_4;
    SERVICE_DESCRIPTION VAR_10;





    VAR_7 = FUNC_3(((void*)0),
                             ((void*)0),
                             VAR_1);
    if (VAR_7 == ((void*)0))
    {
        FUNC_7(FUNC_6("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_2());
        VAR_9 = VAR_0;
        goto done;
    }

    VAR_8 = FUNC_4(VAR_7, VAR_5, VAR_2);
    if (VAR_8 == ((void*)0))
    {
        FUNC_7(FUNC_6("[SC] OpenService FAILED %lu:\n\n"), FUNC_2());
        VAR_9 = VAR_0;
        goto done;
    }

    VAR_10.lpDescription = (LPTSTR)VAR_6;

    if (!FUNC_0(VAR_8,
                              VAR_3,
                              (LPBYTE)&VAR_10))
    {
        FUNC_7(FUNC_6("[SC] ChangeServiceConfig2 FAILED %lu:\n\n"), FUNC_2());
        VAR_9 = VAR_0;
        goto done;
    }

    FUNC_7(FUNC_6("[SC] ChangeServiceConfig2 SUCCESS\n\n"));

done:
    if (VAR_9 == VAR_0)
        FUNC_5();

    if (VAR_8)
        FUNC_1(VAR_8);

    if (VAR_7)
        FUNC_1(VAR_7);

    return VAR_9;
}
