
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nci_dev {int cmd_work; int cmd_wq; int cmd_q; } ;
struct nci_ctrl_hdr {scalar_t__ plen; int oid; int gid; } ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,int ) ;
 struct sk_buff* FUNC_4 (struct nci_dev*,scalar_t__,int ) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *) ;
 struct nci_ctrl_hdr* FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,void*,scalar_t__) ;
 int FUNC_10 (int *,struct sk_buff*) ;

int FUNC_11(struct nci_dev *VAR_5, __u16 VAR_6, __u8 VAR_7, void *VAR_8)
{
 struct nci_ctrl_hdr *VAR_9;
 struct sk_buff *VAR_10;

 FUNC_5("opcode 0x%x, plen %d\n", VAR_6, VAR_7);

 VAR_10 = FUNC_4(VAR_5, (VAR_2 + VAR_7), VAR_1);
 if (!VAR_10) {
  FUNC_6("no memory for command\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_8(VAR_10, VAR_2);
 VAR_9->gid = FUNC_1(VAR_6);
 VAR_9->oid = FUNC_2(VAR_6);
 VAR_9->plen = VAR_7;

 FUNC_0((__u8 *)VAR_9, VAR_3);
 FUNC_3((__u8 *)VAR_9, VAR_4);

 if (VAR_7)
  FUNC_9(VAR_10, VAR_8, VAR_7);

 FUNC_10(&VAR_5->cmd_q, VAR_10);
 FUNC_7(VAR_5->cmd_wq, &VAR_5->cmd_work);

 return 0;
}
