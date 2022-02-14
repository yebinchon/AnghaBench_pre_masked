
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int ranges; scalar_t__ tree6; scalar_t__ tree; } ;
typedef TYPE_2__ ngx_stream_geo_conf_ctx_t ;
struct TYPE_18__ {int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_19__ {int pool; TYPE_1__* args; TYPE_2__* ctx; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_16__ {int nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 char* FUNC_3 (TYPE_4__*,TYPE_2__*,TYPE_3__*) ;
 char* FUNC_4 (TYPE_4__*,TYPE_2__*,TYPE_3__*) ;
 char* FUNC_5 (TYPE_4__*,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    char *VAR_6;
    ngx_str_t *VAR_7;
    ngx_stream_geo_conf_ctx_t *VAR_8;

    VAR_8 = VAR_3->ctx;

    VAR_7 = VAR_3->args->elts;

    if (VAR_3->args->nelts == 1) {

        if (FUNC_2(VAR_7[0].data, "ranges") == 0) {

            if (VAR_8->tree



               )
            {
                FUNC_0(VAR_2, VAR_3, 0,
                                   "the \"ranges\" directive must be "
                                   "the first directive inside \"geo\" block");
                goto failed;
            }

            VAR_8->ranges = 1;

            VAR_6 = VAR_1;

            goto done;
        }
    }

    if (VAR_3->args->nelts != 2) {
        FUNC_0(VAR_2, VAR_3, 0,
                           "invalid number of the geo parameters");
        goto failed;
    }

    if (FUNC_2(VAR_7[0].data, "include") == 0) {

        VAR_6 = FUNC_4(VAR_3, VAR_8, &VAR_7[1]);

        goto done;
    }

    if (VAR_8->ranges) {
        VAR_6 = FUNC_5(VAR_3, VAR_8, VAR_7);

    } else {
        VAR_6 = FUNC_3(VAR_3, VAR_8, VAR_7);
    }

done:

    FUNC_1(VAR_3->pool);

    return VAR_6;

failed:

    FUNC_1(VAR_3->pool);

    return VAR_0;
}
