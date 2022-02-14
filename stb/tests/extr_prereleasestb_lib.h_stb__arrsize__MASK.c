
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int limit; int len; int signature; } ;
typedef TYPE_1__ stb__arr ;


 void* FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void **VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
   void *VAR_5 = *VAR_1;
   stb__arr *VAR_6;
   FUNC_2(VAR_5);
   if (VAR_5 == ((void*)0)) {
      if (VAR_4 == 0 && VAR_2 == 0) return;
      VAR_6 = (stb__arr *) FUNC_1(sizeof(*VAR_6) + VAR_2*VAR_3);
      VAR_6->limit = VAR_3;
      VAR_6->len = VAR_4;
      VAR_6->signature = VAR_0;
   } else {
      VAR_6 = FUNC_3(VAR_5);
      VAR_6->len = VAR_4;
      if (VAR_6->limit < VAR_3) {
         void *VAR_7;
         if (VAR_6->limit >= 4 && VAR_3 < VAR_6->limit * 2)
            VAR_3 = VAR_6->limit * 2;
         VAR_7 = FUNC_0(VAR_6, sizeof(*VAR_6) + VAR_3*VAR_2);
         if (VAR_7) {
            VAR_6 = (stb__arr *) VAR_7;
            VAR_6->limit = VAR_3;
         } else {

         }
      }
   }
   VAR_6->len = VAR_6->len < VAR_6->limit ? VAR_6->len : VAR_6->limit;
   *VAR_1 = VAR_6+1;
}
