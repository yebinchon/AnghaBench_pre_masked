
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_texture {int dummy; } ;
struct wlr_renderer {int dummy; } ;
struct sway_output {TYPE_1__* wlr_output; } ;
struct sway_container {double title_height; int formatted_title; } ;
struct border_colors {int * text; int * background; } ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
typedef int cairo_font_options_t ;
struct TYPE_4__ {int pango_markup; int font; } ;
struct TYPE_3__ {double scale; int backend; int subpixel; } ;
typedef int PangoContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int) ;
 int * FUNC_8 (int ,int,int) ;
 unsigned char* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int ,int ,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 TYPE_2__* VAR_5 ;
 struct sway_output* FUNC_17 (struct sway_container*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int*,int *,int *,double,int ,char*,int ) ;
 int * FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,double,int ,char*,int ) ;
 int FUNC_22 (int ) ;
 struct wlr_renderer* FUNC_23 (int ) ;
 int FUNC_24 (struct wlr_texture*) ;
 struct wlr_texture* FUNC_25 (struct wlr_renderer*,int ,int,int,int,unsigned char*) ;

__attribute__((used)) static void FUNC_26(struct sway_container *VAR_6,
  struct wlr_texture **VAR_7, struct border_colors *VAR_8) {
 struct sway_output *VAR_9 = FUNC_17(VAR_6);
 if (!VAR_9) {
  return;
 }
 if (*VAR_7) {
  FUNC_24(*VAR_7);
  *VAR_7 = ((void*)0);
 }
 if (!VAR_6->formatted_title) {
  return;
 }

 double VAR_10 = VAR_9->wlr_output->scale;
 int VAR_11 = 0;
 int VAR_12 = VAR_6->title_height * VAR_10;



 cairo_surface_t *VAR_13 = FUNC_8(
   VAR_2, 0, 0);
 cairo_t *VAR_14 = FUNC_0(VAR_13);
 FUNC_12(VAR_14, VAR_0);
 cairo_font_options_t *VAR_15 = FUNC_2();
 FUNC_5(VAR_15, VAR_3);
 FUNC_4(VAR_15, VAR_1);
 FUNC_6(VAR_15, FUNC_22(VAR_9->wlr_output->subpixel));
 FUNC_13(VAR_14, VAR_15);
 FUNC_19(VAR_14, VAR_5->font, &VAR_11, ((void*)0), ((void*)0), VAR_10,
   VAR_5->pango_markup, "%s", VAR_6->formatted_title);
 FUNC_15(VAR_13);
 FUNC_1(VAR_14);

 cairo_surface_t *VAR_16 = FUNC_8(
   VAR_2, VAR_11, VAR_12);
 cairo_t *VAR_17 = FUNC_0(VAR_16);
 FUNC_12(VAR_17, VAR_0);
 FUNC_13(VAR_17, VAR_15);
 FUNC_3(VAR_15);
 FUNC_14(VAR_17, VAR_8->background[0], VAR_8->background[1],
   VAR_8->background[2], VAR_8->background[3]);
 FUNC_11(VAR_17);
 PangoContext *VAR_18 = FUNC_20(VAR_17);
 FUNC_14(VAR_17, VAR_8->text[0], VAR_8->text[1],
   VAR_8->text[2], VAR_8->text[3]);
 FUNC_10(VAR_17, 0, 0);

 FUNC_21(VAR_17, VAR_5->font, VAR_10, VAR_5->pango_markup,
   "%s", VAR_6->formatted_title);

 FUNC_16(VAR_16);
 unsigned char *VAR_19 = FUNC_9(VAR_16);
 int VAR_20 = FUNC_7(VAR_2, VAR_11);
 struct wlr_renderer *VAR_21 = FUNC_23(
   VAR_9->wlr_output->backend);
 *VAR_7 = FUNC_25(
   VAR_21, VAR_4, VAR_20, VAR_11, VAR_12, VAR_19);
 FUNC_15(VAR_16);
 FUNC_18(VAR_18);
 FUNC_1(VAR_17);
}
