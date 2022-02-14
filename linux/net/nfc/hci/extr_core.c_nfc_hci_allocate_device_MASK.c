
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfc_hci_ops {int * xmit; } ;
struct nfc_hci_init_data {int dummy; } ;
struct nfc_hci_dev {int max_data_link_payload; unsigned long quirks; int ndev; struct nfc_hci_init_data init_data; struct nfc_hci_ops* ops; int * llc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfc_hci_dev*) ;
 struct nfc_hci_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct nfc_hci_dev*) ;
 int * FUNC_4 (char const*,struct nfc_hci_dev*,int *,int ,int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct nfc_hci_dev*) ;

struct nfc_hci_dev *FUNC_7(struct nfc_hci_ops *VAR_5,
         struct nfc_hci_init_data *VAR_6,
         unsigned long VAR_7,
         u32 VAR_8,
         const char *VAR_9,
         int VAR_10,
         int VAR_11,
         int VAR_12)
{
 struct nfc_hci_dev *VAR_13;

 if (VAR_5->xmit == ((void*)0))
  return ((void*)0);

 if (VAR_8 == 0)
  return ((void*)0);

 VAR_13 = FUNC_1(sizeof(struct nfc_hci_dev), VAR_0);
 if (VAR_13 == ((void*)0))
  return ((void*)0);

 VAR_13->llc = FUNC_4(VAR_9, VAR_13, VAR_5->xmit,
         VAR_4, VAR_10,
         VAR_11, VAR_3);
 if (VAR_13->llc == ((void*)0)) {
  FUNC_0(VAR_13);
  return ((void*)0);
 }

 VAR_13->ndev = FUNC_2(&VAR_2, VAR_8,
      VAR_10 + VAR_1,
      VAR_11);
 if (!VAR_13->ndev) {
  FUNC_5(VAR_13->llc);
  FUNC_0(VAR_13);
  return ((void*)0);
 }

 VAR_13->ops = VAR_5;
 VAR_13->max_data_link_payload = VAR_12;
 VAR_13->init_data = *VAR_6;

 FUNC_6(VAR_13->ndev, VAR_13);

 FUNC_3(VAR_13);

 VAR_13->quirks = VAR_7;

 return VAR_13;
}
