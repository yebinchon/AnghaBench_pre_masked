
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int const ut16 ;



__attribute__((used)) static ut16 FUNC_0(const ut8 *VAR_0, int VAR_1) {
 if (VAR_1 < 2) {
  return 0;
 }
 if (*VAR_0 & 0x80) {
  return (ut16)((*VAR_0 & 0x7f) * 0x100 + VAR_0[1]);
 }
 return *VAR_0;
}
