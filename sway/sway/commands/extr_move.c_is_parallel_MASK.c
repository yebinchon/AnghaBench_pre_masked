
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(enum sway_container_layout VAR_4,
  enum wlr_direction VAR_5) {
 switch (VAR_4) {
 case 129:
 case 131:
  return VAR_5 == VAR_1 || VAR_5 == VAR_2;
 case 130:
 case 128:
  return VAR_5 == VAR_3 || VAR_5 == VAR_0;
 default:
  return 0;
 }
}
