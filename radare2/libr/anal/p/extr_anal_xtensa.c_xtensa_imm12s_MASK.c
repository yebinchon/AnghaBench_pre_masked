
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int ut16 ;



__attribute__((used)) static inline ut64 FUNC_0 (ut64 VAR_0, const ut8 *VAR_1) {
 ut16 VAR_2 = (VAR_1[1] >> 4) | (((ut16)VAR_1[2]) << 4);
 if (VAR_2 & 0x800) {
  return (VAR_0 + 4 + VAR_2 - 0x1000);
 }
 return (VAR_0 + 4 + VAR_2);
}
