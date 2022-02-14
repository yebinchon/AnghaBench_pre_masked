
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_output {int dummy; } ;
struct wlr_box {int x; int width; int y; int height; } ;
struct sway_output {int wlr_output; } ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_2__ {int output_layout; } ;


 struct sway_output* FUNC_0 (struct wlr_output*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int,char*,int) ;
 struct wlr_output* FUNC_2 (int ,int,int ,int,int) ;
 struct wlr_box* FUNC_3 (int ,int ) ;

struct sway_output *FUNC_4(struct sway_output *VAR_1,
  enum wlr_direction VAR_2) {
 if (!FUNC_1(VAR_2, "got invalid direction: %d", VAR_2)) {
  return ((void*)0);
 }
 struct wlr_box *VAR_3 =
  FUNC_3(VAR_0->output_layout, VAR_1->wlr_output);
 int VAR_4 = VAR_3->x + VAR_3->width / 2;
 int VAR_5 = VAR_3->y + VAR_3->height / 2;
 struct wlr_output *VAR_6 = FUNC_2(
   VAR_0->output_layout, VAR_2, VAR_1->wlr_output, VAR_4, VAR_5);
 if (!VAR_6) {
  return ((void*)0);
 }
 return FUNC_0(VAR_6);
}
