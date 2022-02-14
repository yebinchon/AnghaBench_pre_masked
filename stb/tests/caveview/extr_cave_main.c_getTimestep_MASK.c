
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 double FUNC_1 () ;

__attribute__((used)) static float FUNC_2(float VAR_0)
{
   float VAR_1;
   double VAR_2;
   static double VAR_3 = -1;

   if (VAR_3 == -1)
      VAR_3 = FUNC_1() / 1000.0 - VAR_0;

   for(;;) {
      VAR_2 = FUNC_1() / 1000.0;
      VAR_1 = (float) (VAR_2 - VAR_3);
      if (VAR_1 >= VAR_0) {
         VAR_3 = VAR_2;
         return VAR_1;
      }

      FUNC_0(1);
   }
}
