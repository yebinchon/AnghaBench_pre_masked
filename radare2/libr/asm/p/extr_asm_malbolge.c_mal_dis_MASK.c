
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int const ut64 ;



__attribute__((used)) static const char *FUNC_0(ut64 VAR_0, const ut8 *VAR_1, ut64 VAR_2) {
 if (VAR_2) {
  switch ((VAR_1[0] + VAR_0) % 94) {
  case 4: return "jmp [d]";
  case 5: return "out a";
  case 23: return "in a";
  case 39: return "rotr [d], mov a, [d]";
  case 40: return "mov d, [d]";
  case 62: return "crz [d], a, mov a, [d]";
  case 81: return "end";
  default: return "nop";
  }
 }
 return ((void*)0);
}
