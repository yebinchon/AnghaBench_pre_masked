
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_input_device {double width_mm; double height_mm; } ;
struct input_config_mapped_from_region {double x1; double x2; double y1; double y2; scalar_t__ mm; } ;


 double FUNC_0 (double,double,double) ;

__attribute__((used)) static void FUNC_1(struct wlr_input_device *VAR_0,
  struct input_config_mapped_from_region *VAR_1, double *VAR_2, double *VAR_3) {
 double VAR_4 = VAR_1->x1, VAR_5 = VAR_1->x2;
 double VAR_6 = VAR_1->y1, VAR_7 = VAR_1->y2;

 if (VAR_1->mm) {
  if (VAR_0->width_mm == 0 || VAR_0->height_mm == 0) {
   return;
  }
  VAR_4 /= VAR_0->width_mm;
  VAR_5 /= VAR_0->width_mm;
  VAR_6 /= VAR_0->height_mm;
  VAR_7 /= VAR_0->height_mm;
 }

 *VAR_2 = FUNC_0(VAR_4, VAR_5, *VAR_2);
 *VAR_3 = FUNC_0(VAR_6, VAR_7, *VAR_3);
}
