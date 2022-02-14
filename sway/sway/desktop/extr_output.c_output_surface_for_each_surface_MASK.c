
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sway_surface_iterator_func_t ;
struct TYPE_2__ {int height; int width; } ;
struct wlr_surface {TYPE_1__ current; } ;
struct sway_output {int dummy; } ;
struct surface_iterator_data {void* user_data; double ox; double oy; int rotation; int height; int width; struct sway_output* output; int user_iterator; } ;


 int VAR_0 ;
 int FUNC_0 (struct wlr_surface*,int ,struct surface_iterator_data*) ;

void FUNC_1(struct sway_output *VAR_1,
  struct wlr_surface *VAR_2, double VAR_3, double VAR_4,
  sway_surface_iterator_func_t VAR_5, void *VAR_6) {
 struct surface_iterator_data VAR_7 = {
  .user_iterator = VAR_5,
  .user_data = VAR_6,
  .output = VAR_1,
  .ox = VAR_3,
  .oy = VAR_4,
  .width = VAR_2->current.width,
  .height = VAR_2->current.height,
  .rotation = 0,
 };

 FUNC_0(VAR_2,
  VAR_0, &VAR_7);
}
