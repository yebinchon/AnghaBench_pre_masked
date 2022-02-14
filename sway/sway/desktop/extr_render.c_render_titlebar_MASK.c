
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_texture {int dummy; } ;
struct wlr_box {int x; int y; int width; int height; } ;
struct sway_output {double lx; double ly; TYPE_1__* wlr_output; } ;
struct sway_container {int title_baseline; int alpha; } ;
struct border_colors {int background; int border; } ;
typedef int pixman_region32_t ;
typedef enum alignment { ____Placeholder_alignment } alignment ;
struct TYPE_4__ {int titlebar_border_thickness; int titlebar_h_padding; int titlebar_v_padding; int title_align; int font_height; int font_baseline; scalar_t__ show_marks; } ;
struct TYPE_3__ {float scale; int transform_matrix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (float**,int ,int) ;
 int FUNC_4 (float*,int ) ;
 int FUNC_5 (struct sway_output*,int *,struct wlr_box*,float*) ;
 int FUNC_6 (TYPE_1__*,int *,struct wlr_texture*,struct wlr_box*,float*,int ) ;
 int FUNC_7 (double) ;
 int FUNC_8 (struct wlr_box*,float) ;
 int FUNC_9 (int,int,float) ;
 int FUNC_10 (float*,struct wlr_box*,int ,double,int ) ;
 int FUNC_11 (struct wlr_texture*,int*,int*) ;

__attribute__((used)) static void FUNC_12(struct sway_output *VAR_5,
  pixman_region32_t *VAR_6, struct sway_container *VAR_7,
  int VAR_8, int VAR_9, int VAR_10,
  struct border_colors *VAR_11, struct wlr_texture *VAR_12,
  struct wlr_texture *VAR_13) {
 struct wlr_box VAR_14;
 float VAR_15[4];
 float VAR_16 = VAR_5->wlr_output->scale;
 double VAR_17 = VAR_5->lx;
 double VAR_18 = VAR_5->ly;
 int VAR_19 = VAR_4->titlebar_border_thickness;
 int VAR_20 = VAR_4->titlebar_h_padding;
 int VAR_21 = VAR_4->titlebar_v_padding;
 enum alignment VAR_22 = VAR_4->title_align;


 FUNC_3(&VAR_15, VAR_11->border, sizeof(float) * 4);
 FUNC_4(VAR_15, VAR_7->alpha);
 VAR_14.x = VAR_8;
 VAR_14.y = VAR_9;
 VAR_14.width = VAR_10;
 VAR_14.height = VAR_19;
 FUNC_8(&VAR_14, VAR_16);
 FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);


