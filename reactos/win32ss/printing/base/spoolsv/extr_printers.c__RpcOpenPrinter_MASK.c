
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINSPOOL_PRINTER_HANDLE ;
typedef int WINSPOOL_HANDLE ;
struct TYPE_5__ {scalar_t__ pDevMode; } ;
typedef TYPE_1__ WINSPOOL_DEVMODE_CONTAINER ;
typedef int WCHAR ;
struct TYPE_6__ {scalar_t__ pDevMode; int * pDatatype; scalar_t__ DesiredAccess; } ;
typedef TYPE_2__ PRINTER_DEFAULTSW ;
typedef scalar_t__ PDEVMODEW ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;

DWORD
FUNC_5(WINSPOOL_HANDLE VAR_1, WINSPOOL_PRINTER_HANDLE* VAR_2, WCHAR* VAR_3, WINSPOOL_DEVMODE_CONTAINER* VAR_4, DWORD VAR_5)
{
    DWORD VAR_6;
    PRINTER_DEFAULTSW VAR_7;

    VAR_6 = FUNC_3(((void*)0));
    if (VAR_6 != VAR_0)
    {
        FUNC_0("RpcImpersonateClient failed with error %lu!\n", VAR_6);
        return VAR_6;
    }

    VAR_7.DesiredAccess = VAR_5;
    VAR_7.pDatatype = VAR_3;
    VAR_7.pDevMode = (PDEVMODEW)VAR_4->pDevMode;

    if (!FUNC_2(VAR_1, VAR_2, &VAR_7))
        VAR_6 = FUNC_1();

    FUNC_4();
    return VAR_6;
}
