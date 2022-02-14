
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; scalar_t__ s; scalar_t__ alpha; int h; int w; int yres; int xres; int out; } ;
struct TYPE_4__ {TYPE_1__ super; int pwg; } ;
typedef TYPE_2__ pwg_band_writer ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_band_writer ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,int *,int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, fz_band_writer *VAR_2, fz_colorspace *VAR_3)
{
 pwg_band_writer *VAR_4 = (pwg_band_writer *)VAR_2;
 int VAR_5 = VAR_4->super.n;

 if (VAR_4->super.s != 0)
  FUNC_0(VAR_1, VAR_0, "PWG band writer cannot cope with spot colors");
 if (VAR_4->super.alpha != 0)
  FUNC_0(VAR_1, VAR_0, "PWG band writer cannot cope with alpha");
 if (VAR_5 != 1 && VAR_5 != 3 && VAR_5 != 4)
  FUNC_0(VAR_1, VAR_0, "pixmap must be grayscale, rgb or cmyk to write as pwg");

 FUNC_1(VAR_1, VAR_4->super.out, &VAR_4->pwg,
   VAR_4->super.xres, VAR_4->super.yres, VAR_4->super.w, VAR_4->super.h, VAR_5*8);
}
