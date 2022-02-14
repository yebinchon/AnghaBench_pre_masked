
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int VAR_0 ;

__attribute__((used)) static const char *FUNC_0(ut32 VAR_1, int *VAR_2) {
 *VAR_2 = 32;
 if (VAR_1 == 12) {
  return "arm";
 }
 if (VAR_1 == 0x0100000c) {
  *VAR_2 = 64;
  VAR_0 = 1;
  return "arm";
 }
 if (VAR_1 == 0x0200000c) {

  VAR_0 = 0;
  *VAR_2 = 64;
  return "arm";
 }
 return "x86";
}