 VAR_14.x = VAR_8;
 VAR_14.y = VAR_9 + FUNC_1() - VAR_19;
 VAR_14.width = VAR_10;
 VAR_14.height = VAR_19;
 FUNC_8(&VAR_14, VAR_16);
 FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);


 VAR_14.x = VAR_8;
 VAR_14.y = VAR_9 + VAR_19;
 VAR_14.width = VAR_19;
 VAR_14.height = FUNC_1() - VAR_19 * 2;
 FUNC_8(&VAR_14, VAR_16);
 FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);


 VAR_14.x = VAR_8 + VAR_10 - VAR_19;
 VAR_14.y = VAR_9 + VAR_19;
 VAR_14.width = VAR_19;
 VAR_14.height = FUNC_1() - VAR_19 * 2;
 FUNC_8(&VAR_14, VAR_16);
 FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);

 int VAR_23 = VAR_8 - VAR_17 + VAR_20;
 int VAR_24 = VAR_9 + VAR_19;
 size_t VAR_25 = VAR_10 - VAR_20 * 2;


 int VAR_26 = FUNC_7(VAR_23 * VAR_16);
 int VAR_27 = FUNC_9(VAR_25, VAR_23, VAR_16);
 int VAR_28 = FUNC_9(
   (VAR_21 - VAR_19) * 2 +
   VAR_4->font_height, VAR_24, VAR_16);


 int VAR_29 = 0;
 int VAR_30 = 0;
 if (VAR_4->show_marks && VAR_13) {
  struct wlr_box VAR_31;
  FUNC_11(VAR_13,
   &VAR_31.width, &VAR_31.height);
  VAR_30 = VAR_31.width;



  int VAR_32 = VAR_28 - VAR_31.height;
  int VAR_33 = FUNC_2(VAR_32 / 2.0);
  int VAR_34 = FUNC_0(VAR_32 / 2.0);



  if (VAR_22 == VAR_2 || VAR_31.width > VAR_27) {
   VAR_31.x = VAR_26;
  } else {
   VAR_31.x = VAR_26 + VAR_27 - VAR_31.width;
  }
  VAR_29 = VAR_31.x;

  VAR_31.y = FUNC_7((VAR_24 - VAR_18) * VAR_16) +
   VAR_33;

  float VAR_35[9];
  FUNC_10(VAR_35, &VAR_31,
   VAR_3,
   0.0, VAR_5->wlr_output->transform_matrix);

  if (VAR_27 < VAR_31.width) {
   VAR_31.width = VAR_27;
  }
  FUNC_6(VAR_5->wlr_output, VAR_6, VAR_13,
   &VAR_31, VAR_35, VAR_7->alpha);


  FUNC_3(&VAR_15, VAR_11->background, sizeof(float) * 4);
  FUNC_4(VAR_15, VAR_7->alpha);
  VAR_14.x = VAR_31.x + FUNC_7(VAR_17 * VAR_16);
  VAR_14.y = FUNC_7((VAR_9 + VAR_19) * VAR_16);
  VAR_14.width = VAR_31.width;
  VAR_14.height = VAR_33;
  FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);


  VAR_14.y += VAR_33 + VAR_31.height;
  VAR_14.height = VAR_34;
  FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);
 }


 int VAR_36 = 0;
 int VAR_37 = 0;
 if (VAR_12) {
  struct wlr_box VAR_38;
  FUNC_11(VAR_12,
   &VAR_38.width, &VAR_38.height);
  VAR_37 = VAR_38.width;



  int VAR_39 = FUNC_7((VAR_4->font_baseline -
     VAR_7->title_baseline + VAR_21 -
     VAR_19) * VAR_16);
  int VAR_40 = VAR_28 - VAR_39 -
   VAR_38.height;


  if (VAR_38.width > VAR_27 - VAR_30) {
   VAR_38.x = (VAR_22 == VAR_2 && VAR_30)
    ? VAR_29 + VAR_30 : VAR_26;
  } else if (VAR_22 == VAR_1) {
   VAR_38.x = VAR_26;
  } else if (VAR_22 == VAR_0) {


   if (VAR_30) {
    VAR_38.x = (VAR_26 + VAR_29) / 2
     - VAR_38.width / 2;
   } else {
    VAR_38.x = VAR_26 + VAR_27 / 2
     - VAR_38.width / 2;
   }
  } else {
   VAR_38.x = VAR_26 + VAR_27 - VAR_38.width;
  }
  VAR_36 = VAR_38.x;

  VAR_38.y =
   FUNC_7((VAR_24 - VAR_18) * VAR_16) + VAR_39;

  float VAR_41[9];
  FUNC_10(VAR_41, &VAR_38,
   VAR_3,
   0.0, VAR_5->wlr_output->transform_matrix);

  if (VAR_27 - VAR_30 < VAR_38.width) {
   VAR_38.width = VAR_27 - VAR_30;
  }

  FUNC_6(VAR_5->wlr_output, VAR_6, VAR_12,
   &VAR_38, VAR_41, VAR_7->alpha);


  FUNC_3(&VAR_15, VAR_11->background, sizeof(float) * 4);
  FUNC_4(VAR_15, VAR_7->alpha);
  VAR_14.x = VAR_38.x + FUNC_7(VAR_17 * VAR_16);
  VAR_14.y = FUNC_7((VAR_9 + VAR_19) * VAR_16);
  VAR_14.width = VAR_38.width;
  VAR_14.height = VAR_39;
  FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);


  VAR_14.y += VAR_39 + VAR_38.height;
  VAR_14.height = VAR_40;
  FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);
 }


 int VAR_42, VAR_43, VAR_44, VAR_45;
 if (VAR_37 == 0 && VAR_30 == 0) {
  VAR_42 = VAR_26;
  VAR_43 = 0;
  VAR_44 = VAR_26;
  VAR_45 = 0;
 } else if (VAR_36 < VAR_29) {
  VAR_42 = VAR_36;
  VAR_43 = VAR_37;
  VAR_44 = VAR_29;
  VAR_45 = VAR_30;
 } else {
  VAR_42 = VAR_29;
  VAR_43 = VAR_30;
  VAR_44 = VAR_36;
  VAR_45 = VAR_37;
 }
 if (VAR_42 < VAR_26) {
  VAR_42 = VAR_26;
 } else if (VAR_42 + VAR_43 > VAR_44 + VAR_45) {
  VAR_44 = VAR_42;
  VAR_45 = VAR_43;
 }


 VAR_14.width = VAR_44 - VAR_42 - VAR_43;
 if (VAR_14.width > 0) {
  VAR_14.x = VAR_42 + VAR_43 + FUNC_7(VAR_17 * VAR_16);
  VAR_14.y = FUNC_7(VAR_24 * VAR_16);
  VAR_14.height = VAR_28;
  FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);
 }


 VAR_14.x = VAR_8 + VAR_19;
 VAR_14.y = VAR_9 + VAR_19;
 VAR_14.width = VAR_20 - VAR_19;
 VAR_14.height = (VAR_21 - VAR_19) * 2 +
  VAR_4->font_height;
 FUNC_8(&VAR_14, VAR_16);
 int VAR_46 = VAR_42 + FUNC_7(VAR_17 * VAR_16);
 if (VAR_14.x + VAR_14.width < VAR_46) {
  VAR_14.width += VAR_46 - VAR_14.x - VAR_14.width;
 }
 FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);


 VAR_14.x = VAR_8 + VAR_10 - VAR_20;
 VAR_14.y = VAR_9 + VAR_19;
 VAR_14.width = VAR_20 - VAR_19;
 VAR_14.height = (VAR_21 - VAR_19) * 2 +
  VAR_4->font_height;
 FUNC_8(&VAR_14, VAR_16);
 int VAR_47 = VAR_44 + VAR_45 + FUNC_7(VAR_17 * VAR_16);
 if (VAR_47 < VAR_14.x) {
  VAR_14.width += VAR_14.x - VAR_47;
  VAR_14.x = VAR_47;
 }
 FUNC_5(VAR_5, VAR_6, &VAR_14, VAR_15);
}
