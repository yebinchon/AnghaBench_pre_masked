
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int no_resolve; int url; TYPE_5__* complex_value; int * value; TYPE_7__* cf; } ;
typedef TYPE_2__ ngx_url_t ;
struct TYPE_18__ {int * upstream; TYPE_5__* upstream_value; } ;
typedef TYPE_3__ ngx_stream_proxy_srv_conf_t ;
struct TYPE_19__ {int handler; } ;
typedef TYPE_4__ ngx_stream_core_srv_conf_t ;
struct TYPE_20__ {scalar_t__ lengths; } ;
typedef TYPE_5__ ngx_stream_complex_value_t ;
typedef TYPE_2__ ngx_stream_compile_complex_value_t ;
typedef int ngx_str_t ;
struct TYPE_21__ {int pool; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_16__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_5__* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_4__* FUNC_3 (TYPE_7__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_4 (TYPE_7__*,TYPE_2__*,int ) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_stream_proxy_srv_conf_t *VAR_8 = VAR_7;

    ngx_url_t VAR_9;
    ngx_str_t *VAR_10, *VAR_11;
    ngx_stream_complex_value_t VAR_12;
    ngx_stream_core_srv_conf_t *VAR_13;
    ngx_stream_compile_complex_value_t VAR_14;

    if (VAR_8->upstream || VAR_8->upstream_value) {
        return "is duplicate";
    }

    VAR_13 = FUNC_3(VAR_5, VAR_3);

    VAR_13->handler = VAR_4;

    VAR_10 = VAR_5->args->elts;

    VAR_11 = &VAR_10[1];

    FUNC_0(&VAR_14, sizeof(ngx_stream_compile_complex_value_t));

    VAR_14.cf = VAR_5;
    VAR_14.value = VAR_11;
    VAR_14.complex_value = &VAR_12;

    if (FUNC_2(&VAR_14) != VAR_2) {
        return VAR_0;
    }

    if (VAR_12.lengths) {
        VAR_8->upstream_value = FUNC_1(VAR_5->pool,
                                          sizeof(ngx_stream_complex_value_t));
        if (VAR_8->upstream_value == ((void*)0)) {
            return VAR_0;
        }

        *VAR_8->upstream_value = VAR_12;

        return VAR_1;
    }

    FUNC_0(&VAR_9, sizeof(ngx_url_t));

    VAR_9.url = *VAR_11;
    VAR_9.no_resolve = 1;

    VAR_8->upstream = FUNC_4(VAR_5, &VAR_9, 0);
    if (VAR_8->upstream == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
