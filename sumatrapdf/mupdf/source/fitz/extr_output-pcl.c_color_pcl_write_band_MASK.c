
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;
struct TYPE_4__ {int w; int h; int xres; int * out; } ;
struct TYPE_5__ {TYPE_1__ super; } ;
typedef TYPE_2__ color_pcl_band_writer ;


 int FUNC_0 (int *,TYPE_2__*,unsigned char const*,int,int,int) ;
 int FUNC_1 (int *,int *,char*,int,...) ;
 int FUNC_2 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_band_writer *VAR_1, int VAR_2, int VAR_3, int VAR_4, const unsigned char *VAR_5)
{
 color_pcl_band_writer *VAR_6 = (color_pcl_band_writer *)VAR_1;
 fz_output *VAR_7 = VAR_6->super.out;
 int VAR_8 = VAR_6->super.w;
 int VAR_9 = VAR_6->super.h;
 int VAR_10 = VAR_6->super.xres;
 int VAR_11;
 int VAR_12;

 if (!VAR_7)
  return;

 if (VAR_3+VAR_4 >= VAR_9)
  VAR_4 = VAR_9 - VAR_3;





 VAR_11 = 10800;
 if (VAR_11 > VAR_8)
  VAR_11 = VAR_8;

 for (VAR_12 = 0; VAR_12*VAR_11 < VAR_8; VAR_12++)
 {
  int VAR_13 = VAR_8 - VAR_11*VAR_12;
  if (VAR_13 > VAR_11)
   VAR_13 = VAR_11;


  FUNC_1(VAR_0, VAR_7, "\033*p%dx%dY", VAR_12*VAR_11, VAR_3);


  FUNC_1(VAR_0, VAR_7, "\033*r%dT", VAR_4);


  FUNC_1(VAR_0, VAR_7, "\033*r%dS", VAR_13);


  FUNC_1(VAR_0, VAR_7, "\033*t%dV", VAR_4*720/VAR_10);


  FUNC_1(VAR_0, VAR_7, "\033*t%dH", VAR_13*720/VAR_10);



  FUNC_2(VAR_0, VAR_7, "\033*r3A");



  FUNC_2(VAR_0, VAR_7, "\033*b5M");

  FUNC_0(VAR_0, VAR_6, VAR_5 + VAR_12 * VAR_11 * 3, VAR_13, VAR_4, VAR_2);
 }
}
