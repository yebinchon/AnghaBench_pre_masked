
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;

void FUNC_2(char *VAR_0)
{
    for (int VAR_1 = FUNC_1(VAR_0), VAR_2 = 0, VAR_3 = 0; VAR_2 <= VAR_1;) {
        if ((VAR_0[VAR_2] != '%') || (VAR_2 > VAR_1 - 3)) {
            VAR_0[VAR_3++] = VAR_0[VAR_2++];
            continue;
        }

        int VAR_4 = FUNC_0(VAR_0[VAR_2 + 1]),
            VAR_5 = FUNC_0(VAR_0[VAR_2 + 2]);

        if (VAR_4 >= 0 && VAR_5 >= 0) {
            VAR_0[VAR_3++] = 16 * VAR_4 + VAR_5;
            VAR_2 += 3;
        } else {
            VAR_0[VAR_3++] = VAR_0[VAR_2++];
            VAR_0[VAR_3++] = VAR_0[VAR_2++];
            VAR_0[VAR_3++] = VAR_0[VAR_2++];
        }
    }
}
