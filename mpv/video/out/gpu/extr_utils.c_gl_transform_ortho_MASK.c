
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_transform {float** m; float* t; } ;



void FUNC_0(struct gl_transform *VAR_0, float VAR_1, float VAR_2,
                        float VAR_3, float VAR_4)
{
    if (VAR_4 < VAR_3) {
        float VAR_5 = VAR_3;
        VAR_3 = VAR_5 - VAR_4;
        VAR_4 = VAR_5;
    }

    VAR_0->m[0][0] = 2.0f / (VAR_2 - VAR_1);
    VAR_0->m[0][1] = 0.0f;
    VAR_0->m[1][0] = 0.0f;
    VAR_0->m[1][1] = 2.0f / (VAR_4 - VAR_3);
    VAR_0->t[0] = -(VAR_2 + VAR_1) / (VAR_2 - VAR_1);
    VAR_0->t[1] = -(VAR_4 + VAR_3) / (VAR_4 - VAR_3);
}
