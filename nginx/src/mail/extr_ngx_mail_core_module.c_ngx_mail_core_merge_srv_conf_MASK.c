
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_8__ {int resolver; int * error_log; int line; int file_name; int * protocol; TYPE_5__ server_name; int resolver_timeout; int timeout; } ;
typedef TYPE_2__ ngx_mail_core_srv_conf_t ;
struct TYPE_9__ {TYPE_1__* cycle; int log; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_7__ {int new_log; TYPE_5__ hostname; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_5__,TYPE_5__,char*) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int ) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_mail_core_srv_conf_t *VAR_6 = VAR_4;
    ngx_mail_core_srv_conf_t *VAR_7 = VAR_5;

    FUNC_0(VAR_7->timeout, VAR_6->timeout, 60000);
    FUNC_0(VAR_7->resolver_timeout, VAR_6->resolver_timeout,
                              30000);


    FUNC_2(VAR_7->server_name, VAR_6->server_name, "");

    if (VAR_7->server_name.len == 0) {
        VAR_7->server_name = VAR_3->cycle->hostname;
    }

    if (VAR_7->protocol == ((void*)0)) {
        FUNC_3(VAR_2, VAR_3->log, 0,
                      "unknown mail protocol for server in %s:%ui",
                      VAR_7->file_name, VAR_7->line);
        return VAR_0;
    }

    if (VAR_7->error_log == ((void*)0)) {
        if (VAR_6->error_log) {
            VAR_7->error_log = VAR_6->error_log;
        } else {
            VAR_7->error_log = &VAR_3->cycle->new_log;
        }
    }

    FUNC_1(VAR_7->resolver, VAR_6->resolver, ((void*)0));

    return VAR_1;
}
