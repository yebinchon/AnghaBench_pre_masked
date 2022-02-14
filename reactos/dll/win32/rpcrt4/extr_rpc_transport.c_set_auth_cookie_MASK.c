
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uc ;
typedef char WCHAR ;
struct TYPE_6__ {int dwStructSize; char* lpszScheme; scalar_t__ dwExtraInfoLength; int * lpszExtraInfo; scalar_t__ dwUrlPathLength; int * lpszUrlPath; scalar_t__ dwPasswordLength; int * lpszPassword; scalar_t__ dwUserNameLength; int * lpszUserName; scalar_t__ nPort; scalar_t__ dwHostNameLength; int lpszHostName; scalar_t__ dwSchemeLength; } ;
typedef TYPE_1__ URL_COMPONENTSW ;
struct TYPE_7__ {int servername; } ;
typedef TYPE_2__ RpcConnection_http ;
typedef int RPC_STATUS ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int ,char*,int*) ;
 int FUNC_5 (char*,int *,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static RPC_STATUS FUNC_7(RpcConnection_http *VAR_4, const WCHAR *VAR_5)
{
    static WCHAR VAR_6[] = {'h','t','t','p',0};
    static WCHAR VAR_7[] = {'h','t','t','p','s',0};
    URL_COMPONENTSW VAR_8;
    DWORD VAR_9;
    WCHAR *VAR_10;
    BOOL VAR_11;

    if (!VAR_5) return VAR_1;

    VAR_8.dwStructSize = sizeof(VAR_8);
    VAR_8.lpszScheme = FUNC_6(VAR_4) ? VAR_7 : VAR_6;
    VAR_8.dwSchemeLength = 0;
    VAR_8.lpszHostName = VAR_4->servername;
    VAR_8.dwHostNameLength = 0;
    VAR_8.nPort = 0;
    VAR_8.lpszUserName = ((void*)0);
    VAR_8.dwUserNameLength = 0;
    VAR_8.lpszPassword = ((void*)0);
    VAR_8.dwPasswordLength = 0;
    VAR_8.lpszUrlPath = ((void*)0);
    VAR_8.dwUrlPathLength = 0;
    VAR_8.lpszExtraInfo = ((void*)0);
    VAR_8.dwExtraInfoLength = 0;

    if (!FUNC_4(&VAR_8, 0, ((void*)0), &VAR_9) && (FUNC_0() != VAR_0))
        return VAR_3;

    if (!(VAR_10 = FUNC_2(FUNC_1(), 0, VAR_9))) return VAR_2;

    VAR_9 = VAR_9 / sizeof(WCHAR) - 1;
    if (!FUNC_4(&VAR_8, 0, VAR_10, &VAR_9))
    {
        FUNC_3(FUNC_1(), 0, VAR_10);
        return VAR_3;
    }

    VAR_11 = FUNC_5(VAR_10, ((void*)0), VAR_5);
    FUNC_3(FUNC_1(), 0, VAR_10);
    if (!VAR_11) return VAR_3;

    return VAR_1;
}
