
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

void FUNC_1(void)
{
     FUNC_0(VAR_0, "\nBuilt-in profiles:\n\n");
     FUNC_0(VAR_0, "\t*Lab2  -- D50-based v2 CIEL*a*b\n"
                     "\t*Lab4  -- D50-based v4 CIEL*a*b\n"
                     "\t*Lab   -- D50-based v4 CIEL*a*b\n"
                     "\t*XYZ   -- CIE XYZ (PCS)\n"
                     "\t*sRGB  -- sRGB color space\n"
                     "\t*Gray22 - Monochrome of Gamma 2.2\n"
                     "\t*Gray30 - Monochrome of Gamma 3.0\n"
                     "\t*null   - Monochrome black for all input\n"
                     "\t*Lin2222- CMYK linearization of gamma 2.2 on each channel\n");
}
