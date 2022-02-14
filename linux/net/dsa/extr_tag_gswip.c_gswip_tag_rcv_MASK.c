
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dev; int data; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct sk_buff *VAR_4,
         struct net_device *VAR_5,
         struct packet_type *VAR_6)
{
 int VAR_7;
 u8 *VAR_8;

 if (FUNC_3(!FUNC_1(VAR_4, VAR_1)))
  return ((void*)0);

 VAR_8 = VAR_4->data - VAR_0;


 VAR_7 = (VAR_8[7] & VAR_2) >> VAR_3;
 VAR_4->dev = FUNC_0(VAR_5, 0, VAR_7);
 if (!VAR_4->dev)
  return ((void*)0);


 FUNC_2(VAR_4, VAR_1);

 return VAR_4;
}
