
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct nci_dev {TYPE_1__* nfc_dev; struct sk_buff* rx_data_reassembly; } ;
typedef int __u8 ;
struct TYPE_2__ {scalar_t__ rf_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct nci_dev*,struct sk_buff*,int,int) ;
 int FUNC_3 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct nci_dev *VAR_3,
     struct sk_buff *VAR_4,
     __u8 VAR_5, __u8 VAR_6, __u8 VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;

 if (VAR_7) {
  VAR_9 = VAR_7;
  goto exit;
 }

 if (VAR_3->rx_data_reassembly) {
  VAR_8 = VAR_3->rx_data_reassembly->len;


  if (FUNC_5(VAR_4, VAR_8)) {
   FUNC_4("error adding room for accumulated rx data\n");

   FUNC_0(VAR_4);
   VAR_4 = ((void*)0);

   FUNC_0(VAR_3->rx_data_reassembly);
   VAR_3->rx_data_reassembly = ((void*)0);

   VAR_9 = -VAR_0;
   goto exit;
  }


  FUNC_1(FUNC_6(VAR_4, VAR_8),
         VAR_3->rx_data_reassembly->data,
         VAR_8);


  FUNC_0(VAR_3->rx_data_reassembly);
  VAR_3->rx_data_reassembly = ((void*)0);
 }

 if (VAR_5 == VAR_1) {

  VAR_3->rx_data_reassembly = VAR_4;
  return;
 }

exit:
 if (VAR_3->nfc_dev->rf_mode == VAR_2) {

  VAR_9 = FUNC_3(VAR_3->nfc_dev, VAR_4);
  if (VAR_9)
   FUNC_4("unable to handle received data\n");
 } else {
  FUNC_2(VAR_3, VAR_4, VAR_6, VAR_9);
 }
}
