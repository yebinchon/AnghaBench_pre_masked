
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int h; int w; int numcomps; int bpc; int C; int UnkC; int IPR; int meth; int precedence; int approx; int enumcs; TYPE_1__* comps; } ;
typedef TYPE_2__ opj_jp2_t ;
struct TYPE_4__ {int bpcc; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1(FILE* VAR_3, opj_jp2_t *VAR_4)
{

    int VAR_5;

    FUNC_0(VAR_3, "              <JP2Header BoxType=\"jp2h\">\n");


    FUNC_0(VAR_3, "                <ImageHeader BoxType=\"ihdr\">\n");
    FUNC_0(VAR_3, "                  <HEIGHT>%d</HEIGHT>\n",
            VAR_4->h);
    FUNC_0(VAR_3, "                  <WIDTH>%d</WIDTH>\n",
            VAR_4->w);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "                  <!-- HEIGHT here, if 2 fields per image, is of total deinterlaced height. -->\n");
    }
    FUNC_0(VAR_3, "                  <NC>%d</NC>\n",
            VAR_4->numcomps);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "                  <!-- NC is number of components -->\n");
    }
    FUNC_0(VAR_3, "                  <BPC>\n");
    if (VAR_4->bpc == 255) {
        FUNC_0(VAR_3, "                    <AsHex>0x%02x</AsHex>\n",
                VAR_4->bpc);
        if (VAR_1) {
            FUNC_0(VAR_3,
                    "                    <!-- BPC = 0xff means bits per pixel varies with component; see table below. -->\n");
        }
    } else {
        if (VAR_2) {
            FUNC_0(VAR_3, "                    <AsHex>0x%02x</AsHex>\n",
                    VAR_4->bpc);
            if (VAR_1) {
                FUNC_0(VAR_3,
                        "                    <!-- BPC = 0xff means bits per pixel varies with component; see table below. -->\n");
            }
        }
        if (VAR_0) {
            FUNC_0(VAR_3, "                    <BitsPerPixel>%d</BitsPerPixel>\n",
                    VAR_4->bpc & 0x7f);
            FUNC_0(VAR_3, "                    <Signed>%d</Signed>\n",
                    VAR_4->bpc >> 7);
        }
    }
    FUNC_0(VAR_3, "                  </BPC>\n");
    FUNC_0(VAR_3, "                  <C>%d</C>\n",
            VAR_4->C);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "                  <!-- C is compression type.  Only \"7\" is allowed to date. -->\n");
    }
    FUNC_0(VAR_3, "                  <UnkC>%d</UnkC>\n",
            VAR_4->UnkC);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "                  <!-- Colourspace Unknown. 1 = unknown, 0 = known (e.g., colourspace spec is accurate) -->\n");
    }
    FUNC_0(VAR_3, "                  <IPR>%d</IPR>\n",
            VAR_4->IPR);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "                  <!-- IPR is 1 if frame contains an Intellectual Property box; 0 otherwise. -->\n");
    }
    FUNC_0(VAR_3, "                </ImageHeader>\n");

    if (VAR_4->bpc == 255) {
        FUNC_0(VAR_3, "                <BitsPerComponent BoxType=\"bpcc\">\n");
        if (VAR_1) {
            FUNC_0(VAR_3,
                    "                <!-- Pixel depth (range 1 to 38) is low 7 bits of hex value + 1 -->\n");
        }


        for (VAR_5 = 0; VAR_5 < (int)VAR_4->numcomps; VAR_5++) {
            if (VAR_2) {
                FUNC_0(VAR_3, "                  <AsHex>0x%02x</AsHex>\n",
                        VAR_4->comps[VAR_5].bpcc);
            }
            if (VAR_0) {
                FUNC_0(VAR_3, "                  <BitsPerPixel>%d</BitsPerPixel>\n",
                        (VAR_4->comps[VAR_5].bpcc & 0x7f) + 1);
                FUNC_0(VAR_3, "                  <Signed>%d</Signed>\n",
                        VAR_4->comps[VAR_5].bpcc >> 7);
            }
        }
        FUNC_0(VAR_3, "                </BitsPerComponent>\n");
    }


    FUNC_0(VAR_3,
            "                <ColourSpecification BoxType=\"colr\">\n");
    FUNC_0(VAR_3, "                  <METH>%d</METH>\n",
            VAR_4->meth);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "                  <!-- Valid values of specification method so far: -->\n");
        FUNC_0(VAR_3,
                "                  <!--   1 = Enumerated colourspace, in EnumCS field -->\n");
        FUNC_0(VAR_3,
                "                  <!--   2 = Restricted ICC Profile, in PROFILE field -->\n");
    }
    FUNC_0(VAR_3, "                  <PREC>%d</PREC>\n",
            VAR_4->precedence);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "                  <!-- 0 is only valid value of precedence so far. -->\n");
    }
    FUNC_0(VAR_3, "                  <APPROX>%d</APPROX>\n",
            VAR_4->approx);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "                  <!-- 0 is only valid value of colourspace approximation so far. -->\n");
    }

    if (VAR_4->meth == 1) {
        FUNC_0(VAR_3, "                  <EnumCS>%d</EnumCS>\n",
                VAR_4->enumcs);
        if (VAR_1) {
            FUNC_0(VAR_3,
                    "                  <!-- Valid values of enumerated MJ2 colourspace so far: -->\n");
            FUNC_0(VAR_3,
                    "                  <!--   16: sRGB as defined by IEC 61966-2-1. -->\n");
            FUNC_0(VAR_3,
                    "                  <!--   17: greyscale (related to sRGB). -->\n");
            FUNC_0(VAR_3,
                    "                  <!--   18: sRGB YCC (from JPEG 2000 Part II). -->\n");
            FUNC_0(VAR_3,
                    "                  <!-- (Additional JPX values are defined in Part II). -->\n");
        }
    } else if (VAR_1) {
        FUNC_0(VAR_3,
                "                  <!-- PROFILE is not handled by current OpenJPEG implementation. -->\n");
    }

    FUNC_0(VAR_3, "                </ColourSpecification>\n");







    FUNC_0(VAR_3, "              </JP2Header>\n");
}
