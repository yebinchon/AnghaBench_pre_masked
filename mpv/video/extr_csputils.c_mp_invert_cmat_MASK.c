
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmat {int** m; int* c; } ;


 int FUNC_0 (int**) ;

void FUNC_1(struct mp_cmat *VAR_0, struct mp_cmat *VAR_1)
{
    *VAR_0 = *VAR_1;
    FUNC_0(VAR_0->m);






    VAR_0->c[0] = -(VAR_0->m[0][0] * VAR_1->c[0] + VAR_0->m[0][1] * VAR_1->c[1] + VAR_0->m[0][2] * VAR_1->c[2]);
    VAR_0->c[1] = -(VAR_0->m[1][0] * VAR_1->c[0] + VAR_0->m[1][1] * VAR_1->c[1] + VAR_0->m[1][2] * VAR_1->c[2]);
    VAR_0->c[2] = -(VAR_0->m[2][0] * VAR_1->c[0] + VAR_0->m[2][1] * VAR_1->c[1] + VAR_0->m[2][2] * VAR_1->c[2]);
}
