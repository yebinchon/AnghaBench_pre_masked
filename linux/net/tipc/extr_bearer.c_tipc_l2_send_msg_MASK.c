
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_media_addr {int value; } ;
struct tipc_bearer {int media_ptr; } ;
struct sk_buff {int len; int protocol; struct net_device* dev; } ;
struct net_device {int dev_addr; scalar_t__ hard_header_len; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

int FUNC_9(struct net *VAR_2, struct sk_buff *VAR_3,
       struct tipc_bearer *VAR_4, struct tipc_media_addr *VAR_5)
{
 struct net_device *VAR_6;
 int VAR_7;

 VAR_6 = (struct net_device *)FUNC_6(VAR_4->media_ptr);
 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_0(VAR_6->hard_header_len - FUNC_7(VAR_3));
 if ((VAR_7 > 0) && FUNC_5(VAR_3, VAR_7, 0, VAR_1)) {
  FUNC_4(VAR_3);
  return 0;
 }
 FUNC_8(VAR_3);
 VAR_3->dev = VAR_6;
 VAR_3->protocol = FUNC_3(VAR_0);
 FUNC_1(VAR_3, VAR_6, VAR_0, VAR_5->value,
   VAR_6->dev_addr, VAR_3->len);
 FUNC_2(VAR_3);
 return 0;
}
