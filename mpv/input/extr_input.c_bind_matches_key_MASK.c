
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_bind {int num_keys; int const* keys; } ;



__attribute__((used)) static bool FUNC_0(struct cmd_bind *VAR_0, int VAR_1, const int *VAR_2)
{
    if (VAR_0->num_keys != VAR_1)
        return 0;
    for (int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if (VAR_0->keys[VAR_3] != VAR_2[VAR_3])
            return 0;
    }
    return 1;
}
