
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_vorbis_alloc ;
typedef int stb_vorbis ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (int **,char const*,char*) ;
 int * FUNC_2 (int *,int ,int*,int const*) ;

stb_vorbis * FUNC_3(const char *VAR_2, int *VAR_3, const stb_vorbis_alloc *VAR_4)
{
   FILE *VAR_5;




   VAR_5 = FUNC_0(VAR_2, "rb");

   if (VAR_5)
      return FUNC_2(VAR_5, VAR_0, VAR_3, VAR_4);
   if (VAR_3) *VAR_3 = VAR_1;
   return ((void*)0);
}
