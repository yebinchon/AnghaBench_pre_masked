
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_0 (double VAR_2[6], const double VAR_3[6])
{
 double VAR_4 = (VAR_3[0] * VAR_3[3] - VAR_3[1] * VAR_3[2]);

 if (VAR_4 <= 0.0) {
  return VAR_0;
 }

 VAR_4 = 1.0 / VAR_4;
 VAR_2[0] = VAR_3[3] * VAR_4;
 VAR_2[1] = -VAR_3[1] * VAR_4;
 VAR_2[2] = -VAR_3[2] * VAR_4;
 VAR_2[3] = VAR_3[0] * VAR_4;
 VAR_2[4] = -VAR_3[4] * VAR_2[0] - VAR_3[5] * VAR_2[2];
 VAR_2[5] = -VAR_3[4] * VAR_2[1] - VAR_3[5] * VAR_2[3];
 return VAR_1;
}
