
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_const_structrp ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*) ;

void
FUNC_2(png_const_structrp VAR_0, png_uint_32 VAR_1)
{
   int VAR_2;
   png_uint_32 VAR_3=VAR_1;

   FUNC_1(1, "in png_check_chunk_name");

   for (VAR_2=1; VAR_2<=4; ++VAR_2)
   {
      int VAR_4 = VAR_3 & 0xff;

      if (VAR_4 < 65 || VAR_4 > 122 || (VAR_4 > 90 && VAR_4 < 97))
         FUNC_0(VAR_0, "invalid chunk type");

      VAR_3 >>= 8;
   }
}
