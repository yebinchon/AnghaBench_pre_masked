
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int addr_len; int dev_addr; } ;




 int FUNC_0 (int*,int ,int const) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_0, struct net_device *VAR_1)
{
 switch (VAR_1->addr_len) {
 case 129:
  FUNC_0(VAR_0, VAR_1->dev_addr, 3);
  VAR_0[3] = 0xFF;
  VAR_0[4] = 0xFE;
  FUNC_0(VAR_0 + 5, VAR_1->dev_addr + 3, 3);
  break;
 case 128:
  FUNC_0(VAR_0, VAR_1->dev_addr, 128);
  VAR_0[0] ^= 2;
  break;
 default:
  return -1;
 }

 return 0;
}
