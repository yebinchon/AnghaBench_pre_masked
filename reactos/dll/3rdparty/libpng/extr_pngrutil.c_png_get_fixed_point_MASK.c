
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;
typedef int * png_structrp ;
typedef int png_fixed_point ;
typedef int png_const_bytep ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static png_fixed_point
FUNC_2(png_structrp VAR_2, png_const_bytep VAR_3)
{
   png_uint_32 VAR_4 = FUNC_0(VAR_3);

   if (VAR_4 <= VAR_1)
      return (png_fixed_point)VAR_4;


   if (VAR_2 != ((void*)0))
      FUNC_1(VAR_2, "PNG fixed point integer out of range");

   return VAR_0;
}
