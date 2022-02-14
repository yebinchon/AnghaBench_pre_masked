
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;


 int FUNC_0 (float) ;
 float FUNC_1 (float) ;

int FUNC_2(integer *VAR_0, real *VAR_1, real *VAR_2, real *VAR_3,
 real *VAR_4, real *VAR_5, real *VAR_6)
{

    real VAR_7;


    static real VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    --VAR_6;
    --VAR_3;
    --VAR_2;
    --VAR_1;


    VAR_11 = VAR_1[2] - VAR_1[1];
    VAR_13 = VAR_11 * (VAR_1[2] + VAR_1[1]);
    if (*VAR_0 == 1) {
 VAR_10 = *VAR_4 * 4.f * (VAR_2[2] * VAR_2[2] / (VAR_1[1] + VAR_1[2] * 3.f) - VAR_2[1] *
   VAR_2[1] / (VAR_1[1] * 3.f + VAR_1[2])) / VAR_11 + 1.f;
 if (VAR_10 > 0.f) {
     VAR_8 = VAR_13 + *VAR_4 * (VAR_2[1] * VAR_2[1] + VAR_2[2] * VAR_2[2]);
     VAR_9 = *VAR_4 * VAR_2[1] * VAR_2[1] * VAR_13;







     VAR_12 = VAR_9 * 2.f / (VAR_8 + FUNC_1((VAR_7 = VAR_8 * VAR_8 - VAR_9 * 4.f, FUNC_0(VAR_7))
      ));



     VAR_12 /= VAR_1[1] + FUNC_1(VAR_1[1] * VAR_1[1] + VAR_12);
     *VAR_5 = VAR_1[1] + VAR_12;
     VAR_3[1] = -VAR_12;
     VAR_3[2] = VAR_11 - VAR_12;
     VAR_6[1] = VAR_1[1] * 2.f + VAR_12;
     VAR_6[2] = VAR_1[1] + VAR_12 + VAR_1[2];




 } else {
     VAR_8 = -VAR_13 + *VAR_4 * (VAR_2[1] * VAR_2[1] + VAR_2[2] * VAR_2[2]);
     VAR_9 = *VAR_4 * VAR_2[2] * VAR_2[2] * VAR_13;



     if (VAR_8 > 0.f) {
  VAR_12 = VAR_9 * -2.f / (VAR_8 + FUNC_1(VAR_8 * VAR_8 + VAR_9 * 4.f));
     } else {
  VAR_12 = (VAR_8 - FUNC_1(VAR_8 * VAR_8 + VAR_9 * 4.f)) / 2.f;
     }



     VAR_12 /= VAR_1[2] + FUNC_1((VAR_7 = VAR_1[2] * VAR_1[2] + VAR_12, FUNC_0(VAR_7)));
     *VAR_5 = VAR_1[2] + VAR_12;
     VAR_3[1] = -(VAR_11 + VAR_12);
     VAR_3[2] = -VAR_12;
     VAR_6[1] = VAR_1[1] + VAR_12 + VAR_1[2];
     VAR_6[2] = VAR_1[2] * 2.f + VAR_12;




 }





    } else {



 VAR_8 = -VAR_13 + *VAR_4 * (VAR_2[1] * VAR_2[1] + VAR_2[2] * VAR_2[2]);
 VAR_9 = *VAR_4 * VAR_2[2] * VAR_2[2] * VAR_13;



 if (VAR_8 > 0.f) {
     VAR_12 = (VAR_8 + FUNC_1(VAR_8 * VAR_8 + VAR_9 * 4.f)) / 2.f;
 } else {
     VAR_12 = VAR_9 * 2.f / (-VAR_8 + FUNC_1(VAR_8 * VAR_8 + VAR_9 * 4.f));
 }



 VAR_12 /= VAR_1[2] + FUNC_1(VAR_1[2] * VAR_1[2] + VAR_12);
 *VAR_5 = VAR_1[2] + VAR_12;
 VAR_3[1] = -(VAR_11 + VAR_12);
 VAR_3[2] = -VAR_12;
 VAR_6[1] = VAR_1[1] + VAR_12 + VAR_1[2];
 VAR_6[2] = VAR_1[2] * 2.f + VAR_12;







    }
    return 0;



}
