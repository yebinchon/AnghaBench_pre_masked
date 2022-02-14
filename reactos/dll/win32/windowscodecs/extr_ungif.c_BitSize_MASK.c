
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0) {

    register int VAR_1;

    for (VAR_1 = 1; VAR_1 <= 8; VAR_1++)
        if ((1 << VAR_1) >= VAR_0)
            break;
    return (VAR_1);
}
