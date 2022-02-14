
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct net*,int *,struct sk_buff*,struct net_device*,int *,int ) ;
 int VAR_2 ;
 struct net* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,struct net_device*,struct net*) ;
 int VAR_3 ;

int FUNC_3(struct sk_buff *VAR_4, struct net_device *VAR_5, struct packet_type *VAR_6, struct net_device *VAR_7)
{
 struct net *VAR_8 = FUNC_1(VAR_4->dev);

 VAR_4 = FUNC_2(VAR_4, VAR_5, VAR_8);
 if (VAR_4 == ((void*)0))
  return VAR_0;
 return FUNC_0(VAR_1, VAR_2,
         VAR_8, ((void*)0), VAR_4, VAR_5, ((void*)0),
         VAR_3);
}
