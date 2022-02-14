
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_texture {int dummy; } ;
struct wlr_renderer {int dummy; } ;
struct sway_output {TYPE_2__* wlr_output; } ;
struct sway_container {double title_height; TYPE_1__* marks; } ;
struct border_colors {int * text; int * background; } ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
struct TYPE_6__ {int font; } ;
struct TYPE_5__ {double scale; int backend; } ;
struct TYPE_4__ {int length; char** items; } ;
typedef int PangoContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (int ,int,int) ;
 unsigned char* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (size_t,int) ;
 TYPE_3__* VAR_3 ;
 struct sway_output* FUNC_12 (struct sway_container*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int*,int *,int *,double,int,char*,char*) ;
 char* FUNC_16 (size_t) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,double,int,char*,char*) ;
 int FUNC_19 (char*,char*,char*) ;
 int FUNC_20 (char*,char*) ;
 scalar_t__ FUNC_21 (char*) ;
 int FUNC_22 (int,char*) ;
 struct wlr_renderer* FUNC_23 (int ) ;
 int FUNC_24 (struct wlr_texture*) ;
 struct wlr_texture* FUNC_25 (struct wlr_renderer*,int ,int,int,int,unsigned char*) ;

__attribute__((used)) static void FUNC_26(struct sway_container *VAR_4,
  struct wlr_texture **VAR_5, struct border_colors *VAR_6) {
 struct sway_output *VAR_7 = FUNC_12(VAR_4);
 if (!VAR_7) {
  return;
 }
 if (*VAR_5) {
  FUNC_24(*VAR_5);
  *VAR_5 = ((void*)0);
 }
 if (!VAR_4->marks->length) {
  return;
 }

 size_t VAR_8 = 0;
 for (int VAR_9 = 0; VAR_9 < VAR_4->marks->length; ++VAR_9) {
  char *VAR_10 = VAR_4->marks->items[VAR_9];
  if (VAR_10[0] != '_') {
   VAR_8 += FUNC_21(VAR_10) + 2;
  }
 }
 char *VAR_11 = FUNC_11(VAR_8 + 1, 1);
 char *VAR_12 = FUNC_16(VAR_8 + 1);

 if (!FUNC_22(VAR_11 && VAR_12, "Unable to allocate memory")) {
  FUNC_13(VAR_11);
  return;
 }

 for (int VAR_13 = 0; VAR_13 < VAR_4->marks->length; ++VAR_13) {
  char *VAR_14 = VAR_4->marks->items[VAR_13];
  if (VAR_14[0] != '_') {
   FUNC_19(VAR_12, "[%s]", VAR_14);
   FUNC_20(VAR_11, VAR_12);
  }
 }
 FUNC_13(VAR_12);

 double VAR_15 = VAR_7->wlr_output->scale;
 int VAR_16 = 0;
 int VAR_17 = VAR_4->title_height * VAR_15;

 cairo_t *VAR_18 = FUNC_0(((void*)0));
 FUNC_15(VAR_18, VAR_3->font, &VAR_16, ((void*)0), ((void*)0), VAR_15, 0,
   "%s", VAR_11);
 FUNC_1(VAR_18);

 cairo_surface_t *VAR_19 = FUNC_3(
   VAR_1, VAR_16, VAR_17);
 cairo_t *VAR_20 = FUNC_0(VAR_19);
 FUNC_8(VAR_20, VAR_6->background[0], VAR_6->background[1],
   VAR_6->background[2], VAR_6->background[3]);
 FUNC_6(VAR_20);
 PangoContext *VAR_21 = FUNC_17(VAR_20);
 FUNC_7(VAR_20, VAR_0);
 FUNC_8(VAR_20, VAR_6->text[0], VAR_6->text[1],
   VAR_6->text[2], VAR_6->text[3]);
 FUNC_5(VAR_20, 0, 0);

 FUNC_18(VAR_20, VAR_3->font, VAR_15, 0, "%s", VAR_11);

 FUNC_10(VAR_19);
 unsigned char *VAR_22 = FUNC_4(VAR_19);
 int VAR_23 = FUNC_2(VAR_1, VAR_16);
 struct wlr_renderer *VAR_24 = FUNC_23(
   VAR_7->wlr_output->backend);
 *VAR_5 = FUNC_25(
   VAR_24, VAR_2, VAR_23, VAR_16, VAR_17, VAR_22);
 FUNC_9(VAR_19);
 FUNC_14(VAR_21);
 FUNC_1(VAR_20);
 FUNC_13(VAR_11);
}
