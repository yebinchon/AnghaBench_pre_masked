
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb__chunked ;
typedef int stb__alloc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static stb__alloc * FUNC_2(void *VAR_2)
{
   if (VAR_2 == ((void*)0)) {
      return &VAR_1;
   } else {
      int VAR_3 = FUNC_0(VAR_2);

      if (VAR_3 == VAR_0) {
         stb__chunked *VAR_4 = (stb__chunked *) VAR_2 - 1;
         return FUNC_1(VAR_4);
      } else {
         return (stb__alloc *) VAR_2 - 1;
      }
   }
}
