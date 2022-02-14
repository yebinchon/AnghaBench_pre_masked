
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ,unsigned char*,int,unsigned char*,int) ;
 unsigned char VAR_0 ;

double FUNC_1(uint8_t VAR_1) {
  unsigned char VAR_2 = VAR_0;
  unsigned char VAR_3[2] = {0, 0};
  int VAR_4 = FUNC_0(VAR_1, &VAR_2, 1, VAR_3, 2);
  if (VAR_4 < 0) return -1000;
  int VAR_5 = (VAR_3[0] << 8) | VAR_3[1];
  if (VAR_3[0] & 0x80) VAR_5 = -((1 << 16) - VAR_5);
  return VAR_5 * 0.00015625;
}
