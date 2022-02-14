
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct nfc_target {int hci_reader_gate; int idx; } ;
struct nfc_hci_dev {TYPE_1__* ops; void* async_cb_context; int async_cb; int async_cb_type; } ;
struct nfc_dev {int dummy; } ;
typedef int data_exchange_cb_t ;
struct TYPE_2__ {int (* im_transceive ) (struct nfc_hci_dev*,struct nfc_target*,struct sk_buff*,int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct nfc_hci_dev* FUNC_1 (struct nfc_dev*) ;
 int FUNC_2 (struct nfc_hci_dev*,int,int ,int ,int ,int ,struct nfc_hci_dev*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct nfc_hci_dev*,struct nfc_target*,struct sk_buff*,int ,void*) ;
 int FUNC_6 (struct nfc_hci_dev*,struct nfc_target*,struct sk_buff*,int ,void*) ;

__attribute__((used)) static int FUNC_7(struct nfc_dev *VAR_4, struct nfc_target *VAR_5,
     struct sk_buff *VAR_6, data_exchange_cb_t VAR_7,
     void *VAR_8)
{
 struct nfc_hci_dev *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;

 FUNC_3("target_idx=%d\n", VAR_5->idx);

 switch (VAR_5->hci_reader_gate) {
 case 129:
 case 128:
  if (VAR_9->ops->im_transceive) {
   VAR_10 = VAR_9->ops->im_transceive(VAR_9, VAR_5, VAR_6, VAR_7,
           VAR_8);
   if (VAR_10 <= 0)
    break;
  }

  *(u8 *)FUNC_4(VAR_6, 1) = 0;

  VAR_9->async_cb_type = VAR_1;
  VAR_9->async_cb = VAR_7;
  VAR_9->async_cb_context = VAR_8;

  VAR_10 = FUNC_2(VAR_9, VAR_5->hci_reader_gate,
        VAR_2, VAR_6->data,
        VAR_6->len, VAR_3, VAR_9);
  break;
 default:
  if (VAR_9->ops->im_transceive) {
   VAR_10 = VAR_9->ops->im_transceive(VAR_9, VAR_5, VAR_6, VAR_7,
           VAR_8);
   if (VAR_10 == 1)
    VAR_10 = -VAR_0;
  } else {
   VAR_10 = -VAR_0;
  }
  break;
 }

 FUNC_0(VAR_6);

 return VAR_10;
}
