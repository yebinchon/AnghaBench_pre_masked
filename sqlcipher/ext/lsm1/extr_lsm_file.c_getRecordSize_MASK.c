
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static int FUNC_0(u8 *VAR_0, int *VAR_1){
  int VAR_2;
  VAR_2 = (VAR_0[0] & 0x7F) << 14;
  VAR_2 += (VAR_0[1] & 0x7F) << 7;
  VAR_2 += (VAR_0[2] & 0x7F);
  *VAR_1 = !(VAR_0[1] & 0x80);
  return VAR_2;
}
