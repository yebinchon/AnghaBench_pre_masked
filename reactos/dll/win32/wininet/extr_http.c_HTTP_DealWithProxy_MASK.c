
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int szHttp ;
struct TYPE_9__ {int port; int name; } ;
typedef TYPE_1__ server_t ;
typedef int http_session_t ;
struct TYPE_10__ {char* path; TYPE_1__* proxy; } ;
typedef TYPE_2__ http_request_t ;
struct TYPE_11__ {int proxy; } ;
typedef TYPE_3__ appinfo_t ;
typedef char WCHAR ;
typedef int UrlComponents ;
struct TYPE_12__ {int member_0; int dwHostNameLength; scalar_t__ nScheme; int nPort; int lpszHostName; } ;
typedef TYPE_4__ URL_COMPONENTSW ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int,char const*,int) ;
 int VAR_1 ;
 char* FUNC_1 (int ,char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (char*,int ,int ,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int ,int,int ) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static BOOL FUNC_12(appinfo_t *VAR_6, http_session_t *VAR_7, http_request_t *VAR_8)
{
    static const WCHAR VAR_9[] = { 'h','t','t','p',0 };
    static const WCHAR VAR_10[] = { 'h','t','t','p',':','/','/',0 };
    static WCHAR VAR_11[] = { 0 };
    URL_COMPONENTSW VAR_12 = { sizeof(VAR_12) };
    server_t *VAR_13 = ((void*)0);
    WCHAR *VAR_14;

    VAR_14 = FUNC_1(VAR_6->proxy, VAR_9);
    if(!VAR_14)
        return VAR_1;
    if(VAR_0 != FUNC_0(VAR_3, VAR_4,
                                    VAR_14, FUNC_10(VAR_10), VAR_10, FUNC_10(VAR_10))) {
        WCHAR *VAR_15 = FUNC_6(FUNC_10(VAR_14)*sizeof(WCHAR) + sizeof(VAR_10));
        if(!VAR_15) {
            FUNC_7(VAR_14);
            return VAR_1;
        }
        FUNC_9(VAR_15, VAR_10);
        FUNC_8(VAR_15, VAR_14);
        FUNC_7(VAR_14);
        VAR_14 = VAR_15;
    }

    VAR_12.dwHostNameLength = 1;
    if(FUNC_2(VAR_14, 0, 0, &VAR_12) && VAR_12.dwHostNameLength) {
        if( !VAR_8->path )
            VAR_8->path = VAR_11;

        VAR_13 = FUNC_5(FUNC_11(VAR_12.lpszHostName, VAR_12.dwHostNameLength),
                                VAR_12.nPort, VAR_12.nScheme == VAR_2, VAR_5);
    }
    FUNC_7(VAR_14);
    if(!VAR_13)
        return VAR_1;

    VAR_8->proxy = VAR_13;

    FUNC_3("proxy server=%s port=%d\n", FUNC_4(VAR_13->name), VAR_13->port);
    return VAR_5;
}
