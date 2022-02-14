
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* p; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(void *VAR_3)
{
   int VAR_4 = VAR_2;
   int VAR_5;
   for (VAR_5=0; VAR_5 < VAR_0; ++VAR_5) {
      if (--VAR_4 < 0) VAR_4 = VAR_0-1;
      if (VAR_1[VAR_4].p == VAR_3)
         return VAR_4;
   }
   return -1;
}
