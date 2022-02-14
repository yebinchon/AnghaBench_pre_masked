
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int n; int alpha; int * colorspace; scalar_t__ seps; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_overprint ;
struct TYPE_14__ {int default_cs; } ;
typedef TYPE_2__ fz_draw_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *,int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*,int *,int *,int ,int ,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int *,TYPE_1__*,int *,int ) ;

__attribute__((used)) static fz_pixmap *
FUNC_7(fz_context *VAR_1, fz_pixmap *VAR_2, fz_colorspace *VAR_3, fz_colorspace *VAR_4, fz_pixmap *VAR_5, fz_color_params VAR_6, fz_draw_device *VAR_7, fz_overprint **VAR_8)
{
 fz_pixmap *VAR_9;

 if (FUNC_1(VAR_1, VAR_4) && VAR_5->seps)
 {
  VAR_9 = FUNC_0(VAR_1, VAR_2, ((void*)0), VAR_3, VAR_5->seps, VAR_6, VAR_7->default_cs);
  *VAR_8 = FUNC_6(VAR_1, *VAR_8, VAR_5, VAR_4, 0);
 }
 else
 {
  VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3, ((void*)0), VAR_7->default_cs, VAR_6, 1);
  if (*VAR_8)
  {
   if (FUNC_2(VAR_1, VAR_3) != VAR_0)
   {

    *VAR_8 = ((void*)0);
   }
   else if (!FUNC_1(VAR_1, VAR_2->colorspace))
   {
    int VAR_10;
    int VAR_11 = VAR_5->n - VAR_5->alpha;
    for (VAR_10 = 4; VAR_10 < VAR_11; VAR_10++)
     FUNC_5(*VAR_8, VAR_10);
   }
   else
   {
    *VAR_8 = FUNC_6(VAR_1, *VAR_8, VAR_5, VAR_4, 0);
   }
  }
 }
 FUNC_4(VAR_1, VAR_2);

 return VAR_9;
}
