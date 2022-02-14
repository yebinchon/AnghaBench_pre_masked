
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uc ;
struct TYPE_5__ {int * proxy; int * proxyUsername; int * proxyPassword; } ;
typedef TYPE_1__ proxyinfo_t ;
typedef char WCHAR ;
struct TYPE_6__ {int member_0; int dwHostNameLength; int dwUserNameLength; int dwPasswordLength; int lpszPassword; int lpszUserName; int nPort; int lpszHostName; } ;
typedef TYPE_2__ URL_COMPONENTSW ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (int *,char const*,int,int ,int ) ;

__attribute__((used)) static BOOL FUNC_6( proxyinfo_t *VAR_2, const WCHAR *VAR_3 )
{
    static const WCHAR VAR_4[] = {'%','.','*','s',':','%','u',0};
    URL_COMPONENTSW VAR_5 = {sizeof(VAR_5)};

    VAR_5.dwHostNameLength = 1;
    VAR_5.dwUserNameLength = 1;
    VAR_5.dwPasswordLength = 1;

    if (!FUNC_0( VAR_3, 0, 0, &VAR_5 )) return VAR_0;
    if (!VAR_5.dwHostNameLength)
    {
        if (!(VAR_2->proxy = FUNC_3( VAR_3 ))) return VAR_0;
        VAR_2->proxyUsername = ((void*)0);
        VAR_2->proxyPassword = ((void*)0);
        return VAR_1;
    }
    if (!(VAR_2->proxy = FUNC_1( (VAR_5.dwHostNameLength + 12) * sizeof(WCHAR) ))) return VAR_0;
    FUNC_5( VAR_2->proxy, VAR_4, VAR_5.dwHostNameLength, VAR_5.lpszHostName, VAR_5.nPort );

    if (!VAR_5.dwUserNameLength) VAR_2->proxyUsername = ((void*)0);
    else if (!(VAR_2->proxyUsername = FUNC_4( VAR_5.lpszUserName, VAR_5.dwUserNameLength )))
    {
        FUNC_2( VAR_2->proxy );
        return VAR_0;
    }
    if (!VAR_5.dwPasswordLength) VAR_2->proxyPassword = ((void*)0);
    else if (!(VAR_2->proxyPassword = FUNC_4( VAR_5.lpszPassword, VAR_5.dwPasswordLength )))
    {
        FUNC_2( VAR_2->proxyUsername );
        FUNC_2( VAR_2->proxy );
        return VAR_0;
    }
    return VAR_1;
}
