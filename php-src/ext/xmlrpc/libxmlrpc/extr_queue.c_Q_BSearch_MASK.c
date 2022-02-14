
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
typedef TYPE_1__ queue ;


 void const** VAR_0 ;

__attribute__((used)) static int FUNC_0( queue *VAR_1, void *VAR_2,
                      int (*VAR_3)(const void *, const void*))
{
   int VAR_4, VAR_5, VAR_6, VAR_7;

   VAR_4 = 0;
   VAR_6 = VAR_1->size - 1;

   while(VAR_4 <= VAR_6) {
      VAR_5 = (VAR_4 + VAR_6) / 2;
      VAR_7 = VAR_3(VAR_2, VAR_0[ VAR_5 ]);

      if(VAR_7 < 0)
         VAR_6 = VAR_5 - 1;

      else if(VAR_7 > 0)
         VAR_4 = VAR_5 + 1;

      else
         return VAR_5;
   }



   return -1;
}
