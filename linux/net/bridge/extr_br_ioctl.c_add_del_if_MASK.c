
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge {int dev; } ;
struct net {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (struct net*,int) ;
 int FUNC_1 (struct net_bridge*,struct net_device*,int *) ;
 int FUNC_2 (struct net_bridge*,struct net_device*) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_bridge *VAR_3, int VAR_4, int VAR_5)
{
 struct net *VAR_6 = FUNC_3(VAR_3->dev);
 struct net_device *VAR_7;
 int VAR_8;

 if (!FUNC_4(VAR_6->user_ns, VAR_0))
  return -VAR_2;

 VAR_7 = FUNC_0(VAR_6, VAR_4);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 if (VAR_5)
  VAR_8 = FUNC_1(VAR_3, VAR_7, ((void*)0));
 else
  VAR_8 = FUNC_2(VAR_3, VAR_7);

 return VAR_8;
}
