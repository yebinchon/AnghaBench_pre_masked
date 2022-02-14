
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_tags {int num_keys; void** values; void** keys; } ;


 int FUNC_0 (struct mp_tags*,void**,int) ;
 int FUNC_1 (struct mp_tags*) ;
 void* FUNC_2 (struct mp_tags*,void*) ;

void FUNC_3(struct mp_tags *VAR_0, struct mp_tags *VAR_1)
{
    FUNC_1(VAR_0);
    FUNC_0(VAR_0, VAR_0->keys, VAR_1->num_keys);
    FUNC_0(VAR_0, VAR_0->values, VAR_1->num_keys);
    VAR_0->num_keys = VAR_1->num_keys;
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_keys; VAR_2++) {
        VAR_0->keys[VAR_2] = FUNC_2(VAR_0, VAR_1->keys[VAR_2]);
        VAR_0->values[VAR_2] = FUNC_2(VAR_0, VAR_1->values[VAR_2]);
    }
}
