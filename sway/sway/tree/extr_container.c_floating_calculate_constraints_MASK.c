
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_box {int width; int height; } ;
struct TYPE_4__ {int floating_minimum_width; int floating_minimum_height; int floating_maximum_width; int floating_maximum_height; } ;
struct TYPE_3__ {int output_layout; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct wlr_box* FUNC_0 (int ,int *) ;

void FUNC_1(int *VAR_3, int *VAR_4,
  int *VAR_5, int *VAR_6) {
 if (VAR_1->floating_minimum_width == -1) {
  *VAR_3 = 0;
 } else if (VAR_1->floating_minimum_width == 0) {
  *VAR_3 = 75;
 } else {
  *VAR_3 = VAR_1->floating_minimum_width;
 }

 if (VAR_1->floating_minimum_height == -1) {
  *VAR_5 = 0;
 } else if (VAR_1->floating_minimum_height == 0) {
  *VAR_5 = 50;
 } else {
  *VAR_5 = VAR_1->floating_minimum_height;
 }

 struct wlr_box *VAR_7 = FUNC_0(VAR_2->output_layout, ((void*)0));

 if (VAR_1->floating_maximum_width == -1) {
  *VAR_4 = VAR_0;
 } else if (VAR_1->floating_maximum_width == 0) {
  *VAR_4 = VAR_7->width;
 } else {
  *VAR_4 = VAR_1->floating_maximum_width;
 }

 if (VAR_1->floating_maximum_height == -1) {
  *VAR_6 = VAR_0;
 } else if (VAR_1->floating_maximum_height == 0) {
  *VAR_6 = VAR_7->height;
 } else {
  *VAR_6 = VAR_1->floating_maximum_height;
 }

}
