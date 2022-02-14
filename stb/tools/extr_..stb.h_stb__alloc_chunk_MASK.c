
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int alloc; int data_left; struct TYPE_6__* next; } ;
typedef TYPE_1__ stb__chunk ;
typedef int stb__alloc ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (TYPE_1__*,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void * FUNC_7(stb__alloc *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
   void *VAR_5;
   stb__chunk *VAR_6 = FUNC_3(VAR_1);

   if (VAR_6 && VAR_2 <= VAR_0) {

      VAR_5 = FUNC_6(VAR_6, VAR_2, VAR_3, VAR_4);
      if (VAR_5) { ++VAR_6->alloc; return VAR_5; }


      if (VAR_6->next) {
         VAR_5 = FUNC_6(VAR_6->next, VAR_2, VAR_3, VAR_4);
         if (VAR_5) { ++VAR_6->alloc; return VAR_5; }





         FUNC_5(VAR_1);
         VAR_6 = FUNC_3(VAR_1);
      }
   }


   {
      stb__chunk *VAR_7;

      int VAR_8 = VAR_0;

      if (VAR_2 > VAR_8)
         VAR_8 = VAR_2;

      FUNC_0(sizeof(*VAR_7) + VAR_4 <= 16);




      while (1) {
         VAR_7 = (stb__chunk *) FUNC_2(16 + VAR_8);
         if (VAR_7 == ((void*)0)) return ((void*)0);

         VAR_7->data_left = VAR_8 - sizeof(*VAR_7);

         VAR_5 = FUNC_6(VAR_7, VAR_2, VAR_3, VAR_4);
         if (VAR_5 != ((void*)0)) {
            VAR_7->next = VAR_6;
            FUNC_4(VAR_1, VAR_7);



            VAR_7->alloc = 1;
            if (VAR_2 == VAR_8)
               FUNC_5(VAR_1);

            return VAR_5;
         }

         FUNC_1(VAR_7);
         VAR_8 += 16+VAR_3;
      }
   }
}
