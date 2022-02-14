
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_8__ {int len; char* data; } ;
struct TYPE_11__ {TYPE_1__ value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int len; char* data; } ;
struct TYPE_10__ {int content_type_len; TYPE_2__ charset; int * content_type_lowcase; TYPE_1__ content_type; } ;
struct TYPE_12__ {TYPE_3__ headers_out; } ;
typedef TYPE_5__ ngx_http_request_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_1, ngx_table_elt_t *VAR_2,
    ngx_uint_t VAR_3)
{
    u_char *VAR_4, *VAR_5;

    VAR_1->headers_out.content_type_len = VAR_2->value.len;
    VAR_1->headers_out.content_type = VAR_2->value;
    VAR_1->headers_out.content_type_lowcase = ((void*)0);

    for (VAR_4 = VAR_2->value.data; *VAR_4; VAR_4++) {

        if (*VAR_4 != ';') {
            continue;
        }

        VAR_5 = VAR_4;

        while (*++VAR_4 == ' ') { }

        if (*VAR_4 == '\0') {
            return VAR_0;
        }

        if (FUNC_0(VAR_4, (u_char *) "charset=", 8) != 0) {
            continue;
        }

        VAR_4 += 8;

        VAR_1->headers_out.content_type_len = VAR_5 - VAR_2->value.data;

        if (*VAR_4 == '"') {
            VAR_4++;
        }

        VAR_5 = VAR_2->value.data + VAR_2->value.len;

        if (*(VAR_5 - 1) == '"') {
            VAR_5--;
        }

        VAR_1->headers_out.charset.len = VAR_5 - VAR_4;
        VAR_1->headers_out.charset.data = VAR_4;

        return VAR_0;
    }

    return VAR_0;
}
