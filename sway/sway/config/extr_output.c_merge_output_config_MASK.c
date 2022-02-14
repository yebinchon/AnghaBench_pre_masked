
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_config {int enabled; int width; int height; int x; int y; int scale; scalar_t__ subpixel; int refresh_rate; int custom_mode; int transform; scalar_t__ dpms_state; void* background_fallback; void* background_option; void* background; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

void FUNC_2(struct output_config *VAR_1, struct output_config *VAR_2) {
 if (VAR_2->enabled != -1) {
  VAR_1->enabled = VAR_2->enabled;
 }
 if (VAR_2->width != -1) {
  VAR_1->width = VAR_2->width;
 }
 if (VAR_2->height != -1) {
  VAR_1->height = VAR_2->height;
 }
 if (VAR_2->x != -1) {
  VAR_1->x = VAR_2->x;
 }
 if (VAR_2->y != -1) {
  VAR_1->y = VAR_2->y;
 }
 if (VAR_2->scale != -1) {
  VAR_1->scale = VAR_2->scale;
 }
 if (VAR_2->subpixel != VAR_0) {
  VAR_1->subpixel = VAR_2->subpixel;
 }
 if (VAR_2->refresh_rate != -1) {
  VAR_1->refresh_rate = VAR_2->refresh_rate;
 }
 if (VAR_2->custom_mode != -1) {
  VAR_1->custom_mode = VAR_2->custom_mode;
 }
 if (VAR_2->transform != -1) {
  VAR_1->transform = VAR_2->transform;
 }
 if (VAR_2->background) {
  FUNC_0(VAR_1->background);
  VAR_1->background = FUNC_1(VAR_2->background);
 }
 if (VAR_2->background_option) {
  FUNC_0(VAR_1->background_option);
  VAR_1->background_option = FUNC_1(VAR_2->background_option);
 }
 if (VAR_2->background_fallback) {
  FUNC_0(VAR_1->background_fallback);
  VAR_1->background_fallback = FUNC_1(VAR_2->background_fallback);
 }
 if (VAR_2->dpms_state != 0) {
  VAR_1->dpms_state = VAR_2->dpms_state;
 }
}
