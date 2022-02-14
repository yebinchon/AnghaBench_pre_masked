
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_target {int dummy; } ;
struct nfc_digital_dev {int dep_rwt; int (* skb_add_crc ) (struct sk_buff*) ;void* remote_payload_max; void* local_payload_max; } ;
struct digital_psl_req {int brs; int fsl; scalar_t__ did; int cmd; int dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nfc_digital_dev*,struct sk_buff*,int ,int ,struct nfc_target*) ;
 void* FUNC_2 (void*) ;
 struct sk_buff* FUNC_3 (struct nfc_digital_dev*,int) ;
 int FUNC_4 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 void* FUNC_6 (void*,void*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct nfc_digital_dev *VAR_4,
       struct nfc_target *VAR_5)
{
 struct sk_buff *VAR_6;
 struct digital_psl_req *VAR_7;
 int VAR_8;
 u8 VAR_9, VAR_10;

 VAR_6 = FUNC_3(VAR_4, sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_2;

 FUNC_7(VAR_6, sizeof(*VAR_7));

 VAR_7 = (struct digital_psl_req *)VAR_6->data;

 VAR_7->dir = VAR_1;
 VAR_7->cmd = VAR_0;
 VAR_7->did = 0;
 VAR_7->brs = (0x2 << 3) | 0x2;

 VAR_9 = FUNC_6(VAR_4->local_payload_max, VAR_4->remote_payload_max);
 VAR_10 = FUNC_2(VAR_9);
 VAR_7->fsl = FUNC_0(VAR_10);

 VAR_4->local_payload_max = VAR_9;
 VAR_4->remote_payload_max = VAR_9;

 FUNC_4(VAR_4, VAR_6);

 VAR_4->skb_add_crc(VAR_6);

 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_4->dep_rwt,
     VAR_3, VAR_5);
 if (VAR_8)
  FUNC_5(VAR_6);

 return VAR_8;
}
