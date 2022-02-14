
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * opaque; int zfree; int zalloc; } ;
struct TYPE_4__ {int w; int h; int n; int alpha; int xres; int yres; int pagenum; scalar_t__ s; int * out; } ;
struct TYPE_5__ {TYPE_3__ stream; TYPE_1__ super; } ;
typedef TYPE_2__ ps_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_band_writer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (int *,int *,char*,...) ;
 int FUNC_3 (int *,int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_5, fz_band_writer *VAR_6, fz_colorspace *VAR_7)
{
 ps_band_writer *VAR_8 = (ps_band_writer *)VAR_6;
 fz_output *VAR_9 = VAR_8->super.out;
 int VAR_10 = VAR_8->super.w;
 int VAR_11 = VAR_8->super.h;
 int VAR_12 = VAR_8->super.n;
 int VAR_13 = VAR_8->super.alpha;
 int VAR_14 = VAR_8->super.xres;
 int VAR_15 = VAR_8->super.yres;
 int VAR_16 = VAR_8->super.pagenum;
 int VAR_17 = (VAR_10 * 72 + (VAR_14>>1)) / VAR_14;
 int VAR_18 = (VAR_11 * 72 + (VAR_15>>1)) / VAR_15;
 float VAR_19 = (float) VAR_10 / VAR_17;
 float VAR_20 = (float) VAR_11 / VAR_18;
 int VAR_21;

 if (VAR_8->super.s != 0)
  FUNC_1(VAR_5, VAR_0, "Postscript writer cannot cope with spot colors");

 if (VAR_13 != 0)
  FUNC_1(VAR_5, VAR_0, "Postscript output cannot have alpha");

 VAR_8->super.w = VAR_10;
 VAR_8->super.h = VAR_11;
 VAR_8->super.n = VAR_12;

 VAR_8->stream.zalloc = VAR_3;
 VAR_8->stream.zfree = VAR_4;
 VAR_8->stream.opaque = VAR_5;

 VAR_21 = FUNC_0(&VAR_8->stream, VAR_1);
 if (VAR_21 != VAR_2)
  FUNC_1(VAR_5, VAR_0, "compression error %d", VAR_21);

 FUNC_2(VAR_5, VAR_9, "%%%%Page: %d %d\n", VAR_16, VAR_16);
 FUNC_2(VAR_5, VAR_9, "%%%%PageBoundingBox: 0 0 %d %d\n", VAR_17, VAR_18);
 FUNC_2(VAR_5, VAR_9, "%%%%BeginPageSetup\n");
 FUNC_2(VAR_5, VAR_9, "<</PageSize [%d %d]>> setpagedevice\n", VAR_17, VAR_18);
 FUNC_2(VAR_5, VAR_9, "%%%%EndPageSetup\n\n");
 FUNC_2(VAR_5, VAR_9, "/DataFile currentfile /FlateDecode filter def\n\n");
 switch(VAR_12)
 {
 case 1:
  FUNC_3(VAR_5, VAR_9, "/DeviceGray setcolorspace\n");
  break;
 case 3:
  FUNC_3(VAR_5, VAR_9, "/DeviceRGB setcolorspace\n");
  break;
 case 4:
  FUNC_3(VAR_5, VAR_9, "/DeviceCMYK setcolorspace\n");
  break;
 default:
  FUNC_1(VAR_5, VAR_0, "Unexpected colorspace for ps output");
 }
 FUNC_2(VAR_5, VAR_9,
  "<<\n"
  "/ImageType 1\n"
  "/Width %d\n"
  "/Height %d\n"
  "/ImageMatrix [ %g 0 0 -%g 0 %d ]\n"
  "/MultipleDataSources false\n"
  "/DataSource DataFile\n"
  "/BitsPerComponent 8\n"

  "/Interpolate false\n"
  ">>\n"
  "image\n"
  , VAR_10, VAR_11, VAR_19, VAR_20, VAR_11);
}
