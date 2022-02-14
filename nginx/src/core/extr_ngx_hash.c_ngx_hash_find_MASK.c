
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_5__ {size_t size; TYPE_2__** buckets; } ;
typedef TYPE_1__ ngx_hash_t ;
struct TYPE_6__ {void* value; int len; scalar_t__* name; } ;
typedef TYPE_2__ ngx_hash_elt_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*,size_t,scalar_t__*) ;

void *
FUNC_2(ngx_hash_t *VAR_2, ngx_uint_t VAR_3, u_char *VAR_4, size_t VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_hash_elt_t *VAR_7;





    VAR_7 = VAR_2->buckets[VAR_3 % VAR_2->size];

    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    while (VAR_7->value) {
        if (VAR_5 != (size_t) VAR_7->len) {
            goto next;
        }

        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            if (VAR_4[VAR_6] != VAR_7->name[VAR_6]) {
                goto next;
            }
        }

        return VAR_7->value;

    next:

        VAR_7 = (ngx_hash_elt_t *) FUNC_0(&VAR_7->name[0] + VAR_7->len,
                                               sizeof(void *));
        continue;
    }

    return ((void*)0);
}
