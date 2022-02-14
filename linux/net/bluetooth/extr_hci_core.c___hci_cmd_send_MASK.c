
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,char*,...) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct hci_dev*,int ,int ,void const*) ;
 int FUNC_3 (struct hci_dev*,struct sk_buff*) ;

int FUNC_4(struct hci_dev *VAR_2, u16 VAR_3, u32 VAR_4,
     const void *VAR_5)
{
 struct sk_buff *VAR_6;

 if (FUNC_1(VAR_3) != 0x3f) {
  FUNC_0(VAR_2, "unresponded command not supported");
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_0(VAR_2, "no memory for command (opcode 0x%4.4x)",
      VAR_3);
  return -VAR_1;
 }

 FUNC_3(VAR_2, VAR_6);

 return 0;
}
