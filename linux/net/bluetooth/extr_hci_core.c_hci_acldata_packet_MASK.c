
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_2__ {int acl_rx; } ;
struct hci_dev {TYPE_1__ stat; int name; } ;
struct hci_conn {int dummy; } ;
struct hci_acl_hdr {int handle; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,char*,int ) ;
 int FUNC_3 (struct hci_conn*,int ) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct hci_conn*,struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_12(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_acl_hdr *VAR_4 = (void *) VAR_3->data;
 struct hci_conn *VAR_5;
 __u16 VAR_6, VAR_7;

 FUNC_11(VAR_3, VAR_1);

 VAR_6 = FUNC_1(VAR_4->handle);
 VAR_7 = FUNC_7(VAR_6);
 VAR_6 = FUNC_8(VAR_6);

 FUNC_0("%s len %d handle 0x%4.4x flags 0x%4.4x", VAR_2->name, VAR_3->len,
        VAR_6, VAR_7);

 VAR_2->stat.acl_rx++;

 FUNC_5(VAR_2);
 VAR_5 = FUNC_4(VAR_2, VAR_6);
 FUNC_6(VAR_2);

 if (VAR_5) {
  FUNC_3(VAR_5, VAR_0);


  FUNC_10(VAR_5, VAR_3, VAR_7);
  return;
 } else {
  FUNC_2(VAR_2, "ACL packet for unknown connection handle %d",
      VAR_6);
 }

 FUNC_9(VAR_3);
}
