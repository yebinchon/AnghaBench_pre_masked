
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,float const*,int) ;
 int FUNC_1 (float*,float*) ;

void FUNC_2(float* VAR_0, const float* VAR_1)
{
 float VAR_2[6];
 FUNC_0(VAR_2, VAR_1, sizeof(float)*6);
 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_0, VAR_2, sizeof(float)*6);
}
