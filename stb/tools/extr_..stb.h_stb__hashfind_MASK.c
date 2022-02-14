
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int stb_uint32 ;
struct TYPE_2__ {void* p; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
   stb_uint32 VAR_3 = FUNC_0(VAR_2);
   int VAR_4,VAR_5 = VAR_3 & VAR_0;
   if (VAR_1[VAR_5].p == VAR_2)
      return VAR_5;
   VAR_4 = FUNC_1(VAR_3)|1;
   for(;;) {
      if (VAR_1[VAR_5].p == ((void*)0))
         return -1;
      VAR_5 = (VAR_5+VAR_4) & VAR_0;
      if (VAR_1[VAR_5].p == VAR_2)
         return VAR_5;
   }
}
