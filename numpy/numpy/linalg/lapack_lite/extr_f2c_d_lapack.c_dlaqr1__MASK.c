
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;


 int FUNC_0 (int) ;

int FUNC_1(integer *VAR_0, doublereal *VAR_1, integer *VAR_2,
 doublereal *VAR_3, doublereal *VAR_4, doublereal *VAR_5, doublereal *VAR_6,
 doublereal *VAR_7)
{

    integer VAR_8, VAR_9;
    doublereal VAR_10, VAR_11, VAR_12;


    static doublereal VAR_13, VAR_14, VAR_15;
    VAR_8 = *VAR_2;
    VAR_9 = 1 + VAR_8;
    VAR_1 -= VAR_9;
    --VAR_7;


    if (*VAR_0 == 2) {
 VAR_13 = (VAR_10 = VAR_1[VAR_8 + 1] - *VAR_5, FUNC_0(VAR_10)) + FUNC_0(*VAR_6) + (VAR_11 =
  VAR_1[VAR_8 + 2], FUNC_0(VAR_11));
 if (VAR_13 == 0.) {
     VAR_7[1] = 0.;
     VAR_7[2] = 0.;
 } else {
     VAR_14 = VAR_1[VAR_8 + 2] / VAR_13;
     VAR_7[1] = VAR_14 * VAR_1[(VAR_8 << 1) + 1] + (VAR_1[VAR_8 + 1] - *VAR_3) *
      ((VAR_1[VAR_8 + 1] - *VAR_5) / VAR_13) - *VAR_4 * (*VAR_6 / VAR_13);
     VAR_7[2] = VAR_14 * (VAR_1[VAR_8 + 1] + VAR_1[(VAR_8 << 1) + 2] - *VAR_3 - *
      VAR_5);
 }
    } else {
 VAR_13 = (VAR_10 = VAR_1[VAR_8 + 1] - *VAR_5, FUNC_0(VAR_10)) + FUNC_0(*VAR_6) + (VAR_11 =
  VAR_1[VAR_8 + 2], FUNC_0(VAR_11)) + (VAR_12 = VAR_1[VAR_8 + 3], FUNC_0(
  VAR_12));
 if (VAR_13 == 0.) {
     VAR_7[1] = 0.;
     VAR_7[2] = 0.;
     VAR_7[3] = 0.;
 } else {
     VAR_14 = VAR_1[VAR_8 + 2] / VAR_13;
     VAR_15 = VAR_1[VAR_8 + 3] / VAR_13;
     VAR_7[1] = (VAR_1[VAR_8 + 1] - *VAR_3) * ((VAR_1[VAR_8 + 1] - *VAR_5) / VAR_13)
      - *VAR_4 * (*VAR_6 / VAR_13) + VAR_1[(VAR_8 << 1) + 1] * VAR_14 + VAR_1[
      VAR_8 * 3 + 1] * VAR_15;
     VAR_7[2] = VAR_14 * (VAR_1[VAR_8 + 1] + VAR_1[(VAR_8 << 1) + 2] - *VAR_3 - *
      VAR_5) + VAR_1[VAR_8 * 3 + 2] * VAR_15;
     VAR_7[3] = VAR_15 * (VAR_1[VAR_8 + 1] + VAR_1[VAR_8 * 3 + 3] - *VAR_3 - *
      VAR_5) + VAR_14 * VAR_1[(VAR_8 << 1) + 3];
 }
    }
    return 0;
}
