
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int line; int file; } ;
typedef TYPE_4__ ngx_http_ssl_srv_conf_t ;
struct TYPE_12__ {TYPE_3__* conf_file; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {int data; } ;
struct TYPE_9__ {TYPE_1__ name; } ;
struct TYPE_10__ {int line; TYPE_2__ file; } ;


 char* VAR_0 ;
 char* FUNC_0 (TYPE_5__*,int *,void*) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_1, ngx_command_t *VAR_2, void *VAR_3)
{
    ngx_http_ssl_srv_conf_t *VAR_4 = VAR_3;

    char *VAR_5;

    VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);

    if (VAR_5 != VAR_0) {
        return VAR_5;
    }

    VAR_4->file = VAR_1->conf_file->file.name.data;
    VAR_4->line = VAR_1->conf_file->line;

    return VAR_0;
}
