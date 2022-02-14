
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int flags; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 struct net_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_2(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;
 int VAR_6;

 if (!FUNC_5(VAR_5->sa_data))
  return -VAR_0;

 if (!(VAR_2->flags & VAR_1))
  goto out;

 if (!FUNC_4(VAR_5->sa_data, VAR_4->dev_addr)) {
  VAR_6 = FUNC_0(VAR_4, VAR_5->sa_data);
  if (VAR_6 < 0)
   return VAR_6;
 }

 if (!FUNC_4(VAR_2->dev_addr, VAR_4->dev_addr))
  FUNC_1(VAR_4, VAR_2->dev_addr);

out:
 FUNC_3(VAR_2->dev_addr, VAR_5->sa_data);

 return 0;
}
