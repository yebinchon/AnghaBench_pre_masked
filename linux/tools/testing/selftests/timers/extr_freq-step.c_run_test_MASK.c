
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sample {int dummy; } ;


 scalar_t__ VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (struct sample*) ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sample*,int,double*,double*,double*,double*) ;
 int FUNC_5 () ;
 int FUNC_6 (double) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(int VAR_6, double VAR_7, double VAR_8)
{
 struct sample VAR_9[VAR_3];
 double VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 double VAR_16, VAR_17;
 int VAR_18;

 FUNC_6(VAR_7);

 for (VAR_18 = 0; VAR_18 < 10; VAR_18++)
  FUNC_7(1e6 * VAR_2 / 10);

 FUNC_5();

 FUNC_6(VAR_7 + VAR_8);

 for (VAR_18 = 0; VAR_18 < 10; VAR_18++)
  FUNC_7(FUNC_3() % 2000000 * VAR_4 / 10);

 FUNC_6(VAR_7);

 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
  FUNC_7(FUNC_3() % 2000000 * VAR_2);
  FUNC_1(&VAR_9[VAR_18]);
 }

 if (VAR_6) {
  FUNC_4(VAR_9, VAR_3, &VAR_10, &VAR_11, &VAR_12, &VAR_13);
  VAR_5 = VAR_11;
  FUNC_2("CLOCK_MONOTONIC_RAW frequency offset: %11.3f ppm\n",
         1e6 * VAR_5);
  return 0;
 }

 FUNC_4(VAR_9, VAR_3 / 2, &VAR_10, &VAR_11, &VAR_12, &VAR_13);
 VAR_16 = VAR_11 * (1.0 - VAR_5) - VAR_5 -
   VAR_7;

 FUNC_4(VAR_9 + VAR_3 / 2, VAR_3 / 2, &VAR_10, &VAR_11,
  &VAR_14, &VAR_15);
 VAR_17 = VAR_11 * (1.0 - VAR_5) - VAR_5 -
   VAR_7;

 FUNC_2("%6.0f %+10.3f %6.0f %7.0f %+10.3f %6.0f %7.0f\t",
        1e6 * VAR_8,
        1e6 * VAR_16, 1e9 * VAR_12, 1e9 * VAR_13,
        1e6 * VAR_17, 1e9 * VAR_14, 1e9 * VAR_15);

 if (FUNC_0(VAR_17) > VAR_0 || VAR_14 > VAR_1) {
  FUNC_2("[FAIL]\n");
  return 1;
 }

 FUNC_2("[OK]\n");
 return 0;
}
