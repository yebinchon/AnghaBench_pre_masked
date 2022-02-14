
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_2__ {scalar_t__ dwCurrentState; } ;
typedef TYPE_1__ SERVICE_STATUS_PROCESS ;
typedef int SC_HANDLE ;
typedef int LPBYTE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ) ;

BOOL
FUNC_4(
    SC_HANDLE VAR_4,
    ULONG VAR_5)
{
    ULONG VAR_6 = 0;
    DWORD VAR_7;
    SERVICE_STATUS_PROCESS VAR_8;

    do
    {
        if (!FUNC_1(VAR_4, VAR_1, (LPBYTE)&VAR_8, sizeof(SERVICE_STATUS_PROCESS), &VAR_7))
        {
            FUNC_3("QueryServiceStatusEx failed %x\n", FUNC_0());
            break;
        }

        if (VAR_8.dwCurrentState == VAR_2)
            return VAR_3;

        FUNC_2(1000);

    } while (VAR_6++ < VAR_5);

    FUNC_3("Timeout while waiting for service to become ready %p\n", VAR_4);

    return VAR_0;
}
