
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_4__ {size_t nelts; TYPE_1__* elts; } ;
typedef TYPE_2__ ngx_array_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
    ngx_array_t *VAR_1 = VAR_0;

    ngx_str_t *VAR_2;
    ngx_uint_t VAR_3;

    VAR_2 = VAR_1->elts;

    for (VAR_3 = 0; VAR_3 < VAR_1->nelts; VAR_3++) {
        FUNC_0(VAR_2[VAR_3].data, VAR_2[VAR_3].len);
    }
}
