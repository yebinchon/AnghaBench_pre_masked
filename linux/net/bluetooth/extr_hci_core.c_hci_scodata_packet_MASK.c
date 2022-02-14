
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct hci_sco_hdr {int handle; } ;
struct TYPE_2__ {int sco_rx; } ;
struct hci_dev {TYPE_1__ stat; int name; } ;
struct hci_conn {int dummy; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,char*,int ) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct hci_conn*,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_9(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_sco_hdr *VAR_3 = (void *) VAR_2->data;
 struct hci_conn *VAR_4;
 __u16 VAR_5;

 FUNC_8(VAR_2, VAR_0);

 VAR_5 = FUNC_1(VAR_3->handle);

 FUNC_0("%s len %d handle 0x%4.4x", VAR_1->name, VAR_2->len, VAR_5);

 VAR_1->stat.sco_rx++;

 FUNC_4(VAR_1);
 VAR_4 = FUNC_3(VAR_1, VAR_5);
 FUNC_5(VAR_1);

 if (VAR_4) {

  FUNC_7(VAR_4, VAR_2);
  return;
 } else {
  FUNC_2(VAR_1, "SCO packet for unknown connection handle %d",
      VAR_5);
 }

 FUNC_6(VAR_2);
}
