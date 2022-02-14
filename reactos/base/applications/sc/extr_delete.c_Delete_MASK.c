
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef int LPCTSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,...) ;

BOOL FUNC_8(LPCTSTR VAR_4)
{
    SC_HANDLE VAR_5 = ((void*)0);
    SC_HANDLE VAR_6 = ((void*)0);
    BOOL VAR_7 = VAR_3;





    VAR_5 = FUNC_3(((void*)0),
                               ((void*)0),
                               VAR_2);
    if (VAR_5 == ((void*)0))
    {
        FUNC_7(FUNC_6("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_2());
        VAR_7 = VAR_1;
        goto done;
    }

    VAR_6 = FUNC_4(VAR_5, VAR_4, VAR_0);
    if (VAR_6 == ((void*)0))
    {
        FUNC_7(FUNC_6("[SC] OpenService FAILED %lu:\n\n"), FUNC_2());
        VAR_7 = VAR_1;
        goto done;
    }

    if (!FUNC_1(VAR_6))
    {
        FUNC_7(FUNC_6("[SC] DeleteService FAILED %lu:\n\n"), FUNC_2());
        VAR_7 = VAR_1;
        goto done;
    }

    FUNC_7(FUNC_6("[SC] DeleteService SUCCESS\n\n"));

done:
    if (VAR_7 == VAR_1)
        FUNC_5();

    if (VAR_6)
        FUNC_0(VAR_6);

    if (VAR_5)
        FUNC_0(VAR_5);

    return VAR_7;
}
