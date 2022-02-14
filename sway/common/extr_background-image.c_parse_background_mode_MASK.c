
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum background_mode { ____Placeholder_background_mode } background_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,char const*) ;

enum background_mode FUNC_2(const char *VAR_8) {
 if (FUNC_0(VAR_8, "stretch") == 0) {
  return VAR_5;
 } else if (FUNC_0(VAR_8, "fill") == 0) {
  return VAR_1;
 } else if (FUNC_0(VAR_8, "fit") == 0) {
  return VAR_2;
 } else if (FUNC_0(VAR_8, "center") == 0) {
  return VAR_0;
 } else if (FUNC_0(VAR_8, "tile") == 0) {
  return VAR_6;
 } else if (FUNC_0(VAR_8, "solid_color") == 0) {
  return VAR_4;
 }
 FUNC_1(VAR_7, "Unsupported background mode: %s", VAR_8);
 return VAR_3;
}
