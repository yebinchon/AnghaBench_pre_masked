
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {void* value; } ;
typedef TYPE_2__ ngx_hash_wildcard_t ;
struct TYPE_19__ {size_t len; char* data; } ;
struct TYPE_16__ {void* value; TYPE_6__ key; scalar_t__ key_hash; } ;
typedef TYPE_3__ ngx_hash_key_t ;
struct TYPE_17__ {int * hash; TYPE_1__* pool; scalar_t__ (* key ) (char*,size_t) ;int temp_pool; } ;
typedef TYPE_4__ ngx_hash_init_t ;
struct TYPE_18__ {size_t nelts; scalar_t__ elts; } ;
typedef TYPE_5__ ngx_array_t ;
struct TYPE_14__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,size_t,int) ;
 TYPE_3__* FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_3__*,size_t) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_6__*,...) ;
 scalar_t__ FUNC_4 (char*,char*,size_t) ;
 scalar_t__ FUNC_5 (char*,size_t) ;

ngx_int_t
FUNC_6(ngx_hash_init_t *VAR_3, ngx_hash_key_t *VAR_4,
    ngx_uint_t VAR_5)
{
    size_t VAR_6, VAR_7;
    ngx_uint_t VAR_8, VAR_9, VAR_10;
    ngx_array_t VAR_11, VAR_12;
    ngx_hash_key_t *VAR_13, *VAR_14;
    ngx_hash_init_t VAR_15;
    ngx_hash_wildcard_t *VAR_16;

    if (FUNC_0(&VAR_11, VAR_3->temp_pool, VAR_5,
                       sizeof(ngx_hash_key_t))
        != VAR_2)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_12, VAR_3->temp_pool, VAR_5,
                       sizeof(ngx_hash_key_t))
        != VAR_2)
    {
        return VAR_0;
    }

    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 = VAR_8) {






        VAR_10 = 0;

        for (VAR_6 = 0; VAR_6 < VAR_4[VAR_9].key.len; VAR_6++) {
            if (VAR_4[VAR_9].key.data[VAR_6] == '.') {
                VAR_10 = 1;
                break;
            }
        }

        VAR_13 = FUNC_1(&VAR_11);
        if (VAR_13 == ((void*)0)) {
            return VAR_0;
        }

        VAR_13->key.len = VAR_6;
        VAR_13->key.data = VAR_4[VAR_9].key.data;
        VAR_13->key_hash = VAR_3->key(VAR_13->key.data, VAR_13->key.len);
        VAR_13->value = VAR_4[VAR_9].value;






        VAR_7 = VAR_6 + 1;

        if (VAR_10) {
            VAR_6++;
        }

        VAR_12.nelts = 0;

        if (VAR_4[VAR_9].key.len != VAR_6) {
            VAR_14 = FUNC_1(&VAR_12);
            if (VAR_14 == ((void*)0)) {
                return VAR_0;
            }

            VAR_14->key.len = VAR_4[VAR_9].key.len - VAR_6;
            VAR_14->key.data = VAR_4[VAR_9].key.data + VAR_6;
            VAR_14->key_hash = 0;
            VAR_14->value = VAR_4[VAR_9].value;





        }

        for (VAR_8 = VAR_9 + 1; VAR_8 < VAR_5; VAR_8++) {
            if (FUNC_4(VAR_4[VAR_9].key.data, VAR_4[VAR_8].key.data, VAR_6) != 0) {
                break;
            }

            if (!VAR_10
                && VAR_4[VAR_8].key.len > VAR_6
                && VAR_4[VAR_8].key.data[VAR_6] != '.')
            {
                break;
            }

            VAR_14 = FUNC_1(&VAR_12);
            if (VAR_14 == ((void*)0)) {
                return VAR_0;
            }

            VAR_14->key.len = VAR_4[VAR_8].key.len - VAR_7;
            VAR_14->key.data = VAR_4[VAR_8].key.data + VAR_7;
            VAR_14->key_hash = 0;
            VAR_14->value = VAR_4[VAR_8].value;





        }

        if (VAR_12.nelts) {

            VAR_15 = *VAR_3;
            VAR_15.hash = ((void*)0);

            if (FUNC_6(&VAR_15, (ngx_hash_key_t *) VAR_12.elts,
                                       VAR_12.nelts)
                != VAR_2)
            {
                return VAR_0;
            }

            VAR_16 = (ngx_hash_wildcard_t *) VAR_15.hash;

            if (VAR_4[VAR_9].key.len == VAR_6) {
                VAR_16->value = VAR_4[VAR_9].value;
            }

            VAR_13->value = (void *) ((uintptr_t) VAR_16 | (VAR_10 ? 3 : 2));

        } else if (VAR_10) {
            VAR_13->value = (void *) ((uintptr_t) VAR_13->value | 1);
        }
    }

    if (FUNC_2(VAR_3, (ngx_hash_key_t *) VAR_11.elts,
                      VAR_11.nelts)
        != VAR_2)
    {
        return VAR_0;
    }

    return VAR_2;
}
