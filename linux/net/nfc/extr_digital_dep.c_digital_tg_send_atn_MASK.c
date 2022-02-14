
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {int (* skb_add_crc ) (struct sk_buff*) ;int did; } ;
struct digital_dep_req_res {int pfb; int cmd; int dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (struct nfc_digital_dev*,int) ;
 int FUNC_1 (struct nfc_digital_dev*,struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int,int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int *,int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct nfc_digital_dev *VAR_6)
{
 struct digital_dep_req_res *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_6, 1);
 if (!VAR_8)
  return -VAR_4;

 FUNC_4(VAR_8, sizeof(struct digital_dep_req_res));

 VAR_7 = (struct digital_dep_req_res *)VAR_8->data;

 VAR_7->dir = VAR_1;
 VAR_7->cmd = VAR_0;
 VAR_7->pfb = VAR_3;

 if (VAR_6->did) {
  VAR_7->pfb |= VAR_2;

  FUNC_5(VAR_8, &VAR_6->did, sizeof(VAR_6->did));
 }

 FUNC_1(VAR_6, VAR_8);

 VAR_6->skb_add_crc(VAR_8);

 VAR_9 = FUNC_2(VAR_6, VAR_8, 1500, VAR_5,
     ((void*)0));
 if (VAR_9)
  FUNC_3(VAR_8);

 return VAR_9;
}
