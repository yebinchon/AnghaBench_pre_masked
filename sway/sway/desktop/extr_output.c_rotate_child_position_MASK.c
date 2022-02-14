
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (float) ;
 double FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(double *VAR_0, double *VAR_1, double VAR_2, double VAR_3,
  double VAR_4, double VAR_5, float VAR_6) {
 if (VAR_6 == 0.0f) {
  return;
 }


 double VAR_7 = *VAR_0 - VAR_4/2 + VAR_2/2,
  VAR_8 = *VAR_1 - VAR_5/2 + VAR_3/2;

 double VAR_9 = FUNC_0(-VAR_6)*VAR_7 - FUNC_1(-VAR_6)*VAR_8,
  VAR_10 = FUNC_0(-VAR_6)*VAR_8 + FUNC_1(-VAR_6)*VAR_7;
 *VAR_0 = VAR_9 + VAR_4/2 - VAR_2/2;
 *VAR_1 = VAR_10 + VAR_5/2 - VAR_3/2;
}
