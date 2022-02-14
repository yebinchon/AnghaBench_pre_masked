
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(int *VAR_0, int *VAR_1, int VAR_2)
{
    for (; VAR_2 > 0; VAR_2--, VAR_0++, VAR_1++) {
        if (FUNC_1(*VAR_0, *VAR_1)) {
            continue;
        }
        if (FUNC_0(*VAR_0, *VAR_1)) {
            return -1;
        }
        return 1;
    }
    return 0;
}
