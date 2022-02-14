
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ServiceStatusProcess; int lpServiceName; } ;
typedef int SERVICE_STATUS_PROCESS ;
typedef int * SC_HANDLE ;
typedef int LPBYTE ;
typedef TYPE_1__ ENUM_SERVICE_STATUS_PROCESS ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

BOOL
FUNC_4(ENUM_SERVICE_STATUS_PROCESS* VAR_5)
{
    SC_HANDLE VAR_6;
    BOOL VAR_7 = VAR_0;

    VAR_6 = FUNC_1(((void*)0),
                          ((void*)0),
                          VAR_1);
    if (VAR_6 != ((void*)0))
    {
        SC_HANDLE VAR_8;

        VAR_8 = FUNC_2(VAR_6,
                                VAR_5->lpServiceName,
                                VAR_3);
        if (VAR_8)
        {
            DWORD VAR_9;

            FUNC_3(VAR_8,
                                 VAR_2,
                                 (LPBYTE)&VAR_5->ServiceStatusProcess,
                                 sizeof(SERVICE_STATUS_PROCESS),
                                 &VAR_9);

            FUNC_0(VAR_8);
            VAR_7 = VAR_4;
        }

        FUNC_0(VAR_6);
    }

    return VAR_7;
}
