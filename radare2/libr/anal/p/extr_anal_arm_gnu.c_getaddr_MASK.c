
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int st32 ;



__attribute__((used)) static ut64 FUNC_0(ut64 VAR_0, const ut8 *VAR_1) {
 if (VAR_1[2] >> 7) {

  st32 VAR_2 = (VAR_1[0] + (VAR_1[1] << 8) + (VAR_1[2] << 16) + ((ut64)(0xff) << 24));
  VAR_2 = -VAR_2;
  return VAR_0 - (VAR_2 * 4);
 }
 return VAR_0 + (4 * (VAR_1[0] + (VAR_1[1] << 8) + (VAR_1[2] << 16)));
}
