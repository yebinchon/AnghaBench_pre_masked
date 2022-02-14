
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
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static uint32_t FUNC_1(const char *VAR_7) {
 if (FUNC_0(VAR_7, "width") == 0 || FUNC_0(VAR_7, "horizontal") == 0) {
  return VAR_0;
 }
 if (FUNC_0(VAR_7, "height") == 0 || FUNC_0(VAR_7, "vertical") == 0) {
  return VAR_1;
 }
 if (FUNC_0(VAR_7, "up") == 0) {
  return VAR_6;
 }
 if (FUNC_0(VAR_7, "down") == 0) {
  return VAR_2;
 }
 if (FUNC_0(VAR_7, "left") == 0) {
  return VAR_3;
 }
 if (FUNC_0(VAR_7, "right") == 0) {
  return VAR_5;
 }
 return VAR_4;
}
