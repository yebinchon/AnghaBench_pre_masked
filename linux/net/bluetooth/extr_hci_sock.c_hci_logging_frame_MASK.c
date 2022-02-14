
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int* data; } ;
struct msghdr {int msg_flags; } ;
struct hci_mon_hdr {int opcode; int index; int len; } ;
struct hci_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct sock*,int,int,int*) ;
 int FUNC_2 (int ) ;
 struct hci_dev* FUNC_3 (int) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ,struct sk_buff*,int ,int *) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ,struct msghdr*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_8, struct msghdr *VAR_9, int VAR_10)
{
 struct hci_mon_hdr *VAR_11;
 struct sk_buff *VAR_12;
 struct hci_dev *VAR_13;
 u16 VAR_14;
 int VAR_15;





 if (VAR_10 < sizeof(*VAR_11) + 3)
  return -VAR_1;

 VAR_12 = FUNC_1(VAR_8, VAR_10, VAR_9->msg_flags & VAR_7, &VAR_15);
 if (!VAR_12)
  return VAR_15;

 if (FUNC_7(FUNC_8(VAR_12, VAR_10), VAR_9, VAR_10)) {
  VAR_15 = -VAR_0;
  goto drop;
 }

 VAR_11 = (void *)VAR_12->data;

 if (FUNC_0(VAR_11->len) != VAR_10 - sizeof(*VAR_11)) {
  VAR_15 = -VAR_1;
  goto drop;
 }

 if (FUNC_0(VAR_11->opcode) == 0x0000) {
  __u8 VAR_16 = VAR_12->data[sizeof(*VAR_11)];
  __u8 VAR_17 = VAR_12->data[sizeof(*VAR_11) + 1];
  if (VAR_16 > 7 || VAR_12->data[VAR_10 - 1] != 0x00 ||
      VAR_17 > VAR_10 - sizeof(*VAR_11) - 3 ||
      VAR_12->data[sizeof(*VAR_11) + VAR_17 + 1] != 0x00) {
   VAR_15 = -VAR_1;
   goto drop;
  }
 } else {
  VAR_15 = -VAR_1;
  goto drop;
 }

 VAR_14 = FUNC_0(VAR_11->index);

 if (VAR_14 != VAR_6) {
  VAR_13 = FUNC_3(VAR_14);
  if (!VAR_13) {
   VAR_15 = -VAR_2;
   goto drop;
  }
 } else {
  VAR_13 = ((void*)0);
 }

 VAR_11->opcode = FUNC_2(VAR_4);

 FUNC_5(VAR_3, VAR_12, VAR_5, ((void*)0));
 VAR_15 = VAR_10;

 if (VAR_13)
  FUNC_4(VAR_13);

drop:
 FUNC_6(VAR_12);
 return VAR_15;
}
