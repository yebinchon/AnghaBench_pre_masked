
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mgmt_hdr {void* len; void* index; void* opcode; } ;
struct hci_dev {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct hci_dev*,scalar_t__,void*,scalar_t__,int ,int,struct sock*) ;
 int FUNC_4 (unsigned short,struct sk_buff*,int,struct sock*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct mgmt_hdr* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,void*,scalar_t__) ;

int FUNC_9(u16 VAR_4, struct hci_dev *VAR_5, unsigned short VAR_6,
      void *VAR_7, u16 VAR_8, int VAR_9, struct sock *VAR_10)
{
 struct sk_buff *VAR_11;
 struct mgmt_hdr *VAR_12;

 VAR_11 = FUNC_1(sizeof(*VAR_12) + VAR_8, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_7(VAR_11, sizeof(*VAR_12));
 VAR_12->opcode = FUNC_2(VAR_4);
 if (VAR_5)
  VAR_12->index = FUNC_2(VAR_5->id);
 else
  VAR_12->index = FUNC_2(VAR_3);
 VAR_12->len = FUNC_2(VAR_8);

 if (VAR_7)
  FUNC_8(VAR_11, VAR_7, VAR_8);


 FUNC_0(VAR_11);

 FUNC_4(VAR_6, VAR_11, VAR_9, VAR_10);

 if (VAR_6 == VAR_2)
  FUNC_3(VAR_5, VAR_4, VAR_7, VAR_8,
         FUNC_6(VAR_11), VAR_9, VAR_10);

 FUNC_5(VAR_11);
 return 0;
}
