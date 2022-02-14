
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {scalar_t__ addr_len; scalar_t__ dev_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1, struct net_device *VAR_2)
{

 if (VAR_2->addr_len != VAR_0)
  return -1;
 FUNC_0(VAR_1, 0, 7);
 VAR_1[7] = *(u8 *)VAR_2->dev_addr;
 return 0;
}
