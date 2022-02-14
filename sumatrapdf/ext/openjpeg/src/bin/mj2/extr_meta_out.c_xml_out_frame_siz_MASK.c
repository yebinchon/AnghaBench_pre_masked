
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x1; int y1; int x0; int y0; int numcomps; TYPE_2__* comps; } ;
typedef TYPE_1__ opj_image_t ;
struct TYPE_7__ {int sgnd; int prec; int dx; int dy; int w; int h; } ;
typedef TYPE_2__ opj_image_comp_t ;
struct TYPE_8__ {int tdx; int tdy; int tx0; int ty0; } ;
typedef TYPE_3__ opj_cp_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1(FILE* VAR_3, opj_image_t *VAR_4, opj_cp_t *VAR_5)
{
    opj_image_comp_t *VAR_6;
    int VAR_7;

    FUNC_0(VAR_3, "          <ImageAndFileSize Marker=\"SIZ\">\n");


    FUNC_0(VAR_3, "            <Xsiz>%d</Xsiz>\n", VAR_4->x1);
    FUNC_0(VAR_3, "            <Ysiz>%d</Ysiz>\n", VAR_4->y1);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "            <!-- Xsiz, Ysiz is the size of the reference grid. -->\n");
    }
    FUNC_0(VAR_3, "            <XOsiz>%d</XOsiz>\n", VAR_4->x0);
    FUNC_0(VAR_3, "            <YOsiz>%d</YOsiz>\n", VAR_4->y0);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "            <!-- XOsiz, YOsiz are offsets from grid origin to image origin. -->\n");
    }
    FUNC_0(VAR_3, "            <XTsiz>%d</XTsiz>\n", VAR_5->tdx);
    FUNC_0(VAR_3, "            <YTsiz>%d</YTsiz>\n", VAR_5->tdy);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "            <!-- XTsiz, YTsiz is the size of one tile with respect to the grid. -->\n");
    }
    FUNC_0(VAR_3, "            <XTOsiz>%d</XTOsiz>\n", VAR_5->tx0);
    FUNC_0(VAR_3, "            <YTOsiz>%d</YTOsiz>\n", VAR_5->ty0);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "            <!-- XTOsiz, YTOsiz are offsets from grid origin to first tile origin. -->\n");
    }
    FUNC_0(VAR_3, "            <Csiz>%d</Csiz>\n", VAR_4->numcomps);
    if (VAR_1) {
        FUNC_0(VAR_3,
                "            <!-- Csiz is the number of components in the image. -->\n");
        FUNC_0(VAR_3, "            <!-- For image components next: -->\n");
        FUNC_0(VAR_3,
                "            <!--   XRsiz, YRsiz denote pixel-sample-spacing on the grid, per Part I Annex B. -->\n");

        FUNC_0(VAR_3,
                "            <!--   Bits per pixel (bpp) is the pixel depth. -->\n");
        FUNC_0(VAR_3,
                "            <!--   WidthOfData and HeightOfData are calculated values, e.g.: w = roundup((Xsiz - XOsiz)/ XRsiz) -->\n");
    }

    for (VAR_7 = 0; VAR_7 < VAR_4->numcomps; VAR_7++) {
        VAR_6 = &(VAR_4->comps[VAR_7]);
        FUNC_0(VAR_3, "            <Component Num=\"%d\">\n", VAR_7 + 1);
        FUNC_0(VAR_3, "              <Ssiz>\n");
        if (VAR_2) {
            FUNC_0(VAR_3, "                <AsHex>0x%02x</AsHex>\n",
                    (VAR_6->sgnd << 7) & (VAR_6->prec - 1));
        }
        if (VAR_0) {
            FUNC_0(VAR_3, "                <Signed>%d</Signed>\n", VAR_6->sgnd);
            FUNC_0(VAR_3, "                <PrecisionInBits>%d</PrecisionInBits>\n",
                    VAR_6->prec);
        }
        FUNC_0(VAR_3, "              </Ssiz>\n");
        FUNC_0(VAR_3, "              <XRsiz>%d</XRsiz>\n", VAR_6->dx);
        FUNC_0(VAR_3, "              <YRsiz>%d</YRsiz>\n", VAR_6->dy);
        FUNC_0(VAR_3, "              <WidthOfData>%d</WidthOfData>\n", VAR_6->w);
        FUNC_0(VAR_3, "              <HeightOfData>%d</HeightOfData>\n", VAR_6->h);
        FUNC_0(VAR_3, "            </Component>\n");
    }
    FUNC_0(VAR_3, "          </ImageAndFileSize>\n");
}
