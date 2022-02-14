
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; int dev; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct sk_buff *VAR_4, struct net_device *VAR_5,
       struct packet_type *VAR_6)
{
 int VAR_7;
 __be16 *VAR_8, VAR_9;

 if (FUNC_5(!FUNC_3(VAR_4, VAR_2)))
  return ((void*)0);





 VAR_8 = (__be16 *)(VAR_4->data - 2);
 VAR_9 = FUNC_2(*VAR_8);


 FUNC_4(VAR_4, VAR_2);

 FUNC_1(VAR_4->data - VAR_1,
  VAR_4->data - VAR_1 - VAR_2,
  2 * VAR_0);


 VAR_7 = (VAR_9 & VAR_3);

 VAR_4->dev = FUNC_0(VAR_5, 0, VAR_7);
 if (!VAR_4->dev)
  return ((void*)0);

 return VAR_4;
}
