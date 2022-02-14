
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_5__ {scalar_t__ nelts; int size; int elts; } ;
typedef TYPE_1__ ngx_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_array_t *VAR_2, ngx_array_t *VAR_3)
{
    void *VAR_4;

    if (VAR_2->nelts == 0) {
        return VAR_1;
    }

    if (VAR_3->nelts == 0) {
        *VAR_3 = *VAR_2;
        return VAR_1;
    }

    VAR_4 = FUNC_0(VAR_3, VAR_2->nelts);
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(VAR_4, VAR_2->elts, VAR_2->size * VAR_2->nelts);

    return VAR_1;
}
