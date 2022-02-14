
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_3__ {int hsize; int * dns_wc_tail_hash; int temp_pool; int * dns_wc_head_hash; int * keys_hash; int dns_wc_tail; int dns_wc_head; int keys; } ;
typedef TYPE_1__ ngx_hash_keys_arrays_t ;
typedef int ngx_hash_key_t ;
typedef int ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__,int) ;
 void* FUNC_1 (int ,int) ;

ngx_int_t
FUNC_2(ngx_hash_keys_arrays_t *VAR_5, ngx_uint_t VAR_6)
{
    ngx_uint_t VAR_7;

    if (VAR_6 == VAR_3) {
        VAR_7 = 4;
        VAR_5->hsize = 107;

    } else {
        VAR_7 = VAR_1;
        VAR_5->hsize = VAR_2;
    }

    if (FUNC_0(&VAR_5->keys, VAR_5->temp_pool, VAR_7, sizeof(ngx_hash_key_t))
        != VAR_4)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_5->dns_wc_head, VAR_5->temp_pool, VAR_7,
                       sizeof(ngx_hash_key_t))
        != VAR_4)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_5->dns_wc_tail, VAR_5->temp_pool, VAR_7,
                       sizeof(ngx_hash_key_t))
        != VAR_4)
    {
        return VAR_0;
    }

    VAR_5->keys_hash = FUNC_1(VAR_5->temp_pool, sizeof(ngx_array_t) * VAR_5->hsize);
    if (VAR_5->keys_hash == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->dns_wc_head_hash = FUNC_1(VAR_5->temp_pool,
                                       sizeof(ngx_array_t) * VAR_5->hsize);
    if (VAR_5->dns_wc_head_hash == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->dns_wc_tail_hash = FUNC_1(VAR_5->temp_pool,
                                       sizeof(ngx_array_t) * VAR_5->hsize);
    if (VAR_5->dns_wc_tail_hash == ((void*)0)) {
        return VAR_0;
    }

    return VAR_4;
}
