
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 int VAR_0 ;



__attribute__((used)) static int
FUNC_0(unsigned int VAR_1, u8 VAR_2[4])
{
 unsigned int VAR_3;

 switch (VAR_1) {
 case 128:
  VAR_3 = 15;
  break;
 case 129:
  VAR_3 = 13;
  break;
 default:
  return -VAR_0;
 }
 VAR_2[0] = (VAR_3 >> 0) & 0xff;
 VAR_2[1] = (VAR_3 >> 8) & 0xff;
 VAR_2[2] = (VAR_3 >> 16) & 0xff;
 VAR_2[3] = (VAR_3 >> 24) & 0xff;

 return 0;
}
