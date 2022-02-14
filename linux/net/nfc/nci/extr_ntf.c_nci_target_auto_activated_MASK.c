
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_target {int logical_idx; } ;
struct nci_rf_intf_activated_ntf {int rf_discovery_id; int rf_tech_specific_params; int activation_rf_tech_and_mode; int rf_protocol; } ;
struct nci_dev {size_t n_targets; struct nfc_target* targets; int nfc_dev; } ;


 int FUNC_0 (struct nci_dev*,struct nfc_target*,int ,int ,int *) ;
 int FUNC_1 (int ,struct nfc_target*,size_t) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static void FUNC_3(struct nci_dev *VAR_0,
          struct nci_rf_intf_activated_ntf *VAR_1)
{
 struct nfc_target *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_0->targets[VAR_0->n_targets];

 VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1->rf_protocol,
      VAR_1->activation_rf_tech_and_mode,
      &VAR_1->rf_tech_specific_params);
 if (VAR_3)
  return;

 VAR_2->logical_idx = VAR_1->rf_discovery_id;
 VAR_0->n_targets++;

 FUNC_2("logical idx %d, n_targets %d\n",
   VAR_2->logical_idx, VAR_0->n_targets);

 FUNC_1(VAR_0->nfc_dev, VAR_0->targets, VAR_0->n_targets);
}
