
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nfc_target {int idx; } ;
struct nfc_dev {int dummy; } ;
struct nci_dev {int flags; int target_active_prot; struct nci_conn_info* rf_conn_info; } ;
struct nci_conn_info {void* data_exchange_cb_context; int data_exchange_cb; } ;
typedef int data_exchange_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nci_dev*,int ,struct sk_buff*) ;
 struct nci_dev* FUNC_2 (struct nfc_dev*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct nfc_dev *VAR_5, struct nfc_target *VAR_6,
     struct sk_buff *VAR_7,
     data_exchange_cb_t VAR_8, void *VAR_9)
{
 struct nci_dev *VAR_10 = FUNC_2(VAR_5);
 int VAR_11;
 struct nci_conn_info *VAR_12;

 VAR_12 = VAR_10->rf_conn_info;
 if (!VAR_12)
  return -VAR_2;

 FUNC_3("target_idx %d, len %d\n", VAR_6->idx, VAR_7->len);

 if (!VAR_10->target_active_prot) {
  FUNC_4("unable to exchange data, no active target\n");
  return -VAR_1;
 }

 if (FUNC_5(VAR_3, &VAR_10->flags))
  return -VAR_0;


 VAR_12->data_exchange_cb = VAR_8;
 VAR_12->data_exchange_cb_context = VAR_9;

 VAR_11 = FUNC_1(VAR_10, VAR_4, VAR_7);
 if (VAR_11)
  FUNC_0(VAR_3, &VAR_10->flags);

 return VAR_11;
}
