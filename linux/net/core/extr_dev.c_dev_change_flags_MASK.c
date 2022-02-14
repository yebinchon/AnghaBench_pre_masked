
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {unsigned int flags; unsigned int gflags; } ;


 int FUNC_0 (struct net_device*,unsigned int,struct netlink_ext_ack*) ;
 int FUNC_1 (struct net_device*,unsigned int,unsigned int) ;

int FUNC_2(struct net_device *VAR_0, unsigned int VAR_1,
       struct netlink_ext_ack *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5 = VAR_0->flags, VAR_6 = VAR_0->gflags;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = (VAR_5 ^ VAR_0->flags) | (VAR_6 ^ VAR_0->gflags);
 FUNC_1(VAR_0, VAR_5, VAR_4);
 return VAR_3;
}
