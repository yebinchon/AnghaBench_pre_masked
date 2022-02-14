
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned char *VAR_0, int VAR_1)
{
    VAR_0[0] = 0;
    for (int VAR_2 = 1; VAR_2 < VAR_1; VAR_2 *= 2) {
        int VAR_3[] = {VAR_2*VAR_1, VAR_2, VAR_2 * (VAR_1+1), 0};
        for (int VAR_4 = 0; VAR_4 < 4; VAR_4++)
            for (int VAR_5 = 0; VAR_5 < VAR_2 * VAR_1; VAR_5 += VAR_1)
                for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
                    VAR_0[VAR_6+VAR_5+VAR_3[VAR_4]] = VAR_0[VAR_6+VAR_5] * 4 + (3-VAR_4) * 256/VAR_1/VAR_1;
    }
}
