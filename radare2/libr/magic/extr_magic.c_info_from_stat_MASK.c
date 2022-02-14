
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RMagic ;


 scalar_t__ FUNC_0 (unsigned short) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(RMagic *VAR_0, unsigned short VAR_1) {

 if (VAR_1 & 0222) {
  if (FUNC_1 (VAR_0, "writable, ") == -1) {
   return -1;
  }
 }
 if (VAR_1 & 0111) {
  if (FUNC_1 (VAR_0, "executable, ") == -1) {
   return -1;
  }
 }
 if (FUNC_0 (VAR_1)) {
  if (FUNC_1 (VAR_0, "regular file, ") == -1) {
   return -1;
  }
 }
 if (FUNC_1 (VAR_0, "no read permission") == -1) {
  return -1;
 }
 return 0;
}
