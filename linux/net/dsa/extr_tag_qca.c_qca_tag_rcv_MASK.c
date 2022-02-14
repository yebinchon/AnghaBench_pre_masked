
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int data; int dev; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct sk_buff *VAR_6, struct net_device *VAR_7,
       struct packet_type *VAR_8)
{
 u8 VAR_9;
 int VAR_10;
 __be16 *VAR_11, VAR_12;

 if (FUNC_5(!FUNC_3(VAR_6, VAR_1)))
  return ((void*)0);





 VAR_11 = (__be16 *)(VAR_6->data - 2);
 VAR_12 = FUNC_2(*VAR_11);


 VAR_9 = (VAR_12 & VAR_3) >> VAR_4;
 if (FUNC_5(VAR_9 != VAR_5))
  return ((void*)0);


 FUNC_4(VAR_6, VAR_1);
 FUNC_1(VAR_6->data - VAR_0, VAR_6->data - VAR_0 - VAR_1,
  VAR_0 - VAR_1);


 VAR_10 = (VAR_12 & VAR_2);

 VAR_6->dev = FUNC_0(VAR_7, 0, VAR_10);
 if (!VAR_6->dev)
  return ((void*)0);

 return VAR_6;
}
