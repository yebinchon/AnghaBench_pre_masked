
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct hci_cp_add_sco {void* pkt_type; void* handle; } ;
struct hci_conn {int out; int pkt_type; int attempt; int state; struct hci_dev* hdev; } ;
typedef int cp ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,int ,int,struct hci_cp_add_sco*) ;

__attribute__((used)) static void FUNC_3(struct hci_conn *VAR_2, __u16 VAR_3)
{
 struct hci_dev *VAR_4 = VAR_2->hdev;
 struct hci_cp_add_sco VAR_5;

 FUNC_0("hcon %p", VAR_2);

 VAR_2->state = VAR_0;
 VAR_2->out = 1;

 VAR_2->attempt++;

 VAR_5.handle = FUNC_1(VAR_3);
 VAR_5.pkt_type = FUNC_1(VAR_2->pkt_type);

 FUNC_2(VAR_4, VAR_1, sizeof(VAR_5), &VAR_5);
}
