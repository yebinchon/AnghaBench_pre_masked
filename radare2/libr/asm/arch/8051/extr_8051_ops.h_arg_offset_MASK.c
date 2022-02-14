
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut16 ;



__attribute__((used)) static inline ut16 FUNC_0 (ut16 VAR_0, ut8 VAR_1) {
 if (VAR_1 < 0x80) {
  return VAR_0 + VAR_1;
 }
 VAR_1 = 0 - VAR_1;
 return VAR_0 - VAR_1;
}
