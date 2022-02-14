
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_target {scalar_t__ logical_idx; } ;
struct nci_rf_discover_ntf {scalar_t__ rf_discovery_id; int rf_tech_specific_params; int rf_tech_and_mode; int rf_protocol; } ;
struct nci_dev {int n_targets; struct nfc_target* targets; } ;


 int VAR_0 ;
 int FUNC_0 (struct nci_dev*,struct nfc_target*,int ,int ,int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct nci_dev *VAR_1,
          struct nci_rf_discover_ntf *VAR_2)
{
 struct nfc_target *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1->n_targets; VAR_4++) {
  VAR_3 = &VAR_1->targets[VAR_4];
  if (VAR_3->logical_idx == VAR_2->rf_discovery_id) {

   FUNC_0(VAR_1, VAR_3, VAR_2->rf_protocol,
          VAR_2->rf_tech_and_mode,
          &VAR_2->rf_tech_specific_params);
   return;
  }
 }


 if (VAR_1->n_targets == VAR_0) {
  FUNC_1("not enough room, ignoring new target...\n");
  return;
 }

 VAR_3 = &VAR_1->targets[VAR_1->n_targets];

 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_2->rf_protocol,
      VAR_2->rf_tech_and_mode,
      &VAR_2->rf_tech_specific_params);
 if (!VAR_5) {
  VAR_3->logical_idx = VAR_2->rf_discovery_id;
  VAR_1->n_targets++;

  FUNC_1("logical idx %d, n_targets %d\n", VAR_3->logical_idx,
    VAR_1->n_targets);
 }
}
