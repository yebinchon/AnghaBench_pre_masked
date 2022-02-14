
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursor; int sorted; } ;
typedef TYPE_1__ queue ;


 int FUNC_0 (TYPE_1__*,void*,int (*) (void const*,void const*)) ;
 int FUNC_1 (TYPE_1__*,int (*) (void const*,void const*)) ;
 void** VAR_0 ;
 int * VAR_1 ;

void *FUNC_2(queue *VAR_2, void *VAR_3, int (*VAR_4)(const void *, const void *))
{
   int VAR_5;

   if (VAR_2 == ((void*)0)) {
 return ((void*)0);
   }

   if(!VAR_2->sorted) {
      if(!FUNC_1(VAR_2, VAR_4))
         return ((void*)0);
   }

   VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

   if(VAR_5 < 0)
      return ((void*)0);

   VAR_2->cursor = VAR_1[VAR_5];

   return VAR_0[VAR_5];
}
