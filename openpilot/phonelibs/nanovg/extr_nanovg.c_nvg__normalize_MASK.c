
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

__attribute__((used)) static float FUNC_1(float *VAR_0, float* VAR_1)
{
 float VAR_2 = FUNC_0((*VAR_0)*(*VAR_0) + (*VAR_1)*(*VAR_1));
 if (VAR_2 > 1e-6f) {
  float VAR_3 = 1.0f / VAR_2;
  *VAR_0 *= VAR_3;
  *VAR_1 *= VAR_3;
 }
 return VAR_2;
}
