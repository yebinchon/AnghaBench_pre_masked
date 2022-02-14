
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* scheme_host_port; char* host_port; char* canon_host_port; scalar_t__ is_https; int port; } ;
typedef TYPE_1__ server_t ;
typedef int httpsW ;
typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,char const*,char*,int ) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static BOOL FUNC_3(server_t *VAR_4)
{
    BOOL VAR_5;
    size_t VAR_6;
    WCHAR *VAR_7;

    static const WCHAR VAR_8[] = {'h','t','t','p',0};
    static const WCHAR VAR_9[] = {'h','t','t','p','s',0};
    static const WCHAR VAR_10[] = {'%','s',':','/','/','%','s',':','%','u',0};

    VAR_6 = FUNC_2(VAR_4->name);
    VAR_7 = FUNC_0((VAR_6 + 10 )*sizeof(WCHAR) + sizeof(VAR_9));
    if(!VAR_7)
        return VAR_0;

    FUNC_1(VAR_7, VAR_10, VAR_4->is_https ? VAR_9 : VAR_8, VAR_4->name, VAR_4->port);
    VAR_4->scheme_host_port = VAR_7;

    VAR_4->host_port = VAR_4->scheme_host_port + 7 ;
    if(VAR_4->is_https)
        VAR_4->host_port++;

    VAR_5 = VAR_4->port == (VAR_4->is_https ? VAR_1 : VAR_2);
    VAR_4->canon_host_port = VAR_5 ? VAR_4->name : VAR_4->host_port;
    return VAR_3;
}
