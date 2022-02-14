
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int u_short ;
typedef int u_char ;
struct TYPE_29__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_34__ {int complete_lengths; int complete_values; int default_port; int uri_part; int no_resolve; TYPE_2__ url; scalar_t__ variables; int * values; scalar_t__* lengths; TYPE_8__* source; TYPE_12__* cf; } ;
typedef TYPE_7__ ngx_url_t ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_35__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_8__ ngx_str_t ;
typedef TYPE_7__ ngx_http_script_compile_t ;
struct TYPE_33__ {int len; char* data; } ;
struct TYPE_32__ {scalar_t__ len; } ;
struct TYPE_31__ {size_t len; scalar_t__ data; } ;
struct TYPE_27__ {TYPE_5__ uri; TYPE_4__ schema; TYPE_4__ key_start; } ;
struct TYPE_30__ {int * upstream; } ;
struct TYPE_24__ {int ssl; TYPE_8__ url; TYPE_6__ location; TYPE_19__ vars; TYPE_3__ upstream; int proxy_values; scalar_t__ proxy_lengths; } ;
typedef TYPE_10__ ngx_http_proxy_loc_conf_t ;
struct TYPE_25__ {int auto_redirect; scalar_t__ noname; scalar_t__ regex; scalar_t__ named; TYPE_6__ name; int handler; } ;
typedef TYPE_11__ ngx_http_core_loc_conf_t ;
struct TYPE_26__ {TYPE_1__* args; } ;
typedef TYPE_12__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_28__ {TYPE_8__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_12__*,int ,char*) ;
 TYPE_11__* FUNC_1 (TYPE_12__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_7__*,TYPE_19__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 int * FUNC_5 (TYPE_12__*,TYPE_7__*,int ) ;
 int FUNC_6 (TYPE_7__*,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int *,int) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_proxy_loc_conf_t *VAR_9 = VAR_8;

    size_t VAR_10;
    u_short VAR_11;
    ngx_str_t *VAR_12, *VAR_13;
    ngx_url_t VAR_14;
    ngx_uint_t VAR_15;
    ngx_http_core_loc_conf_t *VAR_16;
    ngx_http_script_compile_t VAR_17;

    if (VAR_9->upstream.upstream || VAR_9->proxy_lengths) {
        return "is duplicate";
    }

    VAR_16 = FUNC_1(VAR_6, VAR_4);

    VAR_16->handler = VAR_5;

    if (VAR_16->name.len && VAR_16->name.data[VAR_16->name.len - 1] == '/') {
        VAR_16->auto_redirect = 1;
    }

    VAR_12 = VAR_6->args->elts;

    VAR_13 = &VAR_12[1];

    VAR_15 = FUNC_4(VAR_13);

    if (VAR_15) {

        FUNC_6(&VAR_17, sizeof(ngx_http_script_compile_t));

        VAR_17.cf = VAR_6;
        VAR_17.source = VAR_13;
        VAR_17.lengths = &VAR_9->proxy_lengths;
        VAR_17.values = &VAR_9->proxy_values;
        VAR_17.variables = VAR_15;
        VAR_17.complete_lengths = 1;
        VAR_17.complete_values = 1;

        if (FUNC_3(&VAR_17) != VAR_3) {
            return VAR_0;
        }





        return VAR_1;
    }

    if (FUNC_7(VAR_13->data, (u_char *) "http://", 7) == 0) {
        VAR_10 = 7;
        VAR_11 = 80;

    } else if (FUNC_7(VAR_13->data, (u_char *) "https://", 8) == 0) {







        FUNC_0(VAR_2, VAR_6, 0,
                           "https protocol requires SSL support");
        return VAR_0;


    } else {
        FUNC_0(VAR_2, VAR_6, 0, "invalid URL prefix");
        return VAR_0;
    }

    FUNC_6(&VAR_14, sizeof(ngx_url_t));

    VAR_14.url.len = VAR_13->len - VAR_10;
    VAR_14.url.data = VAR_13->data + VAR_10;
    VAR_14.default_port = VAR_11;
    VAR_14.uri_part = 1;
    VAR_14.no_resolve = 1;

    VAR_9->upstream.upstream = FUNC_5(VAR_6, &VAR_14, 0);
    if (VAR_9->upstream.upstream == ((void*)0)) {
        return VAR_0;
    }

    VAR_9->vars.schema.len = VAR_10;
    VAR_9->vars.schema.data = VAR_13->data;
    VAR_9->vars.key_start = VAR_9->vars.schema;

    FUNC_2(&VAR_14, &VAR_9->vars);

    VAR_9->location = VAR_16->name;

    if (VAR_16->named



        || VAR_16->noname)
    {
        if (VAR_9->vars.uri.len) {
            FUNC_0(VAR_2, VAR_6, 0,
                               "\"proxy_pass\" cannot have URI part in "
                               "location given by regular expression, "
                               "or inside named location, "
                               "or inside \"if\" statement, "
                               "or inside \"limit_except\" block");
            return VAR_0;
        }

        VAR_9->location.len = 0;
    }

    VAR_9->url = *VAR_13;

    return VAR_1;
}
