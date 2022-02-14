
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_digital_dev {scalar_t__ curr_nfc_dep_pni; int (* skb_add_crc ) (struct sk_buff*) ;} ;
struct digital_psl_res {scalar_t__ did; int cmd; int dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct nfc_digital_dev*,int) ;
 int FUNC_1 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_2 (struct nfc_digital_dev*,struct sk_buff*,int ,int ,void*) ;
 int VAR_3 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct nfc_digital_dev *VAR_4, u8 VAR_5,
       u8 VAR_6)
{
 struct digital_psl_res *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_4, sizeof(struct digital_psl_res));
 if (!VAR_8)
  return -VAR_2;

 FUNC_4(VAR_8, sizeof(struct digital_psl_res));

 VAR_7 = (struct digital_psl_res *)VAR_8->data;

 VAR_7->dir = VAR_1;
 VAR_7->cmd = VAR_0;
 VAR_7->did = VAR_5;

 FUNC_1(VAR_4, VAR_8);

 VAR_4->skb_add_crc(VAR_8);

 VAR_4->curr_nfc_dep_pni = 0;

 VAR_9 = FUNC_2(VAR_4, VAR_8, 0, VAR_3,
     (void *)(unsigned long)VAR_6);
 if (VAR_9)
  FUNC_3(VAR_8);

 return VAR_9;
}
