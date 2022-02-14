
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfc_hci_dev {TYPE_1__* ops; } ;
struct nfc_dev {int dummy; } ;
struct TYPE_2__ {int (* start_poll ) (struct nfc_hci_dev*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfc_hci_dev* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,int *,int ) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct nfc_dev *VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 struct nfc_hci_dev *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->ops->start_poll)
  return VAR_5->ops->start_poll(VAR_5, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_5, VAR_1,
       VAR_0,
       ((void*)0), 0);
}
