
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_tree_ctx_t ;
struct TYPE_3__ {int len; scalar_t__ data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_tree_ctx_t *VAR_2, ngx_str_t *VAR_3)
{
    if (VAR_3->len >= 5
        && FUNC_0(VAR_3->data + VAR_3->len - 5, "/temp", 5) == 0)
    {
        return VAR_0;
    }

    return VAR_1;
}
