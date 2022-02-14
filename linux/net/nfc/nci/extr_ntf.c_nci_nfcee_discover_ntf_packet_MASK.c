
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nci_nfcee_discover_ntf {int nfcee_id; } ;
struct TYPE_4__ {int id; } ;
struct nci_dev {TYPE_2__ cur_params; TYPE_1__* hci_dev; } ;
struct TYPE_3__ {int nfcee_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct nci_dev *VAR_1,
       struct sk_buff *VAR_2)
{
 u8 VAR_3 = VAR_0;
 struct nci_nfcee_discover_ntf *VAR_4 =
    (struct nci_nfcee_discover_ntf *)VAR_2->data;

 FUNC_1("\n");






 VAR_1->hci_dev->nfcee_id = VAR_4->nfcee_id;
 VAR_1->cur_params.id = VAR_4->nfcee_id;

 FUNC_0(VAR_1, VAR_3);
}
