
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int stb_uintptr ;
typedef int stb__nochildren ;
typedef int stb__chunked ;
typedef int stb__alloc_type ;
struct TYPE_9__ {int * child; } ;
typedef TYPE_1__ stb__alloc ;






 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 void* FUNC_2 (TYPE_1__*,int,int,int) ;
 TYPE_1__* FUNC_3 (void*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned int) ;

__attribute__((used)) static void * FUNC_10(void *VAR_1, size_t VAR_2, stb__alloc_type VAR_3, int VAR_4)
{
   void *VAR_5;

   stb__alloc *VAR_6 = FUNC_3(VAR_1);

   if (VAR_4 <= 0) {


      int VAR_7 = 1 << FUNC_9((unsigned int) VAR_2);

      if (VAR_7 < 0)
         VAR_7 = 4;

      if (VAR_7 == 0) {
         if (VAR_2 == 0)
            VAR_7 = 1;
         else
            VAR_7 = 256;
      }




      if (VAR_4 < 0) {
         if (VAR_7 > -VAR_4)
            VAR_7 = -VAR_4;
      }

      VAR_4 = VAR_7;
   }

   FUNC_0(FUNC_8(VAR_4));


   if (VAR_3 == 128 && VAR_4 > 8)
      VAR_3 = 131;

   switch (VAR_3) {
      case 131: {
         stb__alloc *VAR_8 = (stb__alloc *) FUNC_1(VAR_2 + sizeof(*VAR_8));
         if (VAR_8 == ((void*)0)) return ((void*)0);
         VAR_5 = VAR_8+1;
         VAR_8->child = ((void*)0);
         FUNC_4(VAR_6, VAR_8);

         FUNC_6(VAR_8,((void*)0));
         break;
      }

      case 128: {
         stb__nochildren *VAR_9 = (stb__nochildren *) FUNC_1(VAR_2 + sizeof(*VAR_9));
         if (VAR_9 == ((void*)0)) return ((void*)0);
         VAR_5 = VAR_9+1;
         FUNC_5(VAR_6, VAR_9);
         break;
      }

      case 130: {
         VAR_5 = FUNC_2(VAR_6, (int) VAR_2, VAR_4, 0);
         if (VAR_5 == ((void*)0)) return ((void*)0);
         break;
      }

      case 129: {
         stb__chunked *VAR_10;
         if (VAR_4 < sizeof(stb_uintptr)) VAR_4 = sizeof(stb_uintptr);
         VAR_10 = (stb__chunked *) FUNC_2(VAR_6, (int) VAR_2, VAR_4, sizeof(*VAR_10));
         if (VAR_10 == ((void*)0)) return ((void*)0);
         FUNC_7(VAR_10, VAR_6);
         VAR_5 = VAR_10+1;
         break;
      }

      default: VAR_5 = ((void*)0); FUNC_0(0);
   }

   ++VAR_0;
   return VAR_5;
}
