
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_dev {int dummy; } ;
struct nci_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* discover_se ) (struct nci_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nci_dev*,int ) ;
 struct nci_dev* FUNC_1 (struct nfc_dev*) ;
 int FUNC_2 (struct nci_dev*) ;

__attribute__((used)) static int FUNC_3(struct nfc_dev *VAR_3)
{
 int VAR_4;
 struct nci_dev *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->ops->discover_se) {
  VAR_4 = FUNC_0(VAR_5, VAR_1);
  if (VAR_4 != VAR_2)
   return -VAR_0;

  return VAR_5->ops->discover_se(VAR_5);
 }

 return 0;
}
