
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_target {int dummy; } ;
struct nci_dev {scalar_t__ n_targets; int targets; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct nci_dev *VAR_1)
{
 FUNC_0(VAR_1->targets, 0,
        (sizeof(struct nfc_target)*VAR_0));

 VAR_1->n_targets = 0;
}
