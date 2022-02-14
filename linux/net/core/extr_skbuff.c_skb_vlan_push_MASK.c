
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int data; int mac_len; int vlan_proto; int protocol; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

int FUNC_7(struct sk_buff *VAR_3, __be16 VAR_4, u16 VAR_5)
{
 if (FUNC_6(VAR_3)) {
  int VAR_6 = VAR_3->data - FUNC_3(VAR_3);
  int VAR_7;

  if (FUNC_0(VAR_6,
         "skb_vlan_push got skb with skb->data not at mac header (offset %d)\n",
         VAR_6)) {
   return -VAR_0;
  }

  VAR_7 = FUNC_2(VAR_3, VAR_3->vlan_proto,
     FUNC_5(VAR_3));
  if (VAR_7)
   return VAR_7;

  VAR_3->protocol = VAR_3->vlan_proto;
  VAR_3->mac_len += VAR_2;

  FUNC_4(VAR_3, VAR_3->data + (2 * VAR_1), VAR_2);
 }
 FUNC_1(VAR_3, VAR_4, VAR_5);
 return 0;
}
