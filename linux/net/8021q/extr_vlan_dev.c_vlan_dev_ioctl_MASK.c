
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_ops {int (* ndo_do_ioctl ) (struct net_device*,struct ifreq*,int) ;} ;
struct net_device {int name; struct net_device_ops* netdev_ops; } ;
struct ifreq {int ifr_ifru; int ifr_name; } ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct net_device*,struct ifreq*,int) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = FUNC_5(VAR_3)->real_dev;
 const struct net_device_ops *VAR_7 = VAR_6->netdev_ops;
 struct ifreq VAR_8;
 int VAR_9 = -VAR_0;

 FUNC_3(VAR_8.ifr_name, VAR_6->name, VAR_1);
 VAR_8.ifr_ifru = VAR_4->ifr_ifru;

 switch (VAR_5) {
 case 129:
  if (!FUNC_1(FUNC_0(VAR_3), &VAR_2))
   break;

 case 131:
 case 130:
 case 128:
 case 132:
  if (FUNC_2(VAR_6) && VAR_7->ndo_do_ioctl)
   VAR_9 = VAR_7->ndo_do_ioctl(VAR_6, &VAR_8, VAR_5);
  break;
 }

 if (!VAR_9)
  VAR_4->ifr_ifru = VAR_8.ifr_ifru;

 return VAR_9;
}
