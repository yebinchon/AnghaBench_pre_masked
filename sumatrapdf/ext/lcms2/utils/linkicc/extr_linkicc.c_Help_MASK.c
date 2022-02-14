
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static
int FUNC_4(int VAR_2)
{
     switch (VAR_2) {

     default:
     case 0:

         FUNC_3(VAR_1, "\nlinkicc: Links profiles into a single devicelink.\n");

         FUNC_3(VAR_1, "\n");
         FUNC_3(VAR_1, "usage: linkicc [flags] <profiles>\n\n");
         FUNC_3(VAR_1, "flags:\n\n");
         FUNC_3(VAR_1, "%co<profile> - Output devicelink profile. [defaults to 'devicelink.icc']\n", VAR_0);

         FUNC_1(((void*)0));

         FUNC_3(VAR_1, "%cc<0,1,2> - Precision (0=LowRes, 1=Normal, 2=Hi-res) [defaults to 1]\n", VAR_0);
         FUNC_3(VAR_1, "%cn<gridpoints> - Alternate way to set precision, number of CLUT points\n", VAR_0);
         FUNC_3(VAR_1, "%cd<description> - description text (quotes can be used)\n", VAR_0);
         FUNC_3(VAR_1, "%cy<copyright> - copyright notice (quotes can be used)\n", VAR_0);

         FUNC_3(VAR_1, "\n%ck<0..400> - Ink-limiting in %% (CMYK only)\n", VAR_0);
         FUNC_3(VAR_1, "%c8 - Creates 8-bit devicelink\n", VAR_0);
         FUNC_3(VAR_1, "%cx - Creatively, guess deviceclass of resulting profile.\n", VAR_0);
         FUNC_3(VAR_1, "%cb - Black point compensation\n", VAR_0);
         FUNC_3(VAR_1, "%ca<0..1> - Observer adaptation state (abs.col. only)\n\n", VAR_0);
         FUNC_3(VAR_1, "%cl - Use linearization curves (may affect accuracy)\n", VAR_0);
         FUNC_3(VAR_1, "%cr<v.r> - Profile version. (CAUTION: may change the profile implementation)\n", VAR_0);
         FUNC_3(VAR_1, "\n");
         FUNC_3(VAR_1, "Colorspaces must be paired except Lab/XYZ, that can be interchanged.\n\n");

         FUNC_3(VAR_1, "%ch<0,1,2,3> - More help\n", VAR_0);
         break;

     case 1:
         FUNC_0();
         break;

     case 2:

         FUNC_3(VAR_1, "\nExamples:\n\n"
             "To create 'devicelink.icm' from a.icc to b.icc:\n"
             "\tlinkicc a.icc b.icc\n\n"
             "To create 'out.icc' from sRGB to cmyk.icc:\n"
             "\tlinkicc -o out.icc *sRGB cmyk.icc\n\n"
             "To create a sRGB input profile working in Lab:\n"
             "\tlinkicc -x -o sRGBLab.icc *sRGB *Lab\n\n"
             "To create a XYZ -> sRGB output profile:\n"
             "\tlinkicc -x -o sRGBLab.icc *XYZ *sRGB\n\n"
             "To create a abstract profile doing softproof for cmyk.icc:\n"
             "\tlinkicc -t1 -x -o softproof.icc *Lab cmyk.icc cmyk.icc *Lab\n\n"
             "To create a 'grayer' sRGB input profile:\n"
             "\tlinkicc -x -o grayer.icc *sRGB gray.icc gray.icc *Lab\n\n"
             "To embed ink limiting into a cmyk output profile:\n"
             "\tlinkicc -x -o cmyklimited.icc -k 250 cmyk.icc *Lab\n\n");
         break;

     case 3:

         FUNC_3(VAR_1, "This program is intended to be a demo of the little cms\n"
             "engine. Both lcms and this program are freeware. You can\n"
             "obtain both in source code at http://www.littlecms.com\n"
             "For suggestions, comments, bug reports etc. send mail to\n"
             "info@littlecms.com\n\n");
    }

   FUNC_2(0);
}
