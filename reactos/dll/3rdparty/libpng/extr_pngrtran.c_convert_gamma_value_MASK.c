
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structrp ;
typedef int png_fixed_point ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_0 (double) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static png_fixed_point
FUNC_2(png_structrp VAR_3, double VAR_4)
{







   if (VAR_4 > 0 && VAR_4 < 128)
      VAR_4 *= VAR_0;


   VAR_4 = FUNC_0(VAR_4 + .5);

   if (VAR_4 > VAR_1 || VAR_4 < VAR_2)
      FUNC_1(VAR_3, "gamma value");

   return (png_fixed_point)VAR_4;
}
