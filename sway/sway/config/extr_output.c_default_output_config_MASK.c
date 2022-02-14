
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_output_mode {float refresh; int height; int width; } ;
struct wlr_output {struct sway_output* data; } ;
struct sway_output {int detected_subpixel; } ;
struct output_config {int enabled; float refresh_rate; int x; int y; int scale; int dpms_state; int transform; int subpixel; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wlr_output_mode* FUNC_0 (struct wlr_output*) ;

__attribute__((used)) static void FUNC_1(struct output_config *VAR_2,
  struct wlr_output *VAR_3) {
 VAR_2->enabled = 1;
 struct wlr_output_mode *VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != ((void*)0)) {
  VAR_2->width = VAR_4->width;
  VAR_2->height = VAR_4->height;
  VAR_2->refresh_rate = VAR_4->refresh / 1000.f;
 }
 VAR_2->x = VAR_2->y = -1;
 VAR_2->scale = 1;
 struct sway_output *VAR_5 = VAR_3->data;
 VAR_2->subpixel = VAR_5->detected_subpixel;
 VAR_2->transform = VAR_1;
 VAR_2->dpms_state = VAR_0;
}
