
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int strip_height; } ;
struct TYPE_5__ {int w; int h; int n; int * out; } ;
struct TYPE_7__ {scalar_t__ stripbuf; TYPE_2__ options; TYPE_1__ super; } ;
typedef TYPE_3__ pclm_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;


 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (scalar_t__,unsigned char const*,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_band_writer *VAR_1, int VAR_2, int VAR_3, int VAR_4, const unsigned char *VAR_5)
{
 pclm_band_writer *VAR_6 = (pclm_band_writer *)VAR_1;
 fz_output *VAR_7 = VAR_6->super.out;
 int VAR_8 = VAR_6->super.w;
 int VAR_9 = VAR_6->super.h;
 int VAR_10 = VAR_6->super.n;
 int VAR_11 = VAR_6->options.strip_height;
 int VAR_12;

 if (!VAR_7)
  return;

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
 {
  int VAR_13 = (VAR_3+VAR_12) % VAR_11;
  FUNC_1(VAR_6->stripbuf + VAR_8*VAR_10*VAR_13, VAR_5 + VAR_12 * VAR_8*VAR_10, VAR_8*VAR_10);
  if (VAR_13+1 == VAR_11)
   FUNC_0(VAR_0, VAR_6, VAR_13+1);
 }

 if (VAR_3 + VAR_4 == VAR_9 && VAR_9 % VAR_11 != 0)
  FUNC_0(VAR_0, VAR_6, VAR_9 % VAR_11);
}
