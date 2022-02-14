
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_stored_link_key {int num_keys; int max_keys; int status; } ;
struct hci_dev {int stored_num_keys; int stored_max_keys; int name; } ;
struct hci_cp_read_stored_link_key {int read_all; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 struct hci_cp_read_stored_link_key* FUNC_1 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_1,
     struct sk_buff *VAR_2)
{
 struct hci_rp_read_stored_link_key *VAR_3 = (void *)VAR_2->data;
 struct hci_cp_read_stored_link_key *VAR_4;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3->status);

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 if (!VAR_3->status && VAR_4->read_all == 0x01) {
  VAR_1->stored_max_keys = VAR_3->max_keys;
  VAR_1->stored_num_keys = VAR_3->num_keys;
 }
}
