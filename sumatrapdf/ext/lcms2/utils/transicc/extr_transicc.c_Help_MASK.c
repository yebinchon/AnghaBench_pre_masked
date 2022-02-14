
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_2(void)
{

    FUNC_1(VAR_1, "usage: transicc [flags] [CGATS input] [CGATS output]\n\n");

    FUNC_1(VAR_1, "flags:\n\n");
    FUNC_1(VAR_1, "%cv<0..3> - Verbosity level\n", VAR_0);

    FUNC_1(VAR_1, "%ce[op] - Encoded representation of numbers\n", VAR_0);
    FUNC_1(VAR_1, "\t%cw - use 16 bits\n", VAR_0);
    FUNC_1(VAR_1, "\t%cx - Hexadecimal\n\n", VAR_0);

    FUNC_1(VAR_1, "%cs - bounded mode (clip negatives and highliths)\n", VAR_0);
    FUNC_1(VAR_1, "%cq - Quantize (round decimals)\n\n", VAR_0);

    FUNC_1(VAR_1, "%ci<profile> - Input profile (defaults to sRGB)\n", VAR_0);
    FUNC_1(VAR_1, "%co<profile> - Output profile (defaults to sRGB)\n", VAR_0);
    FUNC_1(VAR_1, "%cl<profile> - Transform by device-link profile\n", VAR_0);

    FUNC_1(VAR_1, "\nYou can use '*Lab', '*xyz' and others as built-in profiles\n\n");

    FUNC_0(((void*)0));

    FUNC_1(VAR_1, "\n");

    FUNC_1(VAR_1, "%cd<0..1> - Observer adaptation state (abs.col. only)\n\n", VAR_0);

    FUNC_1(VAR_1, "%cb - Black point compensation\n", VAR_0);

    FUNC_1(VAR_1, "%cc<0,1,2,3> Precalculates transform (0=Off, 1=Normal, 2=Hi-res, 3=LoRes)\n\n", VAR_0);
    FUNC_1(VAR_1, "%cn - Terse output, intended for pipe usage\n", VAR_0);

    FUNC_1(VAR_1, "%cp<profile> - Soft proof profile\n", VAR_0);
    FUNC_1(VAR_1, "%cm<0,1,2,3> - Soft proof intent\n", VAR_0);
    FUNC_1(VAR_1, "%cg - Marks out-of-gamut colors on softproof\n\n", VAR_0);



    FUNC_1(VAR_1, "This program is intended to be a demo of the little cms\n"
        "engine. Both lcms and this program are freeware. You can\n"
        "obtain both in source code at http://www.littlecms.com\n"
        "For suggestions, comments, bug reports etc. send mail to\n"
        "info@littlecms.com\n\n");
}
