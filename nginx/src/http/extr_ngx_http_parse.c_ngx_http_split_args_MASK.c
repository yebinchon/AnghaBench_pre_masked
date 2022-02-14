
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_http_request_t ;


 int * FUNC_0 (int *,int *,char) ;

void
FUNC_1(ngx_http_request_t *VAR_0, ngx_str_t *VAR_1, ngx_str_t *VAR_2)
{
    u_char *VAR_3, *VAR_4;

    VAR_4 = VAR_1->data + VAR_1->len;

    VAR_3 = FUNC_0(VAR_1->data, VAR_4, '?');

    if (VAR_3) {
        VAR_1->len = VAR_3 - VAR_1->data;
        VAR_3++;
        VAR_2->len = VAR_4 - VAR_3;
        VAR_2->data = VAR_3;

    } else {
        VAR_2->len = 0;
    }
}
