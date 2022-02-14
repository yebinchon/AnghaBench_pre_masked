
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {unsigned char nh_flags; } ;
struct arg_netdev_event {int nh_flags; TYPE_1__ member_1; struct net_device* dev; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,struct arg_netdev_event*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_3, unsigned char VAR_4)
{
 struct arg_netdev_event VAR_5 = {
  .dev = VAR_3,
  {
   .nh_flags = VAR_4,
  },
 };

 if (VAR_4 & VAR_0 && FUNC_2(VAR_3))
  VAR_5.nh_flags |= VAR_1;

 FUNC_1(FUNC_0(VAR_3), VAR_2, &VAR_5);
}
