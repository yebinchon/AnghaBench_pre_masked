
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static int FUNC_0 (const ut8 VAR_0, int VAR_1) {
 if (VAR_1 > 0) {
  bool VAR_2 = VAR_0 >> 7;
  return (VAR_0 << 1) | VAR_2;
 }
 bool VAR_3 = VAR_0 & 1;
 return (VAR_0 >> 1) | (VAR_3 << 7);
}
