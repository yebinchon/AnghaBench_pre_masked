
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wl_output_subpixel { ____Placeholder_wl_output_subpixel } wl_output_subpixel ;
 int FUNC_0 (int,char*) ;

const char *FUNC_1(enum wl_output_subpixel VAR_0) {
 switch (VAR_0) {
 case 130:
  return "unknown";
 case 131:
  return "none";
 case 132:
  return "rgb";
 case 133:
  return "bgr";
 case 128:
  return "vrgb";
 case 129:
  return "vbgr";
 }
 FUNC_0(0, "Unknown value for wl_output_subpixel.");
 return ((void*)0);
}
