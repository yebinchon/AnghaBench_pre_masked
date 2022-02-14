
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* u_short ;
typedef size_t ngx_uint_t ;
struct TYPE_12__ {int value; void* end; void* start; } ;
typedef TYPE_2__ ngx_http_geo_range_t ;
struct TYPE_11__ {TYPE_2__** low; } ;
struct TYPE_13__ {int value; int net; TYPE_1__ high; int temp_pool; } ;
typedef TYPE_3__ ngx_http_geo_conf_ctx_t ;
typedef int ngx_conf_t ;
struct TYPE_14__ {size_t nelts; TYPE_2__* elts; } ;
typedef TYPE_4__ ngx_array_t ;
typedef int in_addr_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int *,int ,char*,int ,size_t,size_t,...) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_4, ngx_http_geo_conf_ctx_t *VAR_5,
    in_addr_t VAR_6, in_addr_t VAR_7)
{
    in_addr_t VAR_8;
    ngx_uint_t VAR_9, VAR_10, VAR_11, VAR_12;
    ngx_array_t *VAR_13;
    ngx_http_geo_range_t *VAR_14;

    for (VAR_8 = VAR_6; VAR_8 <= VAR_7; VAR_8 = (VAR_8 + 0x10000) & 0xffff0000) {

        VAR_9 = VAR_8 >> 16;

        if (VAR_8 == VAR_6) {
            VAR_11 = VAR_8 & 0xffff;
        } else {
            VAR_11 = 0;
        }

        if ((VAR_8 | 0xffff) > VAR_7) {
            VAR_12 = VAR_7 & 0xffff;

        } else {
            VAR_12 = 0xffff;
        }

        VAR_13 = (ngx_array_t *) VAR_5->high.low[VAR_9];

        if (VAR_13 == ((void*)0)) {
            VAR_13 = FUNC_0(VAR_5->temp_pool, 64,
                                 sizeof(ngx_http_geo_range_t));
            if (VAR_13 == ((void*)0)) {
                return VAR_0;
            }

            VAR_5->high.low[VAR_9] = (ngx_http_geo_range_t *) VAR_13;
        }

        VAR_10 = VAR_13->nelts;
        VAR_14 = VAR_13->elts;

        while (VAR_10) {

            VAR_10--;

            if (VAR_12 < (ngx_uint_t) VAR_14[VAR_10].start) {
                continue;
            }

            if (VAR_11 > (ngx_uint_t) VAR_14[VAR_10].end) {



                VAR_14 = FUNC_1(VAR_13);
                if (VAR_14 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_14 = VAR_13->elts;

                FUNC_3(&VAR_14[VAR_10 + 2], &VAR_14[VAR_10 + 1],
                            (VAR_13->nelts - 2 - VAR_10) * sizeof(ngx_http_geo_range_t));

                VAR_14[VAR_10 + 1].start = (u_short) VAR_11;
                VAR_14[VAR_10 + 1].end = (u_short) VAR_12;
                VAR_14[VAR_10 + 1].value = VAR_5->value;

                goto next;
            }

            if (VAR_11 == (ngx_uint_t) VAR_14[VAR_10].start
                && VAR_12 == (ngx_uint_t) VAR_14[VAR_10].end)
            {
                FUNC_2(VAR_3, VAR_4, 0,
                    "duplicate range \"%V\", value: \"%v\", old value: \"%v\"",
                    VAR_5->net, VAR_5->value, VAR_14[VAR_10].value);

                VAR_14[VAR_10].value = VAR_5->value;

                goto next;
            }

            if (VAR_11 > (ngx_uint_t) VAR_14[VAR_10].start
                && VAR_12 < (ngx_uint_t) VAR_14[VAR_10].end)
            {


                VAR_14 = FUNC_1(VAR_13);
                if (VAR_14 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_14 = FUNC_1(VAR_13);
                if (VAR_14 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_14 = VAR_13->elts;

                FUNC_3(&VAR_14[VAR_10 + 3], &VAR_14[VAR_10 + 1],
                            (VAR_13->nelts - 3 - VAR_10) * sizeof(ngx_http_geo_range_t));

                VAR_14[VAR_10 + 2].start = (u_short) (VAR_12 + 1);
                VAR_14[VAR_10 + 2].end = VAR_14[VAR_10].end;
                VAR_14[VAR_10 + 2].value = VAR_14[VAR_10].value;

                VAR_14[VAR_10 + 1].start = (u_short) VAR_11;
                VAR_14[VAR_10 + 1].end = (u_short) VAR_12;
                VAR_14[VAR_10 + 1].value = VAR_5->value;

                VAR_14[VAR_10].end = (u_short) (VAR_11 - 1);

                goto next;
            }

            if (VAR_11 == (ngx_uint_t) VAR_14[VAR_10].start
                && VAR_12 < (ngx_uint_t) VAR_14[VAR_10].end)
            {


                VAR_14 = FUNC_1(VAR_13);
                if (VAR_14 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_14 = VAR_13->elts;

                FUNC_3(&VAR_14[VAR_10 + 1], &VAR_14[VAR_10],
                            (VAR_13->nelts - 1 - VAR_10) * sizeof(ngx_http_geo_range_t));

                VAR_14[VAR_10 + 1].start = (u_short) (VAR_12 + 1);

                VAR_14[VAR_10].start = (u_short) VAR_11;
                VAR_14[VAR_10].end = (u_short) VAR_12;
                VAR_14[VAR_10].value = VAR_5->value;

                goto next;
            }

            if (VAR_11 > (ngx_uint_t) VAR_14[VAR_10].start
                && VAR_12 == (ngx_uint_t) VAR_14[VAR_10].end)
            {


                VAR_14 = FUNC_1(VAR_13);
                if (VAR_14 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_14 = VAR_13->elts;

                FUNC_3(&VAR_14[VAR_10 + 2], &VAR_14[VAR_10 + 1],
                            (VAR_13->nelts - 2 - VAR_10) * sizeof(ngx_http_geo_range_t));

                VAR_14[VAR_10 + 1].start = (u_short) VAR_11;
                VAR_14[VAR_10 + 1].end = (u_short) VAR_12;
                VAR_14[VAR_10 + 1].value = VAR_5->value;

                VAR_14[VAR_10].end = (u_short) (VAR_11 - 1);

                goto next;
            }

            VAR_11 = (ngx_uint_t) VAR_14[VAR_10].start;
            VAR_12 = (ngx_uint_t) VAR_14[VAR_10].end;

            FUNC_2(VAR_2, VAR_4, 0,
                         "range \"%V\" overlaps \"%d.%d.%d.%d-%d.%d.%d.%d\"",
                         VAR_5->net,
                         VAR_9 >> 8, VAR_9 & 0xff, VAR_11 >> 8, VAR_11 & 0xff,
                         VAR_9 >> 8, VAR_9 & 0xff, VAR_12 >> 8, VAR_12 & 0xff);

            return VAR_0;
        }



        VAR_14 = FUNC_1(VAR_13);
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        VAR_14 = VAR_13->elts;

        FUNC_3(&VAR_14[1], &VAR_14[0],
                    (VAR_13->nelts - 1) * sizeof(ngx_http_geo_range_t));

        VAR_14[0].start = (u_short) VAR_11;
        VAR_14[0].end = (u_short) VAR_12;
        VAR_14[0].value = VAR_5->value;

    next:

        if (VAR_9 == 0xffff) {
            break;
        }
    }

    return VAR_1;
}
