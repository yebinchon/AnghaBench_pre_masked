
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmat {double* c; int** m; } ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (double) ;

void FUNC_2(struct mp_cmat *VAR_0, int VAR_1, int VAR_2[3],
                                               int VAR_3, int VAR_4[3])
{
    for (int VAR_5 = 0; VAR_5 < 3; VAR_5++) {
        double VAR_6 = VAR_0->c[VAR_5];
        for (int VAR_7 = 0; VAR_7 < 3; VAR_7++)
            VAR_6 += VAR_0->m[VAR_5][VAR_7] * VAR_2[VAR_7] / ((1 << VAR_1) - 1);
        int VAR_8 = FUNC_1(VAR_6 * ((1 << VAR_3) - 1));
        VAR_4[VAR_5] = FUNC_0(VAR_8, 0, (1 << VAR_3) - 1);
    }
}
