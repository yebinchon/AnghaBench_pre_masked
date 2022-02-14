
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct hci_rp_read_enc_key_size {int key_size; scalar_t__ status; int handle; } ;
struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ state; int flags; int enc_key_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,char*,...) ;
 int FUNC_2 (struct hci_conn*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_conn*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_conn*,int ,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_5, u8 VAR_6,
           u16 VAR_7, struct sk_buff *VAR_8)
{
 const struct hci_rp_read_enc_key_size *VAR_9;
 struct hci_conn *VAR_10;
 u16 VAR_11;

 FUNC_0("%s status 0x%02x", VAR_5->name, VAR_6);

 if (!VAR_8 || VAR_8->len < sizeof(*VAR_9)) {
  FUNC_1(VAR_5, "invalid read key size response");
  return;
 }

 VAR_9 = (void *)VAR_8->data;
 VAR_11 = FUNC_8(VAR_9->handle);

 FUNC_5(VAR_5);

 VAR_10 = FUNC_3(VAR_5, VAR_11);
 if (!VAR_10)
  goto unlock;





 if (VAR_9->status) {
  FUNC_1(VAR_5, "failed to read key size for handle %u",
      VAR_11);
  VAR_10->enc_key_size = VAR_4;
 } else {
  VAR_10->enc_key_size = VAR_9->key_size;
 }

 if (VAR_10->state == VAR_0) {
  VAR_10->state = VAR_1;
  FUNC_4(VAR_10, 0);
  FUNC_2(VAR_10);
 } else {
  u8 VAR_12;

  if (!FUNC_9(VAR_3, &VAR_10->flags))
   VAR_12 = 0x00;
  else if (FUNC_9(VAR_2, &VAR_10->flags))
   VAR_12 = 0x02;
  else
   VAR_12 = 0x01;

  FUNC_7(VAR_10, 0, VAR_12);
 }

unlock:
 FUNC_6(VAR_5);
}
