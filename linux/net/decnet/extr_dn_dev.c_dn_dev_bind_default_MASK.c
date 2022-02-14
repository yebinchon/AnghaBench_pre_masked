
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {struct net_device* loopback_dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 () ;
 int FUNC_3 (struct net_device*,int *) ;
 TYPE_1__ VAR_0 ;

int FUNC_4(__le16 *VAR_1)
{
 struct net_device *VAR_2;
 int VAR_3;
 VAR_2 = FUNC_2();
last_chance:
 if (VAR_2) {
  VAR_3 = FUNC_3(VAR_2, VAR_1);
  FUNC_1(VAR_2);
  if (VAR_3 == 0 || VAR_2 == VAR_0.loopback_dev)
   return VAR_3;
 }
 VAR_2 = VAR_0.loopback_dev;
 FUNC_0(VAR_2);
 goto last_chance;
}
