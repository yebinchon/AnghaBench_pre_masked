
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_10__ {size_t len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {size_t nregex; TYPE_4__* regex; int hash; } ;
typedef TYPE_3__ ngx_http_map_t ;
struct TYPE_13__ {void* value; int regex; } ;
typedef TYPE_4__ ngx_http_map_regex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *,size_t,int *,size_t) ;
 size_t FUNC_1 (int *,int ,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,TYPE_1__*) ;
 int * FUNC_3 (int ,size_t) ;

void *
FUNC_4(ngx_http_request_t *VAR_2, ngx_http_map_t *VAR_3, ngx_str_t *VAR_4)
{
    void *VAR_5;
    u_char *VAR_6;
    size_t VAR_7;
    ngx_uint_t VAR_8;

    VAR_7 = VAR_4->len;

    if (VAR_7) {
        VAR_6 = FUNC_3(VAR_2->pool, VAR_7);
        if (VAR_6 == ((void*)0)) {
            return ((void*)0);
        }

    } else {
        VAR_6 = ((void*)0);
    }

    VAR_8 = FUNC_1(VAR_6, VAR_4->data, VAR_7);

    VAR_5 = FUNC_0(&VAR_3->hash, VAR_8, VAR_6, VAR_7);
    if (VAR_5) {
        return VAR_5;
    }
    return ((void*)0);
}
