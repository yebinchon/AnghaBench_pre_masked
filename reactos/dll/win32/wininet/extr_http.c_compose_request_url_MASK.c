
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* path; TYPE_1__* server; } ;
typedef TYPE_2__ http_request_t ;
typedef char WCHAR ;
struct TYPE_4__ {char* canon_host_port; scalar_t__ is_https; } ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static WCHAR *FUNC_3(http_request_t *VAR_0)
{
    static const WCHAR VAR_1[] = { 'h','t','t','p',':','/','/',0 };
    static const WCHAR VAR_2[] = { 'h','t','t','p','s',':','/','/',0 };
    const WCHAR *VAR_3, *VAR_4;
    WCHAR *VAR_5, *VAR_6;
    size_t VAR_7;

    VAR_3 = VAR_0->server->canon_host_port;

    if (VAR_0->server->is_https)
        VAR_4 = VAR_2;
    else
        VAR_4 = VAR_1;

    VAR_7 = FUNC_2(VAR_4) + FUNC_2(VAR_3) + (VAR_0->path[0] != '/' ? 1 : 0) + FUNC_2(VAR_0->path);
    VAR_6 = VAR_5 = FUNC_0((VAR_7+1) * sizeof(WCHAR));
    if(VAR_5) {
        FUNC_1(VAR_6, VAR_4);
        VAR_6 += FUNC_2(VAR_6);

        FUNC_1(VAR_6, VAR_3);
        VAR_6 += FUNC_2(VAR_6);

        if(VAR_0->path[0] != '/')
            *VAR_6++ = '/';

        FUNC_1(VAR_6, VAR_0->path);
        VAR_6 += FUNC_2(VAR_6);
        *VAR_6 = 0;
    }

    return VAR_5;
}
