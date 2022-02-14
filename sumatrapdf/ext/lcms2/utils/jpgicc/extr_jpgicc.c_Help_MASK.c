
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_4(int VAR_3)
{
     FUNC_3(VAR_2, "little cms ICC profile applier for JPEG - v3.2 [LittleCMS %2.2f]\n\n", VAR_0 / 1000.0);

     switch(VAR_3) {

     default:
     case 0:

     FUNC_3(VAR_2, "usage: jpgicc [flags] input.jpg output.jpg\n");

     FUNC_3(VAR_2, "\nflags:\n\n");
     FUNC_3(VAR_2, "%cv - Verbose\n", VAR_1);
     FUNC_3(VAR_2, "%ci<profile> - Input profile (defaults to sRGB)\n", VAR_1);
     FUNC_3(VAR_2, "%co<profile> - Output profile (defaults to sRGB)\n", VAR_1);

     FUNC_1(((void*)0));


     FUNC_3(VAR_2, "%cb - Black point compensation\n", VAR_1);
     FUNC_3(VAR_2, "%cd<0..1> - Observer adaptation state (abs.col. only)\n", VAR_1);
     FUNC_3(VAR_2, "%cn - Ignore embedded profile\n", VAR_1);
     FUNC_3(VAR_2, "%ce - Embed destination profile\n", VAR_1);
     FUNC_3(VAR_2, "%cs<new profile> - Save embedded profile as <new profile>\n", VAR_1);

     FUNC_3(VAR_2, "\n");

     FUNC_3(VAR_2, "%cc<0,1,2,3> - Precalculates transform (0=Off, 1=Normal, 2=Hi-res, 3=LoRes) [defaults to 1]\n", VAR_1);
     FUNC_3(VAR_2, "\n");

     FUNC_3(VAR_2, "%cp<profile> - Soft proof profile\n", VAR_1);
     FUNC_3(VAR_2, "%cm<0,1,2,3> - SoftProof intent\n", VAR_1);
     FUNC_3(VAR_2, "%cg - Marks out-of-gamut colors on softproof\n", VAR_1);
     FUNC_3(VAR_2, "%c!<r>,<g>,<b> - Out-of-gamut marker channel values\n", VAR_1);

     FUNC_3(VAR_2, "\n");
     FUNC_3(VAR_2, "%cq<0..100> - Output JPEG quality\n", VAR_1);

     FUNC_3(VAR_2, "\n");
     FUNC_3(VAR_2, "%ch<0,1,2,3> - More help\n", VAR_1);
     break;

     case 1:

     FUNC_3(VAR_2, "Examples:\n\n"
                     "To color correct from scanner to sRGB:\n"
                     "\tjpgicc %ciscanner.icm in.jpg out.jpg\n"
                     "To convert from monitor1 to monitor2:\n"
                     "\tjpgicc %cimon1.icm %comon2.icm in.jpg out.jpg\n"
                     "To make a CMYK separation:\n"
                     "\tjpgicc %coprinter.icm inrgb.jpg outcmyk.jpg\n"
                     "To recover sRGB from a CMYK separation:\n"
                     "\tjpgicc %ciprinter.icm incmyk.jpg outrgb.jpg\n"
                     "To convert from CIELab ITU/Fax JPEG to sRGB\n"
                     "\tjpgicc in.jpg out.jpg\n\n",
                     VAR_1, VAR_1, VAR_1, VAR_1, VAR_1);
     break;

     case 2:
         FUNC_0();
         break;

     case 3:

     FUNC_3(VAR_2, "This program is intended to be a demo of the little cms\n"
                     "engine. Both lcms and this program are freeware. You can\n"
                     "obtain both in source code at http://www.littlecms.com\n"
                     "For suggestions, comments, bug reports etc. send mail to\n"
                     "marti@littlecms.com\n\n");
     break;
     }

     FUNC_2(0);
}
