
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {int len; int* start; } ;



int FUNC_0(struct bstr VAR_0, int VAR_1)
{
    for (int VAR_2 = VAR_0.len - 1; VAR_2 >= 0; VAR_2--)
        if (VAR_0.start[VAR_2] == VAR_1)
            return VAR_2;
    return -1;
}
