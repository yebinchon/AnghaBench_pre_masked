
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_dev {int dummy; } ;


 struct ncsi_dev_priv* FUNC_0 (struct ncsi_dev*) ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct ncsi_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static struct ncsi_dev_priv *FUNC_5(struct net *VAR_0, u32 VAR_1)
{
 struct ncsi_dev_priv *VAR_2;
 struct net_device *VAR_3;
 struct ncsi_dev *VAR_4;
 struct ncsi_dev;

 if (!VAR_0)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3) {
  FUNC_4("NCSI netlink: No device for ifindex %u\n", VAR_1);
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_3);
 VAR_2 = VAR_4 ? FUNC_0(VAR_4) : ((void*)0);

 FUNC_2(VAR_3);
 return VAR_2;
}
