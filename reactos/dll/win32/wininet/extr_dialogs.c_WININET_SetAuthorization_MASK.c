
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* userName; void* password; TYPE_3__* appInfo; } ;
typedef TYPE_1__ http_session_t ;
struct TYPE_6__ {TYPE_1__* session; } ;
typedef TYPE_2__ http_request_t ;
struct TYPE_7__ {void* proxyUsername; void* proxyPassword; } ;
typedef TYPE_3__ appinfo_t ;
typedef void* LPWSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static BOOL FUNC_2( http_request_t *VAR_2, LPWSTR VAR_3,
                                      LPWSTR VAR_4, BOOL VAR_5 )
{
    http_session_t *VAR_6 = VAR_2->session;
    LPWSTR VAR_7, VAR_8;

    VAR_7 = FUNC_1(VAR_3);
    if( !VAR_7 )
        return VAR_0;

    VAR_8 = FUNC_1(VAR_4);
    if( !VAR_8 )
    {
        FUNC_0(VAR_7);
        return VAR_0;
    }

    if (VAR_5)
    {
        appinfo_t *VAR_9 = VAR_6->appInfo;

        FUNC_0(VAR_9->proxyUsername);
        VAR_9->proxyUsername = VAR_7;

        FUNC_0(VAR_9->proxyPassword);
        VAR_9->proxyPassword = VAR_8;
    }
    else
    {
        FUNC_0(VAR_6->userName);
        VAR_6->userName = VAR_7;

        FUNC_0(VAR_6->password);
        VAR_6->password = VAR_8;
    }

    return VAR_1;
}
