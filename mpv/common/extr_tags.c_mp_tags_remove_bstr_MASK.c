
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_tags {int num_keys; int * values; int * keys; } ;
typedef int bstr ;


 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mp_tags *VAR_0, bstr VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_keys; VAR_2++) {
        if (FUNC_1(VAR_1, VAR_0->keys[VAR_2]) == 0) {
            FUNC_2(VAR_0->keys[VAR_2]);
            FUNC_2(VAR_0->values[VAR_2]);
            int VAR_3 = VAR_0->num_keys;
            FUNC_0(VAR_0->keys, VAR_3, VAR_2);
            FUNC_0(VAR_0->values, VAR_0->num_keys, VAR_2);
        }
    }
}
