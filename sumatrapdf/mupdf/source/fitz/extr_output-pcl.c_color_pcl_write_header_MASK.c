
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_output ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_band_writer ;
struct TYPE_3__ {int w; int h; int n; int s; int alpha; int xres; int yres; int * out; } ;
struct TYPE_4__ {int options; int linebuf; TYPE_1__ super; } ;
typedef TYPE_2__ color_pcl_band_writer ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,char*,int) ;
 int FUNC_3 (int *,int *,char*,int) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,int,int,int,int) ;
 int FUNC_6 (int *,int *,int *,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_1, fz_band_writer *VAR_2, fz_colorspace *VAR_3)
{
 color_pcl_band_writer *VAR_4 = (color_pcl_band_writer *)VAR_2;
 fz_output *VAR_5 = VAR_4->super.out;
 int VAR_6 = VAR_4->super.w;
 int VAR_7 = VAR_4->super.h;
 int VAR_8 = VAR_4->super.n;
 int VAR_9 = VAR_4->super.s;
 int VAR_10 = VAR_4->super.alpha;
 int VAR_11 = VAR_4->super.xres;
 int VAR_12 = VAR_4->super.yres;

 if (VAR_10 != 0)
  FUNC_1(VAR_1, VAR_0, "color PCL cannot write alpha channel");
 if (VAR_9 != 0)
  FUNC_1(VAR_1, VAR_0, "color PCL cannot write spot colors");
 if (VAR_8 != 3)
  FUNC_1(VAR_1, VAR_0, "color PCL must be RGB");

 VAR_4->linebuf = FUNC_0(VAR_1, VAR_6 * 3 * 2);

 FUNC_5(&VAR_4->options, VAR_6, VAR_7, VAR_11, VAR_12);

 FUNC_6(VAR_1, VAR_5, &VAR_4->options, 1, VAR_11, VAR_12, VAR_6, VAR_7);



 FUNC_4(VAR_1, VAR_5, "\033&r0F");


 FUNC_2(VAR_1, VAR_5, "\033*v6W"
  "\000"
  "\003"
  "\000"
  "\010"
  "\010"
  "\010",
  11
  );




 FUNC_3(VAR_1, VAR_5, "\033*t%dR", VAR_11);
}
