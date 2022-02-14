
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct nci_dev {int cmd_work; int cmd_wq; int cmd_q; int cmd_cnt; int cmd_timer; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_4 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_5 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_6 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_7 (struct nci_dev*,int,struct sk_buff*) ;
 int FUNC_8 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_9 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_10 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct nci_dev*,int,struct sk_buff*) ;
 int FUNC_17 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_18 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_19 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_20 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_21 (char*,int ,scalar_t__,int ,int ) ;
 int FUNC_22 (char*,int) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (struct sk_buff*,int ) ;
 int FUNC_25 (int *) ;

void FUNC_26(struct nci_dev *VAR_3, struct sk_buff *VAR_4)
{
 __u16 VAR_5 = FUNC_11(VAR_4->data);


 FUNC_1(&VAR_3->cmd_timer);

 FUNC_21("NCI RX: MT=rsp, PBF=%d, GID=0x%x, OID=0x%x, plen=%d\n",
   FUNC_14(VAR_4->data),
   FUNC_12(VAR_5),
   FUNC_13(VAR_5),
   FUNC_15(VAR_4->data));


 FUNC_24(VAR_4, VAR_1);

 if (FUNC_12(VAR_5) == VAR_2) {
  if (FUNC_16(VAR_3, VAR_5, VAR_4) == -VAR_0) {
   FUNC_22("unsupported rsp opcode 0x%x\n",
          VAR_5);
  }

  goto end;
 }

 switch (VAR_5) {
 case 135:
  FUNC_6(VAR_3, VAR_4);
  break;

 case 136:
  FUNC_5(VAR_3, VAR_4);
  break;

 case 134:
  FUNC_8(VAR_3, VAR_4);
  break;

 case 137:
  FUNC_4(VAR_3, VAR_4);
  break;

 case 138:
  FUNC_3(VAR_3, VAR_4);
  break;

 case 130:
  FUNC_18(VAR_3, VAR_4);
  break;

 case 129:
  FUNC_19(VAR_3, VAR_4);
  break;

 case 128:
  FUNC_20(VAR_3, VAR_4);
  break;

 case 131:
  FUNC_17(VAR_3, VAR_4);
  break;

 case 133:
  FUNC_9(VAR_3, VAR_4);
  break;

 case 132:
  FUNC_10(VAR_3, VAR_4);
  break;

 default:
  FUNC_22("unknown rsp opcode 0x%x\n", VAR_5);
  break;
 }

 FUNC_7(VAR_3, VAR_5, VAR_4);
end:
 FUNC_2(VAR_4);


 FUNC_0(&VAR_3->cmd_cnt, 1);
 if (!FUNC_25(&VAR_3->cmd_q))
  FUNC_23(VAR_3->cmd_wq, &VAR_3->cmd_work);
}
