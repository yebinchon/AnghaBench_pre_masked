
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;

uint32_t FUNC_2(const char *VAR_5) {
 uint32_t VAR_6 = VAR_2 |
  VAR_3;
 if (FUNC_0("top", VAR_5) == 0) {
  return VAR_4 | VAR_6;
 } else if (FUNC_0("bottom", VAR_5) == 0) {
  return VAR_1 | VAR_6;
 } else {
  FUNC_1(VAR_0, "Invalid position: %s, defaulting to bottom", VAR_5);
  return VAR_1 | VAR_6;
 }
}
