
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_2(void)
{
  FUNC_1(VAR_2, "little CMS ICC PostScript generator - v2.1 [LittleCMS %2.2f]\n", VAR_0 / 1000.0);

     FUNC_1(VAR_2, "usage: psicc [flags] [<Output file>]\n\n");

     FUNC_1(VAR_2, "flags:\n\n");

     FUNC_1(VAR_2, "%ci<profile> - Input profile: Generates Color Space Array (CSA)\n", VAR_1);
     FUNC_1(VAR_2, "%co<profile> - Output profile: Generates Color Rendering Dictionary(CRD)\n", VAR_1);

     FUNC_1(VAR_2, "%ct<0,1,2,3> - Intent (0=Perceptual, 1=Colorimetric, 2=Saturation, 3=Absolute)\n", VAR_1);

     FUNC_1(VAR_2, "%cb - Black point compensation (CRD only)\n", VAR_1);
     FUNC_1(VAR_2, "%cu - Do NOT generate resource name on CRD\n", VAR_1);
     FUNC_1(VAR_2, "%cc<0,1,2> - Precision (0=LowRes, 1=Normal (default), 2=Hi-res) (CRD only)\n", VAR_1);
     FUNC_1(VAR_2, "%cn<gridpoints> - Alternate way to set precission, number of CLUT points (CRD only)\n", VAR_1);

  FUNC_1(VAR_2, "\n");
  FUNC_1(VAR_2, "If no output file is specified, output goes to stdout.\n\n");
     FUNC_1(VAR_2, "This program is intended to be a demo of the little cms\n"
                     "engine. Both lcms and this program are freeware. You can\n"
                     "obtain both in source code at http://www.littlecms.com\n"
                     "For suggestions, comments, bug reports etc. send mail to\n"
                     "info@littlecms.com\n\n");
     FUNC_0(0);
}
