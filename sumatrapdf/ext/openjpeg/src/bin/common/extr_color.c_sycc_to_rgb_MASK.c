
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                        int *VAR_5, int *VAR_6, int *VAR_7)
{
    int VAR_8, VAR_9, VAR_10;

    VAR_3 -= VAR_0;
    VAR_4 -= VAR_0;
    VAR_8 = VAR_2 + (int)(1.402 * (float)VAR_4);
    if (VAR_8 < 0) {
        VAR_8 = 0;
    } else if (VAR_8 > VAR_1) {
        VAR_8 = VAR_1;
    }
    *VAR_5 = VAR_8;

    VAR_9 = VAR_2 - (int)(0.344 * (float)VAR_3 + 0.714 * (float)VAR_4);
    if (VAR_9 < 0) {
        VAR_9 = 0;
    } else if (VAR_9 > VAR_1) {
        VAR_9 = VAR_1;
    }
    *VAR_6 = VAR_9;

    VAR_10 = VAR_2 + (int)(1.772 * (float)VAR_3);
    if (VAR_10 < 0) {
        VAR_10 = 0;
    } else if (VAR_10 > VAR_1) {
        VAR_10 = VAR_1;
    }
    *VAR_7 = VAR_10;
}
