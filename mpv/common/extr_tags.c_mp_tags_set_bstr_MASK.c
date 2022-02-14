
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_tags {int num_keys; void** values; void** keys; } ;
typedef int bstr ;


 int FUNC_0 (struct mp_tags*,void**,int) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 void* FUNC_2 (struct mp_tags*,int ) ;
 int FUNC_3 (void*) ;

void FUNC_4(struct mp_tags *VAR_0, bstr VAR_1, bstr VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_keys; VAR_3++) {
        if (FUNC_1(VAR_1, VAR_0->keys[VAR_3]) == 0) {
            FUNC_3(VAR_0->values[VAR_3]);
            VAR_0->values[VAR_3] = FUNC_2(VAR_0, VAR_2);
            return;
        }
    }

    FUNC_0(VAR_0, VAR_0->keys, VAR_0->num_keys + 1);
    FUNC_0(VAR_0, VAR_0->values, VAR_0->num_keys + 1);
    VAR_0->keys[VAR_0->num_keys] = FUNC_2(VAR_0, VAR_1);
    VAR_0->values[VAR_0->num_keys] = FUNC_2(VAR_0, VAR_2);
    VAR_0->num_keys++;
}
