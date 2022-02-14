
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int,unsigned char) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_1) {
  unsigned VAR_2 = 0;
  unsigned VAR_3 = 8;
  unsigned int VAR_4 = (VAR_0 + ((VAR_3-8)<<4)) << 8;
  VAR_4 |= (VAR_2 << 6);

  VAR_4 += 31 - (VAR_4 % 31);


  FUNC_0(VAR_1, 0, (unsigned char)(VAR_4 >> 8));
  FUNC_0(VAR_1, 1, (unsigned char)(VAR_4 & 0xff));
}
