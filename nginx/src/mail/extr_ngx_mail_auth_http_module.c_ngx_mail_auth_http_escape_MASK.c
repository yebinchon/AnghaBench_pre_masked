
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int * data; scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t FUNC_0 (int *,int *,scalar_t__,int ) ;
 int * FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_pool_t *VAR_3, ngx_str_t *VAR_4, ngx_str_t *VAR_5)
{
    u_char *VAR_6;
    uintptr_t VAR_7;

    VAR_7 = FUNC_0(((void*)0), VAR_4->data, VAR_4->len, VAR_1);

    if (VAR_7 == 0) {
        *VAR_5 = *VAR_4;
        return VAR_2;
    }

    VAR_5->len = VAR_4->len + VAR_7 * 2;

    VAR_6 = FUNC_1(VAR_3, VAR_5->len);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    (void) FUNC_0(VAR_6, VAR_4->data, VAR_4->len, VAR_1);

    VAR_5->data = VAR_6;

    return VAR_2;
}
