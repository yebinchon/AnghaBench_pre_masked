
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, int VAR_1)
{
    int VAR_2;
    for (VAR_2 = VAR_1 - 1; VAR_2 >= 1; VAR_2--) {
        int VAR_3 = VAR_0[VAR_2];

        if (!VAR_3 || FUNC_0((int)VAR_3)) {
            VAR_0[VAR_2] = 0;
        }
        else {
            break;
        }
    }
}
