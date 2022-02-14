
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2(integer *VAR_0, doublereal *VAR_1, doublereal *VAR_2,
 doublereal *VAR_3, doublereal *VAR_4, doublereal *VAR_5, doublereal *
 VAR_6)
{

    doublereal VAR_7;


    static doublereal VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    --VAR_6;
    --VAR_3;
    --VAR_2;
    --VAR_1;


    VAR_11 = VAR_1[2] - VAR_1[1];
    VAR_13 = VAR_11 * (VAR_1[2] + VAR_1[1]);
    if (*VAR_0 == 1) {
 VAR_10 = *VAR_4 * 4. * (VAR_2[2] * VAR_2[2] / (VAR_1[1] + VAR_1[2] * 3.) - VAR_2[1] *
  VAR_2[1] / (VAR_1[1] * 3. + VAR_1[2])) / VAR_11 + 1.;
 if (VAR_10 > 0.) {
     VAR_8 = VAR_13 + *VAR_4 * (VAR_2[1] * VAR_2[1] + VAR_2[2] * VAR_2[2]);
     VAR_9 = *VAR_4 * VAR_2[1] * VAR_2[1] * VAR_13;







     VAR_12 = VAR_9 * 2. / (VAR_8 + FUNC_1((VAR_7 = VAR_8 * VAR_8 - VAR_9 * 4., FUNC_0(VAR_7))));



     VAR_12 /= VAR_1[1] + FUNC_1(VAR_1[1] * VAR_1[1] + VAR_12);
     *VAR_5 = VAR_1[1] + VAR_12;
     VAR_3[1] = -VAR_12;
     VAR_3[2] = VAR_11 - VAR_12;
     VAR_6[1] = VAR_1[1] * 2. + VAR_12;
     VAR_6[2] = VAR_1[1] + VAR_12 + VAR_1[2];




 } else {
     VAR_8 = -VAR_13 + *VAR_4 * (VAR_2[1] * VAR_2[1] + VAR_2[2] * VAR_2[2]);
     VAR_9 = *VAR_4 * VAR_2[2] * VAR_2[2] * VAR_13;



     if (VAR_8 > 0.) {
  VAR_12 = VAR_9 * -2. / (VAR_8 + FUNC_1(VAR_8 * VAR_8 + VAR_9 * 4.));
     } else {
  VAR_12 = (VAR_8 - FUNC_1(VAR_8 * VAR_8 + VAR_9 * 4.)) / 2.;
     }



     VAR_12 /= VAR_1[2] + FUNC_1((VAR_7 = VAR_1[2] * VAR_1[2] + VAR_12, FUNC_0(VAR_7)));
     *VAR_5 = VAR_1[2] + VAR_12;
     VAR_3[1] = -(VAR_11 + VAR_12);
     VAR_3[2] = -VAR_12;
     VAR_6[1] = VAR_1[1] + VAR_12 + VAR_1[2];
     VAR_6[2] = VAR_1[2] * 2. + VAR_12;




 }





    } else {



 VAR_8 = -VAR_13 + *VAR_4 * (VAR_2[1] * VAR_2[1] + VAR_2[2] * VAR_2[2]);
 VAR_9 = *VAR_4 * VAR_2[2] * VAR_2[2] * VAR_13;



 if (VAR_8 > 0.) {
     VAR_12 = (VAR_8 + FUNC_1(VAR_8 * VAR_8 + VAR_9 * 4.)) / 2.;
 } else {
     VAR_12 = VAR_9 * 2. / (-VAR_8 + FUNC_1(VAR_8 * VAR_8 + VAR_9 * 4.));
 }



 VAR_12 /= VAR_1[2] + FUNC_1(VAR_1[2] * VAR_1[2] + VAR_12);
 *VAR_5 = VAR_1[2] + VAR_12;
 VAR_3[1] = -(VAR_11 + VAR_12);
 VAR_3[2] = -VAR_12;
 VAR_6[1] = VAR_1[1] + VAR_12 + VAR_1[2];
 VAR_6[2] = VAR_1[2] * 2. + VAR_12;







    }
    return 0;



}
