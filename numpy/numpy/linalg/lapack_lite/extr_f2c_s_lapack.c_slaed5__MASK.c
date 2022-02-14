
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;


 int FUNC_0 (float) ;
 float FUNC_1 (float) ;

int FUNC_2(integer *VAR_0, real *VAR_1, real *VAR_2, real *VAR_3,
 real *VAR_4, real *VAR_5)
{

    real VAR_6;


    static real VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    --VAR_3;
    --VAR_2;
    --VAR_1;


    VAR_10 = VAR_1[2] - VAR_1[1];
    if (*VAR_0 == 1) {
 VAR_9 = *VAR_4 * 2.f * (VAR_2[2] * VAR_2[2] - VAR_2[1] * VAR_2[1]) / VAR_10 + 1.f;
 if (VAR_9 > 0.f) {
     VAR_7 = VAR_10 + *VAR_4 * (VAR_2[1] * VAR_2[1] + VAR_2[2] * VAR_2[2]);
     VAR_8 = *VAR_4 * VAR_2[1] * VAR_2[1] * VAR_10;



     VAR_11 = VAR_8 * 2.f / (VAR_7 + FUNC_1((VAR_6 = VAR_7 * VAR_7 - VAR_8 * 4.f, FUNC_0(VAR_6))
      ));
     *VAR_5 = VAR_1[1] + VAR_11;
     VAR_3[1] = -VAR_2[1] / VAR_11;
     VAR_3[2] = VAR_2[2] / (VAR_10 - VAR_11);
 } else {
     VAR_7 = -VAR_10 + *VAR_4 * (VAR_2[1] * VAR_2[1] + VAR_2[2] * VAR_2[2]);
     VAR_8 = *VAR_4 * VAR_2[2] * VAR_2[2] * VAR_10;
     if (VAR_7 > 0.f) {
  VAR_11 = VAR_8 * -2.f / (VAR_7 + FUNC_1(VAR_7 * VAR_7 + VAR_8 * 4.f));
     } else {
  VAR_11 = (VAR_7 - FUNC_1(VAR_7 * VAR_7 + VAR_8 * 4.f)) / 2.f;
     }
     *VAR_5 = VAR_1[2] + VAR_11;
     VAR_3[1] = -VAR_2[1] / (VAR_10 + VAR_11);
     VAR_3[2] = -VAR_2[2] / VAR_11;
 }
 VAR_12 = FUNC_1(VAR_3[1] * VAR_3[1] + VAR_3[2] * VAR_3[2]);
 VAR_3[1] /= VAR_12;
 VAR_3[2] /= VAR_12;
    } else {



 VAR_7 = -VAR_10 + *VAR_4 * (VAR_2[1] * VAR_2[1] + VAR_2[2] * VAR_2[2]);
 VAR_8 = *VAR_4 * VAR_2[2] * VAR_2[2] * VAR_10;
 if (VAR_7 > 0.f) {
     VAR_11 = (VAR_7 + FUNC_1(VAR_7 * VAR_7 + VAR_8 * 4.f)) / 2.f;
 } else {
     VAR_11 = VAR_8 * 2.f / (-VAR_7 + FUNC_1(VAR_7 * VAR_7 + VAR_8 * 4.f));
 }
 *VAR_5 = VAR_1[2] + VAR_11;
 VAR_3[1] = -VAR_2[1] / (VAR_10 + VAR_11);
 VAR_3[2] = -VAR_2[2] / VAR_11;
 VAR_12 = FUNC_1(VAR_3[1] * VAR_3[1] + VAR_3[2] * VAR_3[2]);
 VAR_3[1] /= VAR_12;
 VAR_3[2] /= VAR_12;
    }
    return 0;



}
