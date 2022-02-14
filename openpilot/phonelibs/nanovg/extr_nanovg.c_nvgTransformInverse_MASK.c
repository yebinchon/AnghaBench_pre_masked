
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*) ;

int FUNC_1(float* VAR_0, const float* VAR_1)
{
 double VAR_2, VAR_3 = (double)VAR_1[0] * VAR_1[3] - (double)VAR_1[2] * VAR_1[1];
 if (VAR_3 > -1e-6 && VAR_3 < 1e-6) {
  FUNC_0(VAR_0);
  return 0;
 }
 VAR_2 = 1.0 / VAR_3;
 VAR_0[0] = (float)(VAR_1[3] * VAR_2);
 VAR_0[2] = (float)(-VAR_1[2] * VAR_2);
 VAR_0[4] = (float)(((double)VAR_1[2] * VAR_1[5] - (double)VAR_1[3] * VAR_1[4]) * VAR_2);
 VAR_0[1] = (float)(-VAR_1[1] * VAR_2);
 VAR_0[3] = (float)(VAR_1[0] * VAR_2);
 VAR_0[5] = (float)(((double)VAR_1[1] * VAR_1[4] - (double)VAR_1[0] * VAR_1[5]) * VAR_2);
 return 1;
}
