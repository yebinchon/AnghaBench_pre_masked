
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;



__attribute__((used)) static inline ut64 FUNC_0 (ut64 VAR_0, const ut8 *VAR_1) {
 ut8 VAR_2 = (VAR_1[1] >> 4) | (VAR_1[0] & 0x30);
 return (VAR_0 + 4 + VAR_2);
}
