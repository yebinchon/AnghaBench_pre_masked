
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_tags {int num_keys; char** values; int * keys; } ;
typedef int bstr ;


 scalar_t__ FUNC_0 (int ,int ) ;

char *FUNC_1(struct mp_tags *VAR_0, bstr VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_keys; VAR_2++) {
        if (FUNC_0(VAR_1, VAR_0->keys[VAR_2]) == 0)
            return VAR_0->values[VAR_2];
    }
    return ((void*)0);
}
