
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float Uint64 ;
struct TYPE_2__ {scalar_t__ state; } ;


 int FUNC_0 (int) ;
 float FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,float) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
   int VAR_3,VAR_4,VAR_5,VAR_6;

   Uint64 VAR_7, VAR_8;



   int VAR_9 = 12;


   VAR_7 = FUNC_1();




   for (VAR_5=-VAR_9; VAR_5 <= VAR_9; VAR_5 += 16)
      for (VAR_6=-VAR_9; VAR_6 <= VAR_9; VAR_6 += 16)
         for (VAR_4=VAR_6; VAR_4 < VAR_6+16 && VAR_4 <= VAR_9; VAR_4 += 2)
            for (VAR_3=VAR_5; VAR_3 < VAR_5+16 && VAR_3 <= VAR_9; VAR_3 += 2)
               while (!FUNC_4(VAR_3, VAR_4)) {
                  FUNC_6();
                  FUNC_0(1);
               }






   for(;;) {
      int VAR_10;
      FUNC_6();
      for (VAR_10=0; VAR_10 < VAR_2; ++VAR_10)
         if (VAR_1[VAR_10].state != VAR_0)
            break;
      if (VAR_10 == VAR_2)
         break;
      FUNC_0(3);
   }

   VAR_8 = FUNC_1();
   FUNC_3("Build time: %7.2fs\n", (VAR_8 - VAR_7) / (float) FUNC_2());




   FUNC_5(32);
}
