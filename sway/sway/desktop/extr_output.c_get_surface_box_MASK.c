
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct wlr_surface {int sx; int sy; TYPE_1__ current; } ;
struct wlr_box {int width; int height; int y; int x; } ;
struct sway_output {int width; int height; } ;
struct surface_iterator_data {int rotation; int oy; int ox; int height; int width; struct sway_output* output; } ;


 int FUNC_0 (struct wlr_box*,struct wlr_box*,int) ;
 int FUNC_1 (double*,double*,int,int,int ,int ,int ) ;
 int FUNC_2 (struct wlr_box*,struct wlr_box*,struct wlr_box*) ;
 int FUNC_3 (struct wlr_box*,struct wlr_box*,int ) ;
 int FUNC_4 (struct wlr_surface*) ;

__attribute__((used)) static bool FUNC_5(struct surface_iterator_data *VAR_0,
  struct wlr_surface *VAR_1, int VAR_2, int VAR_3,
  struct wlr_box *VAR_4) {
 struct sway_output *VAR_5 = VAR_0->output;

 if (!FUNC_4(VAR_1)) {
  return 0;
 }

 int VAR_6 = VAR_1->current.width;
 int VAR_7 = VAR_1->current.height;

 double VAR_8 = VAR_2 + VAR_1->sx;
 double VAR_9 = VAR_3 + VAR_1->sy;
 FUNC_1(&VAR_8, &VAR_9, VAR_6, VAR_7, VAR_0->width, VAR_0->height,
  VAR_0->rotation);

 struct wlr_box VAR_10 = {
  .x = VAR_0->ox + VAR_8,
  .y = VAR_0->oy + VAR_9,
  .width = VAR_6,
  .height = VAR_7,
 };
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4, &VAR_10, sizeof(struct wlr_box));
 }

 struct wlr_box VAR_11;
 FUNC_3(&VAR_11, &VAR_10, VAR_0->rotation);

 struct wlr_box VAR_12 = {
  .width = VAR_5->width,
  .height = VAR_5->height,
 };

 struct wlr_box VAR_13;
 return FUNC_2(&VAR_13, &VAR_12, &VAR_11);
}
