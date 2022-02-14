
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned int mtu; } ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = FUNC_1(VAR_2)->real_dev;
 unsigned int VAR_5 = VAR_4->mtu;

 if (FUNC_0(VAR_4))
  VAR_5 -= VAR_1;
 if (VAR_5 < VAR_3)
  return -VAR_0;

 VAR_2->mtu = VAR_3;

 return 0;
}
