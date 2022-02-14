
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float VAR_0[3], float VAR_1[3], float VAR_2[3])
{
    VAR_2[0] = VAR_0[1]*VAR_1[2] - VAR_0[2]*VAR_1[1];
    VAR_2[1] = VAR_0[2]*VAR_1[0] - VAR_0[0]*VAR_1[2];
    VAR_2[2] = VAR_0[0]*VAR_1[1] - VAR_0[1]*VAR_1[0];
}
