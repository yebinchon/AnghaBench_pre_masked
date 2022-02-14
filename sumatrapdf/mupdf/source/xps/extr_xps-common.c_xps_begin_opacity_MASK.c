
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xps_resource ;
struct TYPE_5__ {int opacity_top; float* opacity; int * dev; } ;
typedef TYPE_1__ xps_document ;
typedef int fz_xml ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int VAR_0 ;
 float FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int ,int ,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (float*) ;
 int FUNC_6 (int *,TYPE_1__*,int ,int ,char*,int *,int *) ;
 int FUNC_7 (int *,TYPE_1__*,char*,char*,int **,float*) ;

void
FUNC_8(fz_context *VAR_2, xps_document *VAR_3, fz_matrix VAR_4, fz_rect VAR_5,
 char *VAR_6, xps_resource *VAR_7,
 char *VAR_8, fz_xml *VAR_9)
{
 fz_device *VAR_10 = VAR_3->dev;
 float VAR_11;

 if (!VAR_8 && !VAR_9)
  return;

 VAR_11 = 1;
 if (VAR_8)
  VAR_11 = FUNC_0(VAR_8);

 if (FUNC_4(VAR_9, "SolidColorBrush"))
 {
  char *VAR_12 = FUNC_3(VAR_9, "Opacity");
  char *VAR_13 = FUNC_3(VAR_9, "Color");
  if (VAR_12)
   VAR_11 = VAR_11 * FUNC_0(VAR_12);
  if (VAR_13)
  {
   fz_colorspace *VAR_14;
   float VAR_15[VAR_0];
   FUNC_7(VAR_2, VAR_3, VAR_6, VAR_13, &VAR_14, VAR_15);
   VAR_11 = VAR_11 * VAR_15[0];
  }
  VAR_9 = ((void*)0);
 }

 if (VAR_3->opacity_top + 1 < (int)FUNC_5(VAR_3->opacity))
 {
  VAR_3->opacity[VAR_3->opacity_top + 1] = VAR_3->opacity[VAR_3->opacity_top] * VAR_11;
  VAR_3->opacity_top++;
 }

 if (VAR_9)
 {
  FUNC_1(VAR_2, VAR_10, VAR_5, 0, ((void*)0), ((void*)0), VAR_1);
  FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
  FUNC_2(VAR_2, VAR_10);
 }
}
