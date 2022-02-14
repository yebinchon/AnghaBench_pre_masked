
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfc_dev {int dummy; } ;
struct nci_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable_se ) (struct nci_dev*,int ) ;} ;


 struct nci_dev* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nci_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct nfc_dev *VAR_0, u32 VAR_1)
{
 struct nci_dev *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->ops->enable_se)
  return VAR_2->ops->enable_se(VAR_2, VAR_1);

 return 0;
}
