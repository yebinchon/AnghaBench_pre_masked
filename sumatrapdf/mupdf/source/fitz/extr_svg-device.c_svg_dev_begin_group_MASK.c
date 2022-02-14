
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int blend_bitmask; int * out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_rect ;
typedef int fz_output ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int *,char*,...) ;
 int * FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_2, fz_device *VAR_3, fz_rect VAR_4, fz_colorspace *VAR_5, int VAR_6, int VAR_7, int VAR_8, float VAR_9)
{
 svg_device *VAR_10 = (svg_device*)VAR_3;
 fz_output *VAR_11 = VAR_10->out;




 static char *VAR_12[] = {
  "normal",
  "multiply",
  "screen",
  "overlay",
  "darken",
  "lighten",
  "color_dodge",
  "color_burn",
  "hard_light",
  "soft_light",
  "difference",
  "exclusion",
  "hue",
  "saturation",
  "color",
  "luminosity",
 };

 if (VAR_8 < VAR_1 || VAR_8 > VAR_0)
  VAR_8 = VAR_1;
 if (VAR_8 != VAR_1 && (VAR_10->blend_bitmask & (1<<VAR_8)) == 0)
 {
  VAR_10->blend_bitmask |= (1<<VAR_8);
  VAR_11 = FUNC_2(VAR_2, VAR_10);
  FUNC_1(VAR_2, VAR_11,
    "<filter id=\"blend_%d\"><feBlend mode=\"%s\" in2=\"BackgroundImage\" in=\"SourceGraphic\"/></filter>\n",
    VAR_8, VAR_12[VAR_8]);
  VAR_11 = FUNC_0(VAR_2, VAR_10);
 }


 if (VAR_9 == 1)
  FUNC_1(VAR_2, VAR_11, "<g");
 else
  FUNC_1(VAR_2, VAR_11, "<g opacity=\"%g\"", VAR_9);
 if (VAR_8 != VAR_1)
  FUNC_1(VAR_2, VAR_11, " filter=\"url(#blend_%d)\"", VAR_8);
 FUNC_1(VAR_2, VAR_11, ">\n");
}
