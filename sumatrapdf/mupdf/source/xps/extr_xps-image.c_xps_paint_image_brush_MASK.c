
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xps_resource ;
struct TYPE_5__ {size_t opacity_top; int * opacity; int dev; } ;
typedef TYPE_1__ xps_document ;
typedef int fz_xml ;
typedef int fz_rect ;
typedef int fz_matrix ;
struct TYPE_6__ {int xres; int yres; int w; int h; } ;
typedef TYPE_2__ fz_image ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (int ,float,float) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, xps_document *VAR_2, fz_matrix VAR_3, fz_rect VAR_4, char *VAR_5, xps_resource *VAR_6,
 fz_xml *VAR_7, void *VAR_8)
{
 fz_image *VAR_9 = VAR_8;
 float VAR_10, VAR_11;

 if (VAR_9->xres == 0 || VAR_9->yres == 0)
  return;
 VAR_10 = VAR_9->w * 96 / VAR_9->xres;
 VAR_11 = VAR_9->h * 96 / VAR_9->yres;
 VAR_3 = FUNC_1(VAR_3, VAR_10, VAR_11);
 FUNC_0(VAR_1, VAR_2->dev, VAR_9, VAR_3, VAR_2->opacity[VAR_2->opacity_top], VAR_0);
}
