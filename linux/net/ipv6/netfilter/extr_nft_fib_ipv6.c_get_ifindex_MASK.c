
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; } ;



__attribute__((used)) static int FUNC_0(const struct net_device *VAR_0)
{
 return VAR_0 ? VAR_0->ifindex : 0;
}
