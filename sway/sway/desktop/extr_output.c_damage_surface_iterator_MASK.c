
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ scale; } ;
struct wlr_surface {TYPE_1__ current; int buffer_damage; } ;
struct wlr_box {int x; int width; int y; int height; } ;
struct sway_output {TYPE_2__* wlr_output; int damage; } ;
typedef int pixman_region32_t ;
struct TYPE_4__ {int scale; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (struct wlr_box*,int ) ;
 int FUNC_6 (struct wlr_box*,struct wlr_box*,float) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,struct wlr_box*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,int *,scalar_t__) ;
 int FUNC_11 (int *,int *,float,int,int) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (struct wlr_surface*,int *) ;

__attribute__((used)) static void FUNC_14(struct sway_output *VAR_0,
  struct wlr_surface *VAR_1, struct wlr_box *VAR_2, float VAR_3,
  void *VAR_4) {
 bool *VAR_5 = VAR_4;
 bool VAR_6 = *VAR_5;

 struct wlr_box VAR_7 = *VAR_2;
 FUNC_5(&VAR_7, VAR_0->wlr_output->scale);

 int VAR_8 = VAR_7.x + VAR_7.width/2;
 int VAR_9 = VAR_7.y + VAR_7.height/2;

 if (FUNC_3(&VAR_1->buffer_damage)) {
  pixman_region32_t VAR_10;
  FUNC_2(&VAR_10);
  FUNC_13(VAR_1, &VAR_10);
  FUNC_12(&VAR_10, &VAR_10, VAR_0->wlr_output->scale);
  if (FUNC_0(VAR_0->wlr_output->scale) > VAR_1->current.scale) {


   FUNC_10(&VAR_10, &VAR_10,
    FUNC_0(VAR_0->wlr_output->scale) - VAR_1->current.scale);
  }
  FUNC_4(&VAR_10, VAR_7.x, VAR_7.y);
  FUNC_11(&VAR_10, &VAR_10, VAR_3,
   VAR_8, VAR_9);
  FUNC_7(VAR_0->damage, &VAR_10);
  FUNC_1(&VAR_10);
 }

 if (VAR_6) {
  FUNC_6(&VAR_7, &VAR_7, VAR_3);
  FUNC_8(VAR_0->damage, &VAR_7);
 }

 FUNC_9(VAR_0->wlr_output);
}
