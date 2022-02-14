
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_9__ {char* data; int len; } ;
struct TYPE_12__ {TYPE_1__ value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int msie; int msie6; int opera; int gecko; int chrome; int safari; int konqueror; TYPE_4__* user_agent; } ;
struct TYPE_13__ {TYPE_3__ headers_in; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_14__ {TYPE_2__* ssl; } ;
struct TYPE_10__ {int no_send_shutdown; } ;


 int VAR_0 ;
 TYPE_8__* VAR_1 ;
 char* FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_table_elt_t *VAR_3,
    ngx_uint_t VAR_4)
{
    u_char *VAR_5, *VAR_6;

    if (VAR_2->headers_in.user_agent) {
        return VAR_0;
    }

    VAR_2->headers_in.user_agent = VAR_3;



    VAR_5 = VAR_3->value.data;

    VAR_6 = FUNC_0(VAR_5, "MSIE ", 5 - 1);

    if (VAR_6 && VAR_6 + 7 < VAR_5 + VAR_3->value.len) {

        VAR_2->headers_in.msie = 1;

        if (VAR_6[6] == '.') {

            switch (VAR_6[5]) {
            case '4':
            case '5':
                VAR_2->headers_in.msie6 = 1;
                break;
            case '6':
                if (FUNC_0(VAR_6 + 8, "SV1", 3 - 1) == ((void*)0)) {
                    VAR_2->headers_in.msie6 = 1;
                }
                break;
            }
        }







    }

    if (FUNC_0(VAR_5, "Opera", 5 - 1)) {
        VAR_2->headers_in.opera = 1;
        VAR_2->headers_in.msie = 0;
        VAR_2->headers_in.msie6 = 0;
    }

    if (!VAR_2->headers_in.msie && !VAR_2->headers_in.opera) {

        if (FUNC_0(VAR_5, "Gecko/", 6 - 1)) {
            VAR_2->headers_in.gecko = 1;

        } else if (FUNC_0(VAR_5, "Chrome/", 7 - 1)) {
            VAR_2->headers_in.chrome = 1;

        } else if (FUNC_0(VAR_5, "Safari/", 7 - 1)
                   && FUNC_0(VAR_5, "Mac OS X", 8 - 1))
        {
            VAR_2->headers_in.safari = 1;

        } else if (FUNC_0(VAR_5, "Konqueror", 9 - 1)) {
            VAR_2->headers_in.konqueror = 1;
        }
    }

    return VAR_0;
}
