
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int complete_lengths; int complete_values; int no_resolve; int url; scalar_t__ variables; int * values; scalar_t__* lengths; int * source; TYPE_8__* cf; } ;
typedef TYPE_4__ ngx_url_t ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_str_t ;
typedef TYPE_4__ ngx_http_script_compile_t ;
struct TYPE_18__ {int * upstream; } ;
struct TYPE_20__ {TYPE_3__ upstream; int fastcgi_values; scalar_t__ fastcgi_lengths; } ;
typedef TYPE_6__ ngx_http_fastcgi_loc_conf_t ;
struct TYPE_16__ {int len; char* data; } ;
struct TYPE_21__ {int auto_redirect; TYPE_1__ name; int handler; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_22__ {TYPE_2__* args; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_17__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_7__* FUNC_0 (TYPE_8__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_8__*,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_http_fastcgi_loc_conf_t *VAR_8 = VAR_7;

    ngx_url_t VAR_9;
    ngx_str_t *VAR_10, *VAR_11;
    ngx_uint_t VAR_12;
    ngx_http_core_loc_conf_t *VAR_13;
    ngx_http_script_compile_t VAR_14;

    if (VAR_8->upstream.upstream || VAR_8->fastcgi_lengths) {
        return "is duplicate";
    }

    VAR_13 = FUNC_0(VAR_5, VAR_3);

    VAR_13->handler = VAR_4;

    if (VAR_13->name.len && VAR_13->name.data[VAR_13->name.len - 1] == '/') {
        VAR_13->auto_redirect = 1;
    }

    VAR_10 = VAR_5->args->elts;

    VAR_11 = &VAR_10[1];

    VAR_12 = FUNC_2(VAR_11);

    if (VAR_12) {

        FUNC_4(&VAR_14, sizeof(ngx_http_script_compile_t));

        VAR_14.cf = VAR_5;
        VAR_14.source = VAR_11;
        VAR_14.lengths = &VAR_8->fastcgi_lengths;
        VAR_14.values = &VAR_8->fastcgi_values;
        VAR_14.variables = VAR_12;
        VAR_14.complete_lengths = 1;
        VAR_14.complete_values = 1;

        if (FUNC_1(&VAR_14) != VAR_2) {
            return VAR_0;
        }

        return VAR_1;
    }

    FUNC_4(&VAR_9, sizeof(ngx_url_t));

    VAR_9.url = VAR_10[1];
    VAR_9.no_resolve = 1;

    VAR_8->upstream.upstream = FUNC_3(VAR_5, &VAR_9, 0);
    if (VAR_8->upstream.upstream == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
