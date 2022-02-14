
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_4,
  enum wlr_direction *VAR_5) {
 if (FUNC_0(VAR_4, "left") == 0) {
  *VAR_5 = VAR_1;
 } else if (FUNC_0(VAR_4, "right") == 0) {
  *VAR_5 = VAR_2;
 } else if (FUNC_0(VAR_4, "up") == 0) {
  *VAR_5 = VAR_3;
 } else if (FUNC_0(VAR_4, "down") == 0) {
  *VAR_5 = VAR_0;
 } else {
  return 0;
 }

 return 1;
}
