
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_box {int height; double y; int width; int x; } ;
struct sway_workspace {double gaps_inner; } ;
struct sway_container {scalar_t__ height_fraction; double y; double height; int width; int x; struct sway_container* parent; struct sway_workspace* workspace; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;
typedef TYPE_1__ list_t ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sway_container*) ;
 double FUNC_1 (double) ;
 int FUNC_2 (int ,int) ;
 double FUNC_3 (double,int ) ;
 int FUNC_4 (int ,char*,struct wlr_box*) ;

__attribute__((used)) static void FUNC_5(list_t *VAR_4, struct wlr_box *VAR_5) {
 if (!VAR_4->length) {
  return;
 }



 int VAR_6 = 0;
 double VAR_7 = 0;
 for (int VAR_8 = 0; VAR_8 < VAR_4->length; ++VAR_8) {
  struct sway_container *VAR_9 = VAR_4->items[VAR_8];
  VAR_7 += VAR_9->height_fraction;
  if (VAR_9->height_fraction <= 0) {
   VAR_6 += 1;
  }
 }


 double VAR_10 = 0;
 for (int VAR_11 = 0; VAR_11 < VAR_4->length; ++VAR_11) {
  struct sway_container *VAR_12 = VAR_4->items[VAR_11];
  if (VAR_12->height_fraction <= 0) {
   if (VAR_7 <= 0) {
    VAR_12->height_fraction = 1.0;
   } else if (VAR_4->length > VAR_6) {
    VAR_12->height_fraction = VAR_7 /
     (VAR_4->length - VAR_6);
   } else {
    VAR_12->height_fraction = VAR_7;
   }
  }
  VAR_10 += VAR_12->height_fraction;
 }

 for (int VAR_13 = 0; VAR_13 < VAR_4->length; ++VAR_13) {
  struct sway_container *VAR_14 = VAR_4->items[VAR_13];
  VAR_14->height_fraction /= VAR_10;
 }


 double VAR_15 = 0;
 struct sway_container *VAR_16 = VAR_4->items[0];
 struct sway_workspace *VAR_17 = VAR_16->workspace;
 if (VAR_17) {
  VAR_15 = VAR_17->gaps_inner;
 }

 struct sway_container *VAR_18 = VAR_16;
 while (VAR_18) {
  enum sway_container_layout VAR_19 = FUNC_0(VAR_18);
  if (VAR_19 == VAR_1 || VAR_19 == VAR_0) {
   VAR_15 = 0;
  }
  VAR_18 = VAR_18->parent;
 }
 double VAR_20 = FUNC_3(VAR_15 * (VAR_4->length - 1),
  FUNC_2(0, VAR_5->height - VAR_2 * VAR_4->length));
 double VAR_21 = VAR_5->height - VAR_20;
 VAR_15 = VAR_20 / (VAR_4->length - 1);


 FUNC_4(VAR_3, "Arranging %p vertically", VAR_5);
 double VAR_22 = VAR_5->y;
 for (int VAR_23 = 0; VAR_23 < VAR_4->length; ++VAR_23) {
  struct sway_container *VAR_24 = VAR_4->items[VAR_23];
  VAR_24->x = VAR_5->x;
  VAR_24->y = VAR_22;
  VAR_24->width = VAR_5->width;
  VAR_24->height = FUNC_1(VAR_24->height_fraction * VAR_21);
  VAR_22 += VAR_24->height + VAR_15;


  if (VAR_23 == VAR_4->length - 1) {
   VAR_24->height = VAR_5->y + VAR_5->height - VAR_24->y;
  }
 }
}
