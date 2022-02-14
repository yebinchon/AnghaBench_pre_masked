
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_transform {int** m; int * t; } ;


 int FUNC_0 (struct gl_transform,int *,int *) ;

void FUNC_1(struct gl_transform VAR_0, struct gl_transform *VAR_1)
{
    struct gl_transform VAR_2 = *VAR_1;
    VAR_1->m[0][0] = VAR_0.m[0][0] * VAR_2.m[0][0] + VAR_0.m[0][1] * VAR_2.m[1][0];
    VAR_1->m[1][0] = VAR_0.m[1][0] * VAR_2.m[0][0] + VAR_0.m[1][1] * VAR_2.m[1][0];
    VAR_1->m[0][1] = VAR_0.m[0][0] * VAR_2.m[0][1] + VAR_0.m[0][1] * VAR_2.m[1][1];
    VAR_1->m[1][1] = VAR_0.m[1][0] * VAR_2.m[0][1] + VAR_0.m[1][1] * VAR_2.m[1][1];
    FUNC_0(VAR_0, &VAR_1->t[0], &VAR_1->t[1]);
}
