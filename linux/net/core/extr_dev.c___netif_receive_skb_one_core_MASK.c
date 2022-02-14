
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct packet_type {int func; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,int ,int ,struct sk_buff*,struct net_device*,struct packet_type*,struct net_device*) ;
 int FUNC_1 (struct sk_buff*,int,struct packet_type**) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2, bool VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;
 struct packet_type *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_5);
 if (VAR_5)
  VAR_6 = FUNC_0(VAR_5->func, VAR_1, VAR_0, VAR_2,
      VAR_2->dev, VAR_5, VAR_4);
 return VAR_6;
}
