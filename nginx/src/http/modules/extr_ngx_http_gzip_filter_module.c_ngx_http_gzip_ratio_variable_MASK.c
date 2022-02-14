
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int not_found; int valid; int * data; int * len; scalar_t__ no_cacheable; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {int zout; int zin; } ;
typedef TYPE_3__ ngx_http_gzip_ctx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int * FUNC_1 (int ,scalar_t__) ;
 int * FUNC_2 (int *,char*,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_4,
    ngx_http_variable_value_t *VAR_5, uintptr_t VAR_6)
{
    ngx_uint_t VAR_7, VAR_8;
    ngx_http_gzip_ctx_t *VAR_9;

    VAR_9 = FUNC_0(VAR_4, VAR_3);

    if (VAR_9 == ((void*)0) || VAR_9->zout == 0) {
        VAR_5->not_found = 1;
        return VAR_2;
    }

    VAR_5->valid = 1;
    VAR_5->no_cacheable = 0;
    VAR_5->not_found = 0;

    VAR_5->data = FUNC_1(VAR_4->pool, VAR_1 + 3);
    if (VAR_5->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = (ngx_uint_t) (VAR_9->zin / VAR_9->zout);
    VAR_8 = (ngx_uint_t) ((VAR_9->zin * 100 / VAR_9->zout) % 100);

    if ((VAR_9->zin * 1000 / VAR_9->zout) % 10 > 4) {



        VAR_8++;

        if (VAR_8 > 99) {
            VAR_7++;
            VAR_8 = 0;
        }
    }

    VAR_5->len = FUNC_2(VAR_5->data, "%ui.%02ui", VAR_7, VAR_8) - VAR_5->data;

    return VAR_2;
}
