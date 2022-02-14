
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut64 ;



__attribute__((used)) static inline ut64 FUNC_0 (ut64 VAR_0, ut8 VAR_1) {
 if (VAR_1 & 0x80) {
  return (VAR_0 + 4 + VAR_1 - 0x100);
 }
 return (VAR_0 + 4 + VAR_1);
}
