
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbtt_uint8 ;
typedef int stbtt_uint32 ;
typedef int stbtt_int32 ;


 scalar_t__ FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static stbtt_uint32 FUNC_3(stbtt_uint8 *VAR_0, stbtt_uint32 VAR_1, const char *VAR_2)
{
   stbtt_int32 VAR_3 = FUNC_2(VAR_0+VAR_1+4);
   stbtt_uint32 VAR_4 = VAR_1 + 12;
   stbtt_int32 VAR_5;
   for (VAR_5=0; VAR_5 < VAR_3; ++VAR_5) {
      stbtt_uint32 VAR_6 = VAR_4 + 16*VAR_5;
      if (FUNC_0(VAR_0+VAR_6+0, VAR_2))
         return FUNC_1(VAR_0+VAR_6+8);
   }
   return 0;
}
