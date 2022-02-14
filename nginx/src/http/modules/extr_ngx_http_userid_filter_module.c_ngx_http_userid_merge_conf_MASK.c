
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_2__ {char mark; int expires; int service; int p3p; int path; int domain; int name; int enable; } ;
typedef TYPE_1__ ngx_http_userid_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_http_userid_conf_t *VAR_6 = VAR_4;
    ngx_http_userid_conf_t *VAR_7 = VAR_5;

    FUNC_2(VAR_7->enable, VAR_6->enable,
                              VAR_2);

    FUNC_1(VAR_7->name, VAR_6->name, "uid");
    FUNC_1(VAR_7->domain, VAR_6->domain, "");
    FUNC_1(VAR_7->path, VAR_6->path, "; path=/");
    FUNC_1(VAR_7->p3p, VAR_6->p3p, "");

    FUNC_3(VAR_7->service, VAR_6->service, VAR_1);
    FUNC_0(VAR_7->expires, VAR_6->expires, 0);

    if (VAR_7->mark == (u_char) '\xFF') {
        if (VAR_6->mark == (u_char) '\xFF') {
            VAR_7->mark = '\0';
        } else {
            VAR_7->mark = VAR_6->mark;
        }
    }

    return VAR_0;
}
