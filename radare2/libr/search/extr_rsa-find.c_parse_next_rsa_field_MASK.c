
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;



__attribute__((used)) static const ut8* FUNC_0(const ut8* VAR_0, ut32 *VAR_1) {
 *VAR_1 = 0;
 if (!(VAR_0[1] & 128)) {
  VAR_1 = (ut32*)(VAR_0 + 1);
  return VAR_0 + 2;
 } else {
  int VAR_2;
  const int VAR_3 = VAR_0[1] & 127;
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
   *VAR_1 = (*VAR_1 << 8) | VAR_0[2 + VAR_2];
  }
  return VAR_0 + 2 + VAR_3;
 }
}
