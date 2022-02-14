
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bitgen_t ;
typedef double RAND_INT_TYPE ;


 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (double,double) ;
 double FUNC_1 (double,double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double FUNC_4 (int *) ;
 double FUNC_5 (double) ;
 double FUNC_6 (double) ;

__attribute__((used)) static RAND_INT_TYPE FUNC_7(bitgen_t *VAR_2,
                                                RAND_INT_TYPE VAR_3,
                                                RAND_INT_TYPE VAR_4,
                                                RAND_INT_TYPE VAR_5) {
  RAND_INT_TYPE VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  double VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  RAND_INT_TYPE VAR_18;
  double VAR_19, VAR_20, VAR_21, VAR_22;

  VAR_6 = FUNC_1(VAR_3, VAR_4);
  VAR_8 = VAR_3 + VAR_4;
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  VAR_9 = FUNC_1(VAR_5, VAR_8 - VAR_5);
  VAR_11 = ((double)VAR_6) / VAR_8;
  VAR_12 = 1.0 - VAR_11;
  VAR_13 = VAR_9 * VAR_11 + 0.5;
  VAR_14 = FUNC_6((double)(VAR_8 - VAR_9) * VAR_5 * VAR_11 * VAR_12 / (VAR_8 - 1) + 0.5);
  VAR_15 = VAR_0 * VAR_14 + VAR_1;
  VAR_10 = (RAND_INT_TYPE)FUNC_2((double)(VAR_9 + 1) * (VAR_6 + 1) / (VAR_8 + 2));
  VAR_16 = (FUNC_5(VAR_10 + 1) + FUNC_5(VAR_6 - VAR_10 + 1) +
         FUNC_5(VAR_9 - VAR_10 + 1) + FUNC_5(VAR_7 - VAR_9 + VAR_10 + 1));
  VAR_17 = FUNC_1(FUNC_1(VAR_9, VAR_6) + 1.0, FUNC_2(VAR_13 + 16 * VAR_14));


  while (1) {
    VAR_21 = FUNC_4(VAR_2);
    VAR_22 = FUNC_4(VAR_2);
    VAR_20 = VAR_13 + VAR_15 * (VAR_22 - 0.5) / VAR_21;


    if ((VAR_20 < 0.0) || (VAR_20 >= VAR_17))
      continue;

    VAR_18 = (RAND_INT_TYPE)FUNC_2(VAR_20);
    VAR_19 = VAR_16 - (FUNC_5(VAR_18 + 1) + FUNC_5(VAR_6 - VAR_18 + 1) +
               FUNC_5(VAR_9 - VAR_18 + 1) + FUNC_5(VAR_7 - VAR_9 + VAR_18 + 1));


    if ((VAR_21 * (4.0 - VAR_21) - 3.0) <= VAR_19)
      break;


    if (VAR_21 * (VAR_21 - VAR_19) >= 1)
      continue;

    if (2.0 * FUNC_3(VAR_21) <= VAR_19)
      break;
  }


  if (VAR_3 > VAR_4)
    VAR_18 = VAR_9 - VAR_18;


  if (VAR_9 < VAR_5)
    VAR_18 = VAR_3 - VAR_18;

  return VAR_18;
}
