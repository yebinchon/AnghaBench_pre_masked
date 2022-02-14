
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int status ;
typedef char WCHAR ;
typedef int ULONGLONG ;
struct TYPE_2__ {scalar_t__ dwCurrentState; } ;
typedef TYPE_1__ SERVICE_STATUS_PROCESS ;
typedef int SC_HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int ,int ,int *,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (char*) ;
 int VAR_7 ;
 int FUNC_10 (char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_11(void)
{
    static const WCHAR VAR_8[] = {'R','p','c','S','s',0};
    SC_HANDLE VAR_9, VAR_10;
    SERVICE_STATUS_PROCESS VAR_11;
    BOOL VAR_12 = VAR_1;

    FUNC_9("\n");

    if (!(VAR_9 = FUNC_4( ((void*)0), ((void*)0), 0 )))
    {
        FUNC_1( "failed to open service manager\n" );
        return VAR_1;
    }
    if (!(VAR_10 = FUNC_5( VAR_9, VAR_8, VAR_5 | VAR_3 )))
    {
        FUNC_1( "failed to open RpcSs service\n" );
        FUNC_0( VAR_9 );
        return VAR_1;
    }
    if (FUNC_8( VAR_10, 0, ((void*)0) ) || FUNC_2() == VAR_0)
    {
        ULONGLONG VAR_13 = FUNC_3();
        do
        {
            DWORD VAR_14;

            if (!FUNC_6( VAR_10, VAR_2,
                                       (BYTE *)&VAR_11, sizeof(VAR_11), &VAR_14 ))
                break;
            if (VAR_11.dwCurrentState == VAR_4)
            {
                VAR_12 = VAR_7;
                break;
            }
            if (FUNC_3() - VAR_13 > 30000) break;
            FUNC_7( 100 );

        } while (VAR_11.dwCurrentState == VAR_6);

        if (VAR_11.dwCurrentState != VAR_4)
            FUNC_10( "RpcSs failed to start %u\n", VAR_11.dwCurrentState );
    }
    else FUNC_1( "failed to start RpcSs service\n" );

    FUNC_0( VAR_10 );
    FUNC_0( VAR_9 );
    return VAR_12;
}
