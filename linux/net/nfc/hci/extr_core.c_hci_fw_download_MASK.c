
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_hci_dev {TYPE_1__* ops; } ;
struct nfc_dev {int dummy; } ;
struct TYPE_2__ {int (* fw_download ) (struct nfc_hci_dev*,char const*) ;} ;


 int VAR_0 ;
 struct nfc_hci_dev* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*,char const*) ;

__attribute__((used)) static int FUNC_2(struct nfc_dev *VAR_1, const char *VAR_2)
{
 struct nfc_hci_dev *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->ops->fw_download)
  return -VAR_0;

 return VAR_3->ops->fw_download(VAR_3, VAR_2);
}
