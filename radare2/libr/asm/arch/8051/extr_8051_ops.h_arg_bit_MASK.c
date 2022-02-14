
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static inline ut8 FUNC_0 (ut8 VAR_0) {
 if (VAR_0 < 0x80) {

  return (VAR_0 >> 3) + 0x20;
 }

 return VAR_0 & 0xf8;
}
