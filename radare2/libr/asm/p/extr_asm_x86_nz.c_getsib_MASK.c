
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static ut8 FUNC_0(const ut8 VAR_0) {
 if (!VAR_0) {
  return 0;
 }
 return (VAR_0 & 0x8) ? 3 : FUNC_0 ((VAR_0 << 1) | 1) - 1;
}
