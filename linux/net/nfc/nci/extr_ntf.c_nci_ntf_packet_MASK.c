
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct nci_dev {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_2 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_3 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_4 (struct nci_dev*,int,struct sk_buff*) ;
 int FUNC_5 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_6 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct nci_dev*,int,struct sk_buff*) ;
 int FUNC_13 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_14 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_15 (struct nci_dev*,struct sk_buff*) ;
 int FUNC_16 (char*,int ,scalar_t__,int ,int ) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (struct sk_buff*,int ) ;

void FUNC_19(struct nci_dev *VAR_3, struct sk_buff *VAR_4)
{
 __u16 VAR_5 = FUNC_7(VAR_4->data);

 FUNC_16("NCI RX: MT=ntf, PBF=%d, GID=0x%x, OID=0x%x, plen=%d\n",
   FUNC_10(VAR_4->data),
   FUNC_8(VAR_5),
   FUNC_9(VAR_5),
   FUNC_11(VAR_4->data));


 FUNC_18(VAR_4, VAR_1);

 if (FUNC_8(VAR_5) == VAR_2) {
  if (FUNC_12(VAR_3, VAR_5, VAR_4) == -VAR_0) {
   FUNC_17("unsupported ntf opcode 0x%x\n",
          VAR_5);
  }

  goto end;
 }

 switch (VAR_5) {
 case 135:
  FUNC_1(VAR_3, VAR_4);
  break;

 case 134:
  FUNC_3(VAR_3, VAR_4);
  break;

 case 133:
  FUNC_2(VAR_3, VAR_4);
  break;

 case 130:
  FUNC_14(VAR_3, VAR_4);
  break;

 case 129:
  FUNC_15(VAR_3, VAR_4);
  break;

 case 131:
  FUNC_13(VAR_3, VAR_4);
  break;

 case 132:
  FUNC_6(VAR_3, VAR_4);
  break;

 case 128:
  FUNC_5(VAR_3, VAR_4);
  break;

 default:
  FUNC_17("unknown ntf opcode 0x%x\n", VAR_5);
  break;
 }

 FUNC_4(VAR_3, VAR_5, VAR_4);
end:
 FUNC_0(VAR_4);
}
