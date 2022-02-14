
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum resize_unit { ____Placeholder_resize_unit } resize_unit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum resize_unit FUNC_1(const char *VAR_4) {
 if (FUNC_0(VAR_4, "px") == 0) {
  return VAR_3;
 }
 if (FUNC_0(VAR_4, "ppt") == 0) {
  return VAR_2;
 }
 if (FUNC_0(VAR_4, "default") == 0) {
  return VAR_0;
 }
 return VAR_1;
}
