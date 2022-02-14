
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_4__ {int data; int len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef size_t ngx_err_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int ,size_t) ;
 size_t FUNC_1 (size_t,int ) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ VAR_2 ;

u_char *
FUNC_2(ngx_err_t VAR_3, u_char *VAR_4, size_t VAR_5)
{
    ngx_str_t *VAR_6;

    VAR_6 = ((ngx_uint_t) VAR_3 < VAR_0) ? &VAR_1[VAR_3]:
                                              &VAR_2;
    VAR_5 = FUNC_1(VAR_5, VAR_6->len);

    return FUNC_0(VAR_4, VAR_6->data, VAR_5);
}
