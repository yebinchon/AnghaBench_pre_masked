
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 float VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 float VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (float) ;
 int VAR_5 ;

int FUNC_2(float VAR_6, int VAR_7, int VAR_8)
{
   if (!VAR_4) return 0;

   if (!VAR_7)
      return 0;


   if (VAR_6 > 0.075) VAR_6 = 0.075;

   VAR_3 += VAR_6;

   VAR_1 += VAR_6;
   while (VAR_1 > 1.0/VAR_0) {
      if (VAR_2) {
         VAR_5 += VAR_2 / 60.0f;
         if (VAR_5 < 0) VAR_5 = 0;
         if (VAR_5 > 1) VAR_5 = 1;
      }


      VAR_1 -= 1.0/VAR_0;
   }

   FUNC_1(VAR_6);
   FUNC_0();

   return 0;
}
