
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {scalar_t__ perm_addr; } ;


 int FUNC_0 (int*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_0, struct net_device *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->perm_addr, 3);
 FUNC_0(VAR_0 + 5, VAR_1->perm_addr + 3, 3);
 VAR_0[3] = 0xFF;
 VAR_0[4] = 0xFE;
 VAR_0[0] ^= 2;
 return 0;
}
