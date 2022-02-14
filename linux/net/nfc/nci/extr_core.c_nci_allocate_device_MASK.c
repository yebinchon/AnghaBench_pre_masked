
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_ops {scalar_t__ n_prop_ops; int * prop_ops; int send; int close; int open; } ;
struct nci_dev {int tx_headroom; int tx_tailroom; int nfc_dev; int hci_dev; int req_completion; struct nci_ops* ops; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nci_dev*) ;
 struct nci_dev* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nci_dev*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,scalar_t__,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct nci_dev*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,scalar_t__) ;

struct nci_dev *FUNC_9(struct nci_ops *VAR_4,
        __u32 VAR_5,
        int VAR_6, int VAR_7)
{
 struct nci_dev *VAR_8;

 FUNC_7("supported_protocols 0x%x\n", VAR_5);

 if (!VAR_4->open || !VAR_4->close || !VAR_4->send)
  return ((void*)0);

 if (!VAR_5)
  return ((void*)0);

 VAR_8 = FUNC_2(sizeof(struct nci_dev), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->ops = VAR_4;

 if (VAR_4->n_prop_ops > VAR_2) {
  FUNC_8("Too many proprietary commands: %zd\n",
         VAR_4->n_prop_ops);
  VAR_4->prop_ops = ((void*)0);
  VAR_4->n_prop_ops = 0;
 }

 VAR_8->tx_headroom = VAR_6;
 VAR_8->tx_tailroom = VAR_7;
 FUNC_0(&VAR_8->req_completion);

 VAR_8->nfc_dev = FUNC_4(&VAR_3,
         VAR_5,
         VAR_6 + VAR_1,
         VAR_7);
 if (!VAR_8->nfc_dev)
  goto free_nci;

 VAR_8->hci_dev = FUNC_3(VAR_8);
 if (!VAR_8->hci_dev)
  goto free_nfc;

 FUNC_6(VAR_8->nfc_dev, VAR_8);

 return VAR_8;

free_nfc:
 FUNC_5(VAR_8->nfc_dev);
free_nci:
 FUNC_1(VAR_8);
 return ((void*)0);
}
