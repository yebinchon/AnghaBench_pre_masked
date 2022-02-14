
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void fz_solid_color_painter_t ;
typedef int fz_rasterizer ;
struct TYPE_5__ {int alpha; int n; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_overprint ;
typedef int fz_irect ;
typedef int fz_gel ;
typedef int fz_context ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int ,unsigned char*,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned char*,int *) ;
 scalar_t__ FUNC_3 (int ,int,int ,int,int *) ;
 int FUNC_4 (int *,int *,int,int const*,TYPE_1__*,unsigned char*,void*,int *) ;
 int FUNC_5 (int *,int *,int,int const*,TYPE_1__*,unsigned char*,void*,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_1, fz_rasterizer *VAR_2, int VAR_3, const fz_irect *VAR_4, fz_pixmap *VAR_5, unsigned char *VAR_6, fz_overprint *VAR_7)
{
 fz_gel *VAR_8 = (fz_gel *)VAR_2;

 FUNC_6(VAR_1, VAR_8);

 if (VAR_0 > 0)
 {
  void *VAR_9;
  if (VAR_6)
   VAR_9 = (void *)FUNC_2(VAR_5->n, VAR_5->alpha, VAR_6, VAR_7);
  else
   VAR_9 = (void *)FUNC_3(VAR_5->alpha, 1, 0, 255, VAR_7);
  FUNC_0(VAR_9);
  if (VAR_9 == ((void*)0))
   return;
  FUNC_4(VAR_1, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_9, VAR_7);
 }
 else
 {
  fz_solid_color_painter_t *VAR_10 = FUNC_1(VAR_5->n, VAR_6, VAR_5->alpha, VAR_7);
  FUNC_0(VAR_10);
  if (VAR_10 == ((void*)0))
   return;
  FUNC_5(VAR_1, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, (fz_solid_color_painter_t *)VAR_10, VAR_7);
 }
}
