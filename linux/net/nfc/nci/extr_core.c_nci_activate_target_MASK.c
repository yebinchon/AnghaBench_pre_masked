
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_target {scalar_t__ idx; int supported_protocols; int logical_idx; } ;
struct nfc_dev {int dummy; } ;
struct nci_rf_discover_select_param {int rf_protocol; int rf_discovery_id; } ;
struct nci_dev {int target_active_prot; int n_targets; int state; struct nfc_target* targets; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nci_dev*,int ,unsigned long,int ) ;
 int VAR_15 ;
 struct nci_dev* FUNC_3 (struct nfc_dev*) ;
 int FUNC_4 (char*,scalar_t__,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct nfc_dev *VAR_16,
          struct nfc_target *VAR_17, __u32 VAR_18)
{
 struct nci_dev *VAR_19 = FUNC_3(VAR_16);
 struct nci_rf_discover_select_param VAR_20;
 struct nfc_target *VAR_21 = ((void*)0);
 int VAR_22;
 int VAR_23 = 0;

 FUNC_4("target_idx %d, protocol 0x%x\n", VAR_17->idx, VAR_18);

 if ((FUNC_0(&VAR_19->state) != VAR_9) &&
     (FUNC_0(&VAR_19->state) != VAR_2)) {
  FUNC_5("there is no available target to activate\n");
  return -VAR_1;
 }

 if (VAR_19->target_active_prot) {
  FUNC_5("there is already an active target\n");
  return -VAR_0;
 }

 for (VAR_22 = 0; VAR_22 < VAR_19->n_targets; VAR_22++) {
  if (VAR_19->targets[VAR_22].idx == VAR_17->idx) {
   VAR_21 = &VAR_19->targets[VAR_22];
   break;
  }
 }

 if (!VAR_21) {
  FUNC_5("unable to find the selected target\n");
  return -VAR_1;
 }

 if (!(VAR_21->supported_protocols & (1 << VAR_18))) {
  FUNC_5("target does not support the requested protocol 0x%x\n",
         VAR_18);
  return -VAR_1;
 }

 if (FUNC_0(&VAR_19->state) == VAR_9) {
  VAR_20.rf_discovery_id = VAR_21->logical_idx;

  if (VAR_18 == VAR_13)
   VAR_20.rf_protocol = VAR_6;
  else if (VAR_18 == VAR_14)
   VAR_20.rf_protocol = VAR_7;
  else if (VAR_18 == VAR_10)
   VAR_20.rf_protocol = VAR_8;
  else if (VAR_18 == VAR_11 ||
    VAR_18 == VAR_12)
   VAR_20.rf_protocol = VAR_4;
  else
   VAR_20.rf_protocol = VAR_5;

  VAR_23 = FUNC_2(VAR_19, VAR_15,
     (unsigned long)&VAR_20,
     FUNC_1(VAR_3));
 }

 if (!VAR_23)
  VAR_19->target_active_prot = VAR_18;

 return VAR_23;
}
