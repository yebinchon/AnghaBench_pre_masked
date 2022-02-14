
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float VAR_0[3][3], float VAR_1[3][3])
{
    float VAR_2 = VAR_0[0][0], VAR_3 = VAR_0[0][1], VAR_4 = VAR_0[0][2],
          VAR_5 = VAR_0[1][0], VAR_6 = VAR_0[1][1], VAR_7 = VAR_0[1][2],
          VAR_8 = VAR_0[2][0], VAR_9 = VAR_0[2][1], VAR_10 = VAR_0[2][2];

    for (int VAR_11 = 0; VAR_11 < 3; VAR_11++) {
        VAR_0[0][VAR_11] = VAR_2 * VAR_1[0][VAR_11] + VAR_3 * VAR_1[1][VAR_11] + VAR_4 * VAR_1[2][VAR_11];
        VAR_0[1][VAR_11] = VAR_5 * VAR_1[0][VAR_11] + VAR_6 * VAR_1[1][VAR_11] + VAR_7 * VAR_1[2][VAR_11];
        VAR_0[2][VAR_11] = VAR_8 * VAR_1[0][VAR_11] + VAR_9 * VAR_1[1][VAR_11] + VAR_10 * VAR_1[2][VAR_11];
    }
}
