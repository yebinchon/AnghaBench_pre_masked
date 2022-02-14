
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct swaybar_sni {int target_size; int min_size; int max_size; int watcher_id; scalar_t__ icon; } ;
struct swaybar_output {int height; int scale; int hotspots; TYPE_2__* bar; } ;
struct swaybar_hotspot {double x; int width; int height; int link; int data; int destroy; int callback; int y; } ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
typedef int cairo_operator_t ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {int tray_padding; int icon_theme; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,double,double,double,double,double) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int,int) ;
 int FUNC_6 (scalar_t__) ;
 int * FUNC_7 (scalar_t__,int,int) ;
 int FUNC_8 (int *,double,int,int,int) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,double) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int *,double,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int,int) ;
 struct swaybar_hotspot* FUNC_17 (int,int) ;
 int FUNC_18 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_19 (struct swaybar_sni*,int ,int) ;
 scalar_t__ FUNC_20 (struct swaybar_sni*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *,int *) ;

uint32_t FUNC_23(cairo_t *VAR_5, struct swaybar_output *VAR_6, double *VAR_7,
  struct swaybar_sni *VAR_8) {
 uint32_t VAR_9 = VAR_6->height * VAR_6->scale;
 int VAR_10 = VAR_6->bar->config->tray_padding;
 int VAR_11 = VAR_9 - 2*VAR_10;
 if (VAR_11 != VAR_8->target_size && FUNC_20(VAR_8)) {

  if (VAR_11 < VAR_8->min_size || VAR_11 > VAR_8->max_size) {
   FUNC_19(VAR_8, VAR_6->bar->config->icon_theme, VAR_11);
  }

  VAR_8->target_size = VAR_11;
 }

 int VAR_12;
 cairo_surface_t *VAR_13;
 if (VAR_8->icon) {
  int VAR_14 = FUNC_6(VAR_8->icon);
  VAR_12 = VAR_14 < VAR_11 ?
   VAR_14*(VAR_11/VAR_14) : VAR_11;
  VAR_13 = FUNC_7(VAR_8->icon, VAR_12, VAR_12);
 } else {
  VAR_12 = VAR_11*0.8;
  VAR_13 = FUNC_5(VAR_0, VAR_12, VAR_12);
  cairo_t *VAR_15 = FUNC_1(VAR_13);
  FUNC_13(VAR_15, 0xFF0000FF);
  FUNC_16(VAR_15, VAR_12/2, VAR_12/2);
  FUNC_9(VAR_15, VAR_12/2, VAR_12/2);
  FUNC_0(VAR_15, 0, 0, 1, 0, 7);
  FUNC_3(VAR_15);
  FUNC_11(VAR_15, VAR_1);
  FUNC_0(VAR_15, 0.35, -0.3, 0.1, 0, 7);
  FUNC_3(VAR_15);
  FUNC_0(VAR_15, -0.35, -0.3, 0.1, 0, 7);
  FUNC_3(VAR_15);
  FUNC_0(VAR_15, 0, 0.75, 0.5, 3.71238898038469, 5.71238898038469);
  FUNC_10(VAR_15, 0.1);
  FUNC_14(VAR_15);
  FUNC_2(VAR_15);
 }

 int VAR_16 = VAR_12 + 2*VAR_10;
 *VAR_7 -= VAR_16;
 int VAR_17 = FUNC_18((VAR_9 - VAR_16) / 2.0);

 cairo_operator_t VAR_18 = FUNC_4(VAR_5);
 FUNC_11(VAR_5, VAR_2);
 FUNC_12(VAR_5, VAR_13, *VAR_7 + VAR_10, VAR_17 + VAR_10);
 FUNC_8(VAR_5, *VAR_7, VAR_17, VAR_16, VAR_16);
 FUNC_3(VAR_5);
 FUNC_11(VAR_5, VAR_18);

 FUNC_15(VAR_13);

 struct swaybar_hotspot *VAR_19 = FUNC_17(1, sizeof(struct swaybar_hotspot));
 VAR_19->x = *VAR_7;
 VAR_19->y = 0;
 VAR_19->width = VAR_9;
 VAR_19->height = VAR_9;
 VAR_19->callback = VAR_4;
 VAR_19->destroy = VAR_3;
 VAR_19->data = FUNC_21(VAR_8->watcher_id);
 FUNC_22(&VAR_6->hotspots, &VAR_19->link);

 return VAR_6->height;
}
