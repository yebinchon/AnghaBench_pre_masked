
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key_val_count; struct TYPE_4__* key_val; int value; int (* opj_free_func ) (int ) ;} ;
typedef TYPE_1__ opj_tls_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(opj_tls_t* VAR_0)
{
    int VAR_1;
    if (!VAR_0) {
        return;
    }
    for (VAR_1 = 0; VAR_1 < VAR_0->key_val_count; VAR_1++) {
        if (VAR_0->key_val[VAR_1].opj_free_func) {
            VAR_0->key_val[VAR_1].opj_free_func(VAR_0->key_val[VAR_1].value);
        }
    }
    FUNC_0(VAR_0->key_val);
    FUNC_0(VAR_0);
}
