
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wl_output_subpixel { ____Placeholder_wl_output_subpixel } wl_output_subpixel ;
typedef int cairo_subpixel_order_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





cairo_subpixel_order_t FUNC_0(enum wl_output_subpixel VAR_5) {
 switch (VAR_5) {
 case 130:
  return VAR_2;
 case 131:
  return VAR_0;
 case 128:
  return VAR_4;
 case 129:
  return VAR_3;
 default:
  return VAR_1;
 }
 return VAR_1;
}
