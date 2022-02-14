
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
  FUNC_0(VAR_1, VAR_0, "PAM writer cannot cope with spot colors");

 FUNC_1(VAR_1, VAR_4, "P7\n");
 FUNC_1(VAR_1, VAR_4, "WIDTH %d\n", VAR_5);
 FUNC_1(VAR_1, VAR_4, "HEIGHT %d\n", VAR_6);
 FUNC_1(VAR_1, VAR_4, "DEPTH %d\n", VAR_7);
 FUNC_1(VAR_1, VAR_4, "MAXVAL 255\n");

 VAR_7 -= VAR_8;

 if (VAR_7 == 0 && VAR_8) FUNC_1(VAR_1, VAR_4, "TUPLTYPE GRAYSCALE\n");
 else if (VAR_7 == 1 && !VAR_8) FUNC_1(VAR_1, VAR_4, "TUPLTYPE GRAYSCALE\n");
 else if (VAR_7 == 1 && VAR_8) FUNC_1(VAR_1, VAR_4, "TUPLTYPE GRAYSCALE_ALPHA\n");
 else if (VAR_7 == 3 && !VAR_8) FUNC_1(VAR_1, VAR_4, "TUPLTYPE RGB\n");
 else if (VAR_7 == 3 && VAR_8) FUNC_1(VAR_1, VAR_4, "TUPLTYPE RGB_ALPHA\n");
 else if (VAR_7 == 4 && !VAR_8) FUNC_1(VAR_1, VAR_4, "TUPLTYPE CMYK\n");
 else if (VAR_7 == 4 && VAR_8) FUNC_1(VAR_1, VAR_4, "TUPLTYPE CMYK_ALPHA\n");
 FUNC_1(VAR_1, VAR_4, "ENDHDR\n");
}
