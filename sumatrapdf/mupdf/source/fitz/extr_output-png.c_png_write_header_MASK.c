
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int h; int n; int alpha; scalar_t__ s; int * out; } ;
struct TYPE_5__ {TYPE_1__ super; } ;
typedef TYPE_2__ png_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_band_writer ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,unsigned char const*,int) ;
 int FUNC_3 (int *,TYPE_2__*,int *) ;
 int FUNC_4 (int *,int *,char*,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1, fz_band_writer *VAR_2, fz_colorspace *VAR_3)
{
 png_band_writer *VAR_4 = (png_band_writer *)(void *)VAR_2;
 fz_output *VAR_5 = VAR_4->super.out;
 int VAR_6 = VAR_4->super.w;
 int VAR_7 = VAR_4->super.h;
 int VAR_8 = VAR_4->super.n;
 int VAR_9 = VAR_4->super.alpha;
 static const unsigned char VAR_10[8] = { 137, 80, 78, 71, 13, 10, 26, 10 };
 unsigned char VAR_11[13];
 int VAR_12;

 if (VAR_4->super.s != 0)
  FUNC_1(VAR_1, VAR_0, "PNGs cannot contain spot colors");


 if (VAR_8 == 1 && VAR_9)
  VAR_9 = 0;

 switch (VAR_8 - VAR_9)
 {
 case 1: VAR_12 = (VAR_9 ? 4 : 0); break;
 case 3: VAR_12 = (VAR_9 ? 6 : 2); break;
 default:
  FUNC_1(VAR_1, VAR_0, "pixmap must be grayscale or rgb to write as png");
 }

 FUNC_0(VAR_11+0, VAR_6);
 FUNC_0(VAR_11+4, VAR_7);
 VAR_11[8] = 8;
 VAR_11[9] = VAR_12;
 VAR_11[10] = 0;
 VAR_11[11] = 0;
 VAR_11[12] = 0;

 FUNC_2(VAR_1, VAR_5, VAR_10, 8);
 FUNC_4(VAR_1, VAR_5, "IHDR", VAR_11, 13);

 FUNC_3(VAR_1, VAR_4, VAR_3);
}
