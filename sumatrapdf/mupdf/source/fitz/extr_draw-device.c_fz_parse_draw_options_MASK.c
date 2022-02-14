
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x_resolution; int y_resolution; void* height; void* width; void* text; void* graphics; scalar_t__ alpha; void* colorspace; void* rotate; } ;
typedef TYPE_1__ fz_draw_options ;
typedef int fz_context ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (char const*) ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char const*,char*,char const**) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 void* FUNC_10 (char const*) ;

fz_draw_options *
FUNC_11(fz_context *VAR_1, fz_draw_options *VAR_2, const char *VAR_3)
{
 const char *VAR_4;

 FUNC_9(VAR_2, 0, sizeof *VAR_2);

 VAR_2->x_resolution = 96;
 VAR_2->y_resolution = 96;
 VAR_2->rotate = 0;
 VAR_2->width = 0;
 VAR_2->height = 0;
 VAR_2->colorspace = FUNC_4(VAR_1);
 VAR_2->alpha = 0;
 VAR_2->graphics = FUNC_0(VAR_1);
 VAR_2->text = FUNC_7(VAR_1);

 if (FUNC_5(VAR_1, VAR_3, "rotate", &VAR_4))
  VAR_2->rotate = FUNC_1(VAR_4);
 if (FUNC_5(VAR_1, VAR_3, "resolution", &VAR_4))
  VAR_2->x_resolution = VAR_2->y_resolution = FUNC_1(VAR_4);
 if (FUNC_5(VAR_1, VAR_3, "x-resolution", &VAR_4))
  VAR_2->x_resolution = FUNC_1(VAR_4);
 if (FUNC_5(VAR_1, VAR_3, "y-resolution", &VAR_4))
  VAR_2->y_resolution = FUNC_1(VAR_4);
 if (FUNC_5(VAR_1, VAR_3, "width", &VAR_4))
  VAR_2->width = FUNC_1(VAR_4);
 if (FUNC_5(VAR_1, VAR_3, "height", &VAR_4))
  VAR_2->height = FUNC_1(VAR_4);
 if (FUNC_5(VAR_1, VAR_3, "colorspace", &VAR_4))
 {
  if (FUNC_6(VAR_4, "gray") || FUNC_6(VAR_4, "grey") || FUNC_6(VAR_4, "mono"))
   VAR_2->colorspace = FUNC_3(VAR_1);
  else if (FUNC_6(VAR_4, "rgb"))
   VAR_2->colorspace = FUNC_4(VAR_1);
  else if (FUNC_6(VAR_4, "cmyk"))
   VAR_2->colorspace = FUNC_2(VAR_1);
  else
   FUNC_8(VAR_1, VAR_0, "unknown colorspace in options");
 }
 if (FUNC_5(VAR_1, VAR_3, "alpha", &VAR_4))
  VAR_2->alpha = FUNC_6(VAR_4, "yes");
 if (FUNC_5(VAR_1, VAR_3, "graphics", &VAR_4))
  VAR_2->text = VAR_2->graphics = FUNC_10(VAR_4);
 if (FUNC_5(VAR_1, VAR_3, "text", &VAR_4))
  VAR_2->text = FUNC_10(VAR_4);


 if (VAR_2->x_resolution <= 0) VAR_2->x_resolution = 96;
 if (VAR_2->y_resolution <= 0) VAR_2->y_resolution = 96;
 if (VAR_2->width < 0) VAR_2->width = 0;
 if (VAR_2->height < 0) VAR_2->height = 0;

 return VAR_2;
}
