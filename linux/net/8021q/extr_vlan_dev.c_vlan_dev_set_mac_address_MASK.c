
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int flags; int dev_addr; } ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_5(VAR_2)->real_dev;
 struct sockaddr *VAR_5 = VAR_3;
 int VAR_6;

 if (!FUNC_4(VAR_5->sa_data))
  return -VAR_0;

 if (!(VAR_2->flags & VAR_1))
  goto out;

 if (!FUNC_3(VAR_5->sa_data, VAR_4->dev_addr)) {
  VAR_6 = FUNC_0(VAR_4, VAR_5->sa_data);
  if (VAR_6 < 0)
   return VAR_6;
 }

 if (!FUNC_3(VAR_2->dev_addr, VAR_4->dev_addr))
  FUNC_1(VAR_4, VAR_2->dev_addr);

out:
 FUNC_2(VAR_2->dev_addr, VAR_5->sa_data);
 return 0;
}
