
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_22__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_25__ {int complete_lengths; int complete_values; int no_resolve; TYPE_2__ url; scalar_t__ variables; int * values; scalar_t__* lengths; TYPE_6__* source; TYPE_10__* cf; } ;
typedef TYPE_5__ ngx_url_t ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_26__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_6__ ngx_str_t ;
struct TYPE_23__ {int * upstream; } ;
struct TYPE_27__ {int ssl; TYPE_3__ upstream; int uwsgi_values; scalar_t__ uwsgi_lengths; } ;
typedef TYPE_7__ ngx_http_uwsgi_loc_conf_t ;
typedef TYPE_5__ ngx_http_script_compile_t ;
struct TYPE_24__ {int len; char* data; } ;
struct TYPE_28__ {int auto_redirect; TYPE_4__ name; int handler; } ;
typedef TYPE_9__ ngx_http_core_loc_conf_t ;
struct TYPE_20__ {TYPE_1__* args; } ;
typedef TYPE_10__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_21__ {TYPE_6__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_10__*,int ,char*) ;
 TYPE_9__* FUNC_1 (TYPE_10__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int * FUNC_4 (TYPE_10__*,TYPE_5__*,int ) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_5__*,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int *,int) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_uwsgi_loc_conf_t *VAR_9 = VAR_8;

    size_t VAR_10;
    ngx_url_t VAR_11;
    ngx_str_t *VAR_12, *VAR_13;
    ngx_uint_t VAR_14;
    ngx_http_core_loc_conf_t *VAR_15;
    ngx_http_script_compile_t VAR_16;

    if (VAR_9->upstream.upstream || VAR_9->uwsgi_lengths) {
        return "is duplicate";
    }

    VAR_15 = FUNC_1(VAR_6, VAR_4);
    VAR_15->handler = VAR_5;

    VAR_12 = VAR_6->args->elts;

    VAR_13 = &VAR_12[1];

    VAR_14 = FUNC_3(VAR_13);

    if (VAR_14) {

        FUNC_5(&VAR_16, sizeof(ngx_http_script_compile_t));

        VAR_16.cf = VAR_6;
        VAR_16.source = VAR_13;
        VAR_16.lengths = &VAR_9->uwsgi_lengths;
        VAR_16.values = &VAR_9->uwsgi_values;
        VAR_16.variables = VAR_14;
        VAR_16.complete_lengths = 1;
        VAR_16.complete_values = 1;

        if (FUNC_2(&VAR_16) != VAR_3) {
            return VAR_0;
        }





        return VAR_1;
    }

    if (FUNC_6(VAR_13->data, (u_char *) "uwsgi://", 8) == 0) {
        VAR_10 = 8;

    } else if (FUNC_6(VAR_13->data, (u_char *) "suwsgi://", 9) == 0) {





        FUNC_0(VAR_2, VAR_6, 0,
                           "suwsgi protocol requires SSL support");
        return VAR_0;


    } else {
        VAR_10 = 0;
    }

    FUNC_5(&VAR_11, sizeof(ngx_url_t));

    VAR_11.url.len = VAR_13->len - VAR_10;
    VAR_11.url.data = VAR_13->data + VAR_10;
    VAR_11.no_resolve = 1;

    VAR_9->upstream.upstream = FUNC_4(VAR_6, &VAR_11, 0);
    if (VAR_9->upstream.upstream == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_15->name.len && VAR_15->name.data[VAR_15->name.len - 1] == '/') {
        VAR_15->auto_redirect = 1;
    }

    return VAR_1;
}
