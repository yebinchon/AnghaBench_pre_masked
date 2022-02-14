
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_tags {int num_keys; int * values; int * keys; } ;


 int FUNC_0 (struct mp_tags*,int ,int ) ;

void FUNC_1(struct mp_tags *VAR_0, struct mp_tags *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_keys; VAR_2++)
        FUNC_0(VAR_0, VAR_1->keys[VAR_2], VAR_1->values[VAR_2]);
}
