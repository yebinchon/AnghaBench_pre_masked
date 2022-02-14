
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;



__attribute__((used)) static inline ut64 FUNC_0 (ut64 VAR_0, const ut8 *VAR_1) {
 ut32 VAR_2 = ((VAR_1[0] >> 4) & 0xc) | (((ut32)VAR_1[1]) << 4) | (((ut32)VAR_1[2]) << 12);
 if (VAR_2 & 0x80000) {
  return (VAR_0 + 4 + VAR_2 - 0x100000) & ~3;
 }
 return (VAR_0 + 4 + VAR_2) & ~3;
}
