
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {scalar_t__ dev_addr; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_0, struct net_device *VAR_1)
{
 return FUNC_0(VAR_0, *(__be32 *)VAR_1->dev_addr);
}
