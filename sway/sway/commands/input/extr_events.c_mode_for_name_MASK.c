
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3) {
 if (!FUNC_0(VAR_3, "enabled")) {
  return VAR_2;
 } else if (!FUNC_0(VAR_3, "disabled_on_external_mouse")) {
  return VAR_1;
 } else if (!FUNC_0(VAR_3, "disabled")) {
  return VAR_0;
 }
 return -1;
}
