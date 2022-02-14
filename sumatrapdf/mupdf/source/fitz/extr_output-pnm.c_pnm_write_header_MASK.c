
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_output ;
typedef int fz_context ;
typedef int fz_colorspace ;
struct TYPE_3__ {int w; int h; int n; int alpha; scalar_t__ s; int * out; } ;
typedef TYPE_1__ fz_band_writer ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, fz_band_writer *VAR_2, fz_colorspace *VAR_3)
{
 fz_output *VAR_4 = VAR_2->out;
 int VAR_5 = VAR_2->w;
 int VAR_6 = VAR_2->h;
 int VAR_7 = VAR_2->n;
 int VAR_8 = VAR_2->alpha;

 if (VAR_2->s != 0)
  FUNC_0(VAR_1, VAR_0, "PNM writer cannot cope with spot colors");

 if (VAR_8)
  FUNC_0(VAR_1, VAR_0, "PNM writer cannot cope with alpha");

 VAR_7 -= VAR_8;
 if (VAR_7 != 1 && VAR_7 != 3)
  FUNC_0(VAR_1, VAR_0, "pixmap must be grayscale or rgb to write as pnm");

 if (VAR_7 == 1)
  FUNC_1(VAR_1, VAR_4, "P5\n");
 if (VAR_7 == 3)
  FUNC_1(VAR_1, VAR_4, "P6\n");
 FUNC_1(VAR_1, VAR_4, "%d %d\n", VAR_5, VAR_6);
 FUNC_1(VAR_1, VAR_4, "255\n");
}
