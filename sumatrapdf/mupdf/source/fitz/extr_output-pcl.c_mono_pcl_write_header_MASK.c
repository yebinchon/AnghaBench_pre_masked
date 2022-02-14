
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int features; } ;
struct TYPE_5__ {int w; int h; int xres; int yres; scalar_t__ alpha; scalar_t__ s; int n; int * out; } ;
struct TYPE_6__ {int top_of_page; TYPE_3__ options; scalar_t__ num_blank_lines; void* mode3buf; void* mode2buf; void* prev; TYPE_1__ super; } ;
typedef TYPE_2__ mono_pcl_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_band_writer ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (TYPE_3__*,int,int,int,int) ;
 int FUNC_4 (int *,int *,TYPE_3__*,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_2, fz_band_writer *VAR_3, fz_colorspace *VAR_4)
{
 mono_pcl_band_writer *VAR_5 = (mono_pcl_band_writer *)VAR_3;
 fz_output *VAR_6 = VAR_5->super.out;
 int VAR_7 = VAR_5->super.w;
 int VAR_8 = VAR_5->super.h;
 int VAR_9 = VAR_5->super.xres;
 int VAR_10 = VAR_5->super.yres;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_5->super.alpha != 0)
  FUNC_1(VAR_2, VAR_0, "mono PCL cannot write alpha channel");
 if (VAR_5->super.s != 0)
  FUNC_1(VAR_2, VAR_0, "mono PCL cannot write spot colors");
 if (VAR_5->super.n != 1)
  FUNC_1(VAR_2, VAR_0, "mono PCL must be grayscale");

 VAR_11 = (VAR_7 + 7)/8;
 VAR_12 = VAR_11 + (VAR_11/127) + 1;
 VAR_13 = VAR_11 + (VAR_11/8) + 1;

 VAR_5->prev = FUNC_0(VAR_2, VAR_11, sizeof(unsigned char));
 VAR_5->mode2buf = FUNC_0(VAR_2, VAR_12, sizeof(unsigned char));
 VAR_5->mode3buf = FUNC_0(VAR_2, VAR_13, sizeof(unsigned char));
 VAR_5->num_blank_lines = 0;
 VAR_5->top_of_page = 1;

 FUNC_3(&VAR_5->options, VAR_7, VAR_8, VAR_9, VAR_10);

 if (VAR_5->options.features & VAR_1)
 {

  FUNC_2(VAR_2, VAR_6, "\033%1BBPIN;\033%1A");
 }

 FUNC_4(VAR_2, VAR_6, &VAR_5->options, 1, VAR_9, VAR_10, VAR_7, VAR_8);
}
