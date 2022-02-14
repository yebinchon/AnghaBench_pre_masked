
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_vo_opts {int panscan; } ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct mp_vo_opts *VAR_0,
                                int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                                int VAR_6, int VAR_7, double VAR_8,
                                int *VAR_9, int *VAR_10)
{
    VAR_1 *= VAR_8;

    int VAR_11 = VAR_6;
    int VAR_12 = (float)VAR_6 / VAR_3 * VAR_4 / VAR_8;
    if (VAR_12 > VAR_7 || VAR_12 < VAR_2) {
        int VAR_13 = (float)VAR_7 / VAR_4 * VAR_3 * VAR_8;
        if (VAR_13 <= VAR_6) {
            VAR_12 = VAR_7;
            VAR_11 = VAR_13;
        }
    }

    int VAR_14 = VAR_7 - VAR_12;
    double VAR_15 = VAR_11 / (double)FUNC_0(VAR_12, 1);
    double VAR_16 = 1;
    if (VAR_14 == 0) {
        VAR_14 = VAR_6 - VAR_11;
        VAR_15 = 1;
        VAR_16 = VAR_12 / (double)FUNC_0(VAR_11, 1);
    }

    if (VAR_5) {
        VAR_14 = 0;
        if (VAR_5 != 2 || (VAR_3 <= VAR_6 && VAR_4 <= VAR_7)) {
            VAR_11 = VAR_3 * VAR_8;
            VAR_12 = VAR_4;
        }
    }

    *VAR_9 = VAR_11 + VAR_14 * VAR_0->panscan * VAR_15;
    *VAR_10 = VAR_12 + VAR_14 * VAR_0->panscan * VAR_16;
}
