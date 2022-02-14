
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (int const*,char*,int) ;

__attribute__((used)) static bool FUNC_1(const ut8 *VAR_0, int VAR_1) {

 if ((VAR_1 >= 4 && !FUNC_0 (VAR_0, "\xcf\xfa\xed\xfe", 4))) {
  return 1;
 }
 if ((VAR_1 >= 4 && !FUNC_0 (VAR_0, "\x7f\x45\x4c\x46", 4))) {
  return 1;
 }
 if ((VAR_1 >= 2 && !FUNC_0 (VAR_0, "MZ", 2))) {
  return 1;
 }
 return 0;
}
