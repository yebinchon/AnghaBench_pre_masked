
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_target {int dummy; } ;
struct nfc_hci_dev {TYPE_1__* ops; } ;
struct nfc_dev {int dummy; } ;
typedef int __u8 ;
struct TYPE_2__ {int (* dep_link_up ) (struct nfc_hci_dev*,struct nfc_target*,int ,int *,size_t) ;} ;


 struct nfc_hci_dev* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*,struct nfc_target*,int ,int *,size_t) ;

__attribute__((used)) static int FUNC_2(struct nfc_dev *VAR_0, struct nfc_target *VAR_1,
    __u8 VAR_2, __u8 *VAR_3, size_t VAR_4)
{
 struct nfc_hci_dev *VAR_5 = FUNC_0(VAR_0);

 if (!VAR_5->ops->dep_link_up)
  return 0;

 return VAR_5->ops->dep_link_up(VAR_5, VAR_1, VAR_2,
          VAR_3, VAR_4);
}
