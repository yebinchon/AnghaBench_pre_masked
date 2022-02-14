
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* path; TYPE_1__* server; } ;
typedef TYPE_2__ http_request_t ;
typedef char WCHAR ;
struct TYPE_4__ {char* scheme_host_port; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static WCHAR *FUNC_6(http_request_t *VAR_0)
{
    DWORD VAR_1, VAR_2;
    WCHAR *VAR_3;

    VAR_2 = FUNC_5(VAR_0->server->scheme_host_port);
    VAR_1 = VAR_2 + FUNC_5(VAR_0->path) + 1;
    if(*VAR_0->path != '/')
        VAR_1++;
    VAR_3 = FUNC_2(VAR_1 * sizeof(WCHAR));
    if(!VAR_3)
        return ((void*)0);

    FUNC_3(VAR_3, VAR_0->server->scheme_host_port, VAR_2*sizeof(WCHAR));
    if(*VAR_0->path != '/')
        VAR_3[VAR_2++] = '/';

    FUNC_4(VAR_3+VAR_2, VAR_0->path);

    FUNC_0("url=%s\n", FUNC_1(VAR_3));
    return VAR_3;
}
