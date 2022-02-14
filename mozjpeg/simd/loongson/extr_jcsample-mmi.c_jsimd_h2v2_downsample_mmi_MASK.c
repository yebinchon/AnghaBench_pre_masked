
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double __m64 ;
typedef int * JSAMPROW ;
typedef int ** JSAMPARRAY ;
typedef int JDIMENSION ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (double,double) ;
 double FUNC_1 (double,double) ;
 double FUNC_2 (double,double) ;
 double FUNC_3 (double*) ;
 double FUNC_4 (double,double) ;
 double FUNC_5 (int) ;
 double FUNC_6 (double,int) ;
 int FUNC_7 (double*,double) ;
 int FUNC_8 (int **,int,int,int) ;

void FUNC_9(JDIMENSION VAR_2, int VAR_3,
                               JDIMENSION VAR_4,
                               JDIMENSION VAR_5,
                               JSAMPARRAY VAR_6, JSAMPARRAY VAR_7)
{
  int VAR_8, VAR_9, VAR_10, VAR_11;
  JDIMENSION VAR_12 = VAR_5 * VAR_1;
  JSAMPROW VAR_13, VAR_14, VAR_15;
  __m64 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = 0.0, VAR_23;

  FUNC_8(VAR_6, VAR_3, VAR_2,
                    VAR_12 * 2);

  VAR_11 = (1 << 17) + 1;
  VAR_23 = FUNC_5(VAR_11);
  VAR_22 = FUNC_2(VAR_22, VAR_22);
  VAR_22 = FUNC_6(VAR_22, VAR_0);

  for (VAR_8 = 0, VAR_9 = 0; VAR_9 < VAR_4;
       VAR_8 += 2, VAR_9++) {

    VAR_13 = VAR_6[VAR_8];
    VAR_14 = VAR_6[VAR_8 + 1];
    VAR_15 = VAR_7[VAR_9];

    for (VAR_10 = VAR_12; VAR_10 > 0;
         VAR_10 -= 8, VAR_13 += 16, VAR_14 += 16, VAR_15 += 8) {

      VAR_16 = FUNC_3((__m64 *)&VAR_13[0]);
      VAR_17 = FUNC_3((__m64 *)&VAR_14[0]);
      VAR_18 = FUNC_3((__m64 *)&VAR_13[8]);
      VAR_19 = FUNC_3((__m64 *)&VAR_14[8]);

      VAR_20 = VAR_16;
      VAR_21 = VAR_17;
      VAR_16 = FUNC_1(VAR_16, VAR_22);
      VAR_20 = FUNC_6(VAR_20, VAR_0);
      VAR_17 = FUNC_1(VAR_17, VAR_22);
      VAR_21 = FUNC_6(VAR_21, VAR_0);
      VAR_16 = FUNC_0(VAR_16, VAR_20);
      VAR_17 = FUNC_0(VAR_17, VAR_21);

      VAR_20 = VAR_18;
      VAR_21 = VAR_19;
      VAR_18 = FUNC_1(VAR_18, VAR_22);
      VAR_20 = FUNC_6(VAR_20, VAR_0);
      VAR_19 = FUNC_1(VAR_19, VAR_22);
      VAR_21 = FUNC_6(VAR_21, VAR_0);
      VAR_18 = FUNC_0(VAR_18, VAR_20);
      VAR_19 = FUNC_0(VAR_19, VAR_21);

      VAR_16 = FUNC_0(VAR_16, VAR_17);
      VAR_18 = FUNC_0(VAR_18, VAR_19);
      VAR_16 = FUNC_0(VAR_16, VAR_23);
      VAR_18 = FUNC_0(VAR_18, VAR_23);
      VAR_16 = FUNC_6(VAR_16, 2);
      VAR_18 = FUNC_6(VAR_18, 2);

      VAR_16 = FUNC_4(VAR_16, VAR_18);

      FUNC_7((__m64 *)&VAR_15[0], VAR_16);
    }
  }
}
