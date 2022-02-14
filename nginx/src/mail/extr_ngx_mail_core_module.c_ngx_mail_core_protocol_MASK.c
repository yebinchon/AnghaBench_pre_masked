
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_18__ {int data; } ;
typedef TYPE_6__ ngx_str_t ;
struct TYPE_19__ {TYPE_5__* protocol; } ;
typedef TYPE_7__ ngx_mail_module_t ;
struct TYPE_20__ {TYPE_5__* protocol; } ;
typedef TYPE_8__ ngx_mail_core_srv_conf_t ;
struct TYPE_21__ {TYPE_3__* cycle; TYPE_1__* args; } ;
typedef TYPE_9__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_16__ {int data; } ;
struct TYPE_17__ {TYPE_4__ name; } ;
struct TYPE_15__ {TYPE_2__** modules; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_7__* ctx; } ;
struct TYPE_13__ {TYPE_6__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_9__*,int ,char*,TYPE_6__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_mail_core_srv_conf_t *VAR_7 = VAR_6;

    ngx_str_t *VAR_8;
    ngx_uint_t VAR_9;
    ngx_mail_module_t *VAR_10;

    VAR_8 = VAR_4->args->elts;

    for (VAR_9 = 0; VAR_4->cycle->modules[VAR_9]; VAR_9++) {
        if (VAR_4->cycle->modules[VAR_9]->type != VAR_3) {
            continue;
        }

        VAR_10 = VAR_4->cycle->modules[VAR_9]->ctx;

        if (VAR_10->protocol
            && FUNC_1(VAR_10->protocol->name.data, VAR_8[1].data) == 0)
        {
            VAR_7->protocol = VAR_10->protocol;

            return VAR_1;
        }
    }

    FUNC_0(VAR_2, VAR_4, 0,
                       "unknown protocol \"%V\"", &VAR_8[1]);
    return VAR_0;
}
