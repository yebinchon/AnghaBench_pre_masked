
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_transform {float** m; float* t; } ;



__attribute__((used)) static inline void FUNC_0(struct gl_transform VAR_0, float *VAR_1, float *VAR_2)
{
    float VAR_3 = *VAR_1, VAR_4 = *VAR_2;
    *VAR_1 = VAR_3 * VAR_0.m[0][0] + VAR_4 * VAR_0.m[0][1] + VAR_0.t[0];
    *VAR_2 = VAR_3 * VAR_0.m[1][0] + VAR_4 * VAR_0.m[1][1] + VAR_0.t[1];
}
