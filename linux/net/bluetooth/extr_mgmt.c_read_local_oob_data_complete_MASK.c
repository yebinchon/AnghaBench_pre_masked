
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct mgmt_rp_read_local_oob_data {int rand256; int hash256; int rand192; int hash192; } ;
struct mgmt_pending_cmd {int sk; } ;
struct hci_rp_read_local_oob_ext_data {int rand256; int hash256; int rand192; int hash192; } ;
struct hci_rp_read_local_oob_data {int rand; int hash; } ;
struct hci_dev {int id; int name; } ;
typedef int mgmt_rp ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mgmt_rp_read_local_oob_data*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,struct mgmt_rp_read_local_oob_data*,size_t) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct mgmt_pending_cmd*) ;
 int FUNC_6 (scalar_t__) ;
 struct mgmt_pending_cmd* FUNC_7 (int ,struct hci_dev*) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_4, u8 VAR_5,
             u16 VAR_6, struct sk_buff *VAR_7)
{
 struct mgmt_rp_read_local_oob_data VAR_8;
 size_t VAR_9 = sizeof(VAR_8);
 struct mgmt_pending_cmd *VAR_10;

 FUNC_0("%s status %u", VAR_4->name, VAR_5);

 VAR_10 = FUNC_7(VAR_1, VAR_4);
 if (!VAR_10)
  return;

 if (VAR_5 || !VAR_7) {
  FUNC_4(VAR_10->sk, VAR_4->id, VAR_1,
    VAR_5 ? FUNC_6(VAR_5) : VAR_2);
  goto remove;
 }

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));

 if (VAR_6 == VAR_0) {
  struct hci_rp_read_local_oob_data *VAR_11 = (void *) VAR_7->data;

  if (VAR_7->len < sizeof(*VAR_11)) {
   FUNC_4(VAR_10->sk, VAR_4->id,
     VAR_1,
     VAR_2);
   goto remove;
  }

  FUNC_1(VAR_8.hash192, VAR_11->hash, sizeof(VAR_11->hash));
  FUNC_1(VAR_8.rand192, VAR_11->rand, sizeof(VAR_11->rand));

  VAR_9 -= sizeof(VAR_8.hash256) + sizeof(VAR_8.rand256);
 } else {
  struct hci_rp_read_local_oob_ext_data *VAR_12 = (void *) VAR_7->data;

  if (VAR_7->len < sizeof(*VAR_12)) {
   FUNC_4(VAR_10->sk, VAR_4->id,
     VAR_1,
     VAR_2);
   goto remove;
  }

  FUNC_1(VAR_8.hash192, VAR_12->hash192, sizeof(VAR_12->hash192));
  FUNC_1(VAR_8.rand192, VAR_12->rand192, sizeof(VAR_12->rand192));

  FUNC_1(VAR_8.hash256, VAR_12->hash256, sizeof(VAR_12->hash256));
  FUNC_1(VAR_8.rand256, VAR_12->rand256, sizeof(VAR_12->rand256));
 }

 FUNC_3(VAR_10->sk, VAR_4->id, VAR_1,
     VAR_3, &VAR_8, VAR_9);

remove:
 FUNC_5(VAR_10);
}
