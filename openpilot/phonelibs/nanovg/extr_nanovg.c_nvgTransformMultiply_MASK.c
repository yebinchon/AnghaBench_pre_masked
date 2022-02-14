
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float* VAR_0, const float* VAR_1)
{
 float VAR_2 = VAR_0[0] * VAR_1[0] + VAR_0[1] * VAR_1[2];
 float VAR_3 = VAR_0[2] * VAR_1[0] + VAR_0[3] * VAR_1[2];
 float VAR_4 = VAR_0[4] * VAR_1[0] + VAR_0[5] * VAR_1[2] + VAR_1[4];
 VAR_0[1] = VAR_0[0] * VAR_1[1] + VAR_0[1] * VAR_1[3];
 VAR_0[3] = VAR_0[2] * VAR_1[1] + VAR_0[3] * VAR_1[3];
 VAR_0[5] = VAR_0[4] * VAR_1[1] + VAR_0[5] * VAR_1[3] + VAR_1[5];
 VAR_0[0] = VAR_2;
 VAR_0[2] = VAR_3;
 VAR_0[4] = VAR_4;
}
