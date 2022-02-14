
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_pool_t ;
typedef int ngx_array_t ;


 int * FUNC_0 (int *,int,int) ;
 void* FUNC_1 (int *,size_t) ;

void *
FUNC_2(ngx_pool_t *VAR_0, ngx_array_t **VAR_1, size_t VAR_2)
{
    if (*VAR_1 == ((void*)0)) {
        *VAR_1 = FUNC_0(VAR_0, 256, 1);
        if (*VAR_1 == ((void*)0)) {
            return ((void*)0);
        }
    }

    return FUNC_1(*VAR_1, VAR_2);
}
