
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int cb; int protocol; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct iapp_layer2_update {int ssap; int control; int* xid_info; scalar_t__ dsap; int len; int sa; int da; } ;


 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct iapp_layer2_update* FUNC_7 (struct sk_buff*,int) ;

void FUNC_8(struct net_device *VAR_0, const u8 *VAR_1)
{
 struct iapp_layer2_update *VAR_2;
 struct sk_buff *VAR_3;




 VAR_3 = FUNC_0(sizeof(*VAR_2));
 if (!VAR_3)
  return;
 VAR_2 = FUNC_7(VAR_3, sizeof(*VAR_2));




 FUNC_1(VAR_2->da);
 FUNC_3(VAR_2->sa, VAR_1);
 VAR_2->len = FUNC_4(6);
 VAR_2->dsap = 0;
 VAR_2->ssap = 0x01;
 VAR_2->control = 0xaf;

 VAR_2->xid_info[0] = 0x81;
 VAR_2->xid_info[1] = 1;
 VAR_2->xid_info[2] = 0;

 VAR_3->dev = VAR_0;
 VAR_3->protocol = FUNC_2(VAR_3, VAR_0);
 FUNC_5(VAR_3->cb, 0, sizeof(VAR_3->cb));
 FUNC_6(VAR_3);
}
