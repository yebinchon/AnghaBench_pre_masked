
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat {int dummy; } ;
struct sway_container {int dummy; } ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sway_container*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool FUNC_2(struct sway_container *VAR_4,
  struct sway_seat *VAR_5, const char *VAR_6, enum wlr_direction *VAR_7) {
 enum sway_container_layout VAR_8 = 131;
 if (VAR_4) {
  VAR_8 = FUNC_0(VAR_4);
 }

 if (FUNC_1(VAR_6, "prev") == 0) {
  switch (VAR_8) {
  case 132:
  case 129:
   *VAR_7 = VAR_1;
   break;
  case 128:
  case 130:
   *VAR_7 = VAR_3;
   break;
  case 131:
   return 1;
  default:
   return 0;
  }
 } else if (FUNC_1(VAR_6, "next") == 0) {
  switch (VAR_8) {
  case 132:
  case 129:
   *VAR_7 = VAR_2;
   break;
  case 128:
  case 130:
   *VAR_7 = VAR_0;
   break;
  case 131:
   return 1;
  default:
   return 0;
  }
 } else {
  return 0;
 }

 return 1;
}
