
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct nfc_target {int supported_protocols; int nfcid1_len; int hci_reader_gate; int nfcid1; int sel_res; int sens_res; } ;
struct nfc_hci_dev {int ndev; TYPE_1__* ops; } ;
typedef int __be16 ;
struct TYPE_2__ {int (* complete_target_discovered ) (struct nfc_hci_dev*,int,struct nfc_target*) ;int (* target_from_gate ) (struct nfc_hci_dev*,int,struct nfc_target*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfc_target*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct nfc_target* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct nfc_hci_dev*,int const,int ,struct sk_buff**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct nfc_target*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct nfc_hci_dev*,int,struct nfc_target*) ;
 int FUNC_10 (struct nfc_hci_dev*,int,struct nfc_target*) ;
 int FUNC_11 (struct nfc_hci_dev*,int,struct nfc_target*) ;

int FUNC_12(struct nfc_hci_dev *VAR_8, u8 VAR_9)
{
 struct nfc_target *VAR_10;
 struct sk_buff *VAR_11 = ((void*)0);
 struct sk_buff *VAR_12 = ((void*)0);
 struct sk_buff *VAR_13 = ((void*)0);
 int VAR_14;

 FUNC_8("from gate %d\n", VAR_9);

 VAR_10 = FUNC_3(sizeof(struct nfc_target), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 switch (VAR_9) {
 case 129:
  VAR_14 = FUNC_5(VAR_8, 129,
          VAR_3, &VAR_11);
  if (VAR_14 < 0)
   goto exit;

  VAR_14 = FUNC_5(VAR_8, 129,
          VAR_4, &VAR_12);
  if (VAR_14 < 0)
   goto exit;

  if (VAR_11->len != 2 || VAR_12->len != 1) {
   VAR_14 = -VAR_1;
   goto exit;
  }

  VAR_10->supported_protocols =
    FUNC_6(VAR_12->data[0]);
  if (VAR_10->supported_protocols == 0xffffffff) {
   VAR_14 = -VAR_1;
   goto exit;
  }

  VAR_10->sens_res = FUNC_0(*(__be16 *)VAR_11->data);
  VAR_10->sel_res = VAR_12->data[0];

  VAR_14 = FUNC_5(VAR_8, 129,
          VAR_5, &VAR_13);
  if (VAR_14 < 0)
   goto exit;

  if (VAR_13->len == 0 || VAR_13->len > VAR_6) {
   VAR_14 = -VAR_1;
   goto exit;
  }

  FUNC_4(VAR_10->nfcid1, VAR_13->data, VAR_13->len);
  VAR_10->nfcid1_len = VAR_13->len;

  if (VAR_8->ops->complete_target_discovered) {
   VAR_14 = VAR_8->ops->complete_target_discovered(VAR_8, VAR_9,
          VAR_10);
   if (VAR_14 < 0)
    goto exit;
  }
  break;
 case 128:
  VAR_10->supported_protocols = VAR_7;
  break;
 default:
  if (VAR_8->ops->target_from_gate)
   VAR_14 = VAR_8->ops->target_from_gate(VAR_8, VAR_9, VAR_10);
  else
   VAR_14 = -VAR_1;
  if (VAR_14 < 0)
   goto exit;

  if (VAR_8->ops->complete_target_discovered) {
   VAR_14 = VAR_8->ops->complete_target_discovered(VAR_8, VAR_9,
          VAR_10);
   if (VAR_14 < 0)
    goto exit;
  }
  break;
 }


 if (VAR_10->hci_reader_gate == 0x00)
  VAR_10->hci_reader_gate = VAR_9;

 VAR_14 = FUNC_7(VAR_8->ndev, VAR_10, 1);

exit:
 FUNC_1(VAR_10);
 FUNC_2(VAR_11);
 FUNC_2(VAR_12);
 FUNC_2(VAR_13);

 return VAR_14;
}
