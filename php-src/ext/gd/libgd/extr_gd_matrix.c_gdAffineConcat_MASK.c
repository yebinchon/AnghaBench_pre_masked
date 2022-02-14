
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0 (double VAR_1[6], const double VAR_2[6], const double VAR_3[6])
{
 double VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_4 = VAR_2[0] * VAR_3[0] + VAR_2[1] * VAR_3[2];
 VAR_5 = VAR_2[0] * VAR_3[1] + VAR_2[1] * VAR_3[3];
 VAR_6 = VAR_2[2] * VAR_3[0] + VAR_2[3] * VAR_3[2];
 VAR_7 = VAR_2[2] * VAR_3[1] + VAR_2[3] * VAR_3[3];
 VAR_8 = VAR_2[4] * VAR_3[0] + VAR_2[5] * VAR_3[2] + VAR_3[4];
 VAR_9 = VAR_2[4] * VAR_3[1] + VAR_2[5] * VAR_3[3] + VAR_3[5];
 VAR_1[0] = VAR_4;
 VAR_1[1] = VAR_5;
 VAR_1[2] = VAR_6;
 VAR_1[3] = VAR_7;
 VAR_1[4] = VAR_8;
 VAR_1[5] = VAR_9;
 return VAR_0;
}
