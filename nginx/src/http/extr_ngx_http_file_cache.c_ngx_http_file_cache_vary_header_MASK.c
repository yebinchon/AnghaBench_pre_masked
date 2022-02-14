
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_14__ {char* data; size_t len; } ;
struct TYPE_13__ {int len; char* data; } ;
struct TYPE_15__ {scalar_t__ hash; TYPE_4__ value; TYPE_3__ key; } ;
typedef TYPE_5__ ngx_table_elt_t ;
struct TYPE_16__ {int len; char* data; } ;
typedef TYPE_6__ ngx_str_t ;
typedef int ngx_md5_t ;
struct TYPE_17__ {size_t nelts; TYPE_5__* elts; struct TYPE_17__* next; } ;
typedef TYPE_7__ ngx_list_part_t ;
struct TYPE_11__ {TYPE_7__ part; } ;
struct TYPE_12__ {TYPE_1__ headers; } ;
struct TYPE_18__ {TYPE_2__ headers_in; } ;
typedef TYPE_8__ ngx_http_request_t ;


 int FUNC_0 (int *,char*,size_t) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(ngx_http_request_t *VAR_0, ngx_md5_t *VAR_1,
    ngx_str_t *VAR_2)
{
    size_t VAR_3;
    u_char *VAR_4, *VAR_5, *VAR_6;
    ngx_uint_t VAR_7, VAR_8, VAR_9;
    ngx_list_part_t *VAR_10;
    ngx_table_elt_t *VAR_11;

    VAR_8 = 0;
    VAR_9 = 0;

    if (VAR_2->len == sizeof("Accept-Charset") - 1
        && FUNC_1(VAR_2->data, (u_char *) "Accept-Charset",
                           sizeof("Accept-Charset") - 1) == 0)
    {
        VAR_9 = 1;

    } else if (VAR_2->len == sizeof("Accept-Encoding") - 1
        && FUNC_1(VAR_2->data, (u_char *) "Accept-Encoding",
                           sizeof("Accept-Encoding") - 1) == 0)
    {
        VAR_9 = 1;

    } else if (VAR_2->len == sizeof("Accept-Language") - 1
        && FUNC_1(VAR_2->data, (u_char *) "Accept-Language",
                           sizeof("Accept-Language") - 1) == 0)
    {
        VAR_9 = 1;
    }

    VAR_10 = &VAR_0->headers_in.headers.part;
    VAR_11 = VAR_10->elts;

    for (VAR_7 = 0; ; VAR_7++) {

        if (VAR_7 >= VAR_10->nelts) {
            if (VAR_10->next == ((void*)0)) {
                break;
            }

            VAR_10 = VAR_10->next;
            VAR_11 = VAR_10->elts;
            VAR_7 = 0;
        }

        if (VAR_11[VAR_7].hash == 0) {
            continue;
        }

        if (VAR_11[VAR_7].key.len != VAR_2->len) {
            continue;
        }

        if (FUNC_1(VAR_11[VAR_7].key.data, VAR_2->data, VAR_2->len) != 0) {
            continue;
        }

        if (!VAR_9) {

            if (VAR_8) {
                FUNC_0(VAR_1, (u_char *) ",", sizeof(",") - 1);
            }

            FUNC_0(VAR_1, VAR_11[VAR_7].value.data, VAR_11[VAR_7].value.len);

            VAR_8 = 1;

            continue;
        }



        VAR_4 = VAR_11[VAR_7].value.data;
        VAR_6 = VAR_4 + VAR_11[VAR_7].value.len;

        while (VAR_4 < VAR_6) {

            while (VAR_4 < VAR_6 && (*VAR_4 == ' ' || *VAR_4 == ',')) { VAR_4++; }

            VAR_5 = VAR_4;

            while (VAR_4 < VAR_6 && *VAR_4 != ',' && *VAR_4 != ' ') { VAR_4++; }

            VAR_3 = VAR_4 - VAR_5;

            if (VAR_3 == 0) {
                break;
            }

            if (VAR_8) {
                FUNC_0(VAR_1, (u_char *) ",", sizeof(",") - 1);
            }

            FUNC_0(VAR_1, VAR_5, VAR_3);

            VAR_8 = 1;
        }
    }
}
