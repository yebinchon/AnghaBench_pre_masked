
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int key_val_count; TYPE_1__* key_val; } ;
typedef TYPE_2__ opj_tls_t ;
struct TYPE_4__ {int key; void* value; } ;



void* FUNC_0(opj_tls_t* VAR_0, int VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->key_val_count; VAR_2++) {
        if (VAR_0->key_val[VAR_2].key == VAR_1) {
            return VAR_0->key_val[VAR_2].value;
        }
    }
    return ((void*)0);
}
