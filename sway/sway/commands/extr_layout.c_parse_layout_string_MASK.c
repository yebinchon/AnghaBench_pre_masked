
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static enum sway_container_layout FUNC_1(char *VAR_5) {
 if (FUNC_0(VAR_5, "splith") == 0) {
  return VAR_0;
 } else if (FUNC_0(VAR_5, "splitv") == 0) {
  return VAR_4;
 } else if (FUNC_0(VAR_5, "tabbed") == 0) {
  return VAR_3;
 } else if (FUNC_0(VAR_5, "stacking") == 0) {
  return VAR_2;
 }
 return VAR_1;
}
