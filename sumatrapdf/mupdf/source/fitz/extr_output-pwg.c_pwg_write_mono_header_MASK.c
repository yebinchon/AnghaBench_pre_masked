
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int yres; int xres; int out; } ;
struct TYPE_4__ {TYPE_1__ super; int pwg; } ;
typedef TYPE_2__ pwg_band_writer ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_band_writer ;


 int FUNC_0 (int *,int ,int *,int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_band_writer *VAR_1, fz_colorspace *VAR_2)
{
 pwg_band_writer *VAR_3 = (pwg_band_writer *)VAR_1;

 FUNC_0(VAR_0, VAR_3->super.out, &VAR_3->pwg,
  VAR_3->super.xres, VAR_3->super.yres, VAR_3->super.w, VAR_3->super.h, 1);
}
