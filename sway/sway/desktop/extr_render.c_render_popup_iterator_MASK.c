
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_surface {int dummy; } ;
struct wlr_box {int y; int x; } ;
struct sway_output {int dummy; } ;


 int FUNC_0 (struct sway_output*,struct wlr_surface*,int ,int ,int (*) (struct sway_output*,struct wlr_surface*,struct wlr_box*,float,void*),void*) ;
 int FUNC_1 (struct sway_output*,struct wlr_surface*,struct wlr_box*,float,void*) ;

__attribute__((used)) static void FUNC_2(struct sway_output *VAR_0,
  struct wlr_surface *VAR_1, struct wlr_box *VAR_2, float VAR_3,
  void *VAR_4) {

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);


 FUNC_0(VAR_0, VAR_1, VAR_2->x, VAR_2->y,
   FUNC_1, VAR_4);
}
