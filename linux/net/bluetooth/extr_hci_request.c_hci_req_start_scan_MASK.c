
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct hci_cp_le_set_scan_param {void* filter_dup; void* enable; void* filter_policy; void* own_address_type; void* window; void* interval; void* type; int scanning_phys; void* own_addr_type; scalar_t__ data; } ;
struct hci_cp_le_set_scan_enable {void* filter_dup; void* enable; void* filter_policy; void* own_address_type; void* window; void* interval; void* type; int scanning_phys; void* own_addr_type; scalar_t__ data; } ;
struct hci_cp_le_set_ext_scan_params {void* filter_dup; void* enable; void* filter_policy; void* own_address_type; void* window; void* interval; void* type; int scanning_phys; void* own_addr_type; scalar_t__ data; } ;
struct hci_cp_le_set_ext_scan_enable {void* filter_dup; void* enable; void* filter_policy; void* own_address_type; void* window; void* interval; void* type; int scanning_phys; void* own_addr_type; scalar_t__ data; } ;
struct hci_cp_le_scan_phy_params {void* filter_dup; void* enable; void* filter_policy; void* own_address_type; void* window; void* interval; void* type; int scanning_phys; void* own_addr_type; scalar_t__ data; } ;
typedef int param_cp ;
typedef int ext_enable_cp ;
typedef int enable_cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct hci_request*,int ,int,struct hci_cp_le_set_scan_param*) ;
 int FUNC_2 (struct hci_cp_le_set_scan_param*,int ,int) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_7(struct hci_request *VAR_8, u8 VAR_9, u16 VAR_10,
          u16 VAR_11, u8 VAR_12, u8 VAR_13)
{
 struct hci_dev *VAR_14 = VAR_8->hdev;




 if (FUNC_6(VAR_14)) {
  struct hci_cp_le_set_ext_scan_params *VAR_15;
  struct hci_cp_le_set_ext_scan_enable VAR_16;
  struct hci_cp_le_scan_phy_params *VAR_17;
  u8 VAR_18[sizeof(*VAR_15) + sizeof(*VAR_17) * 2];
  u32 VAR_19;

  VAR_15 = (void *)VAR_18;
  VAR_17 = (void *)VAR_15->data;

  FUNC_2(VAR_15, 0, sizeof(*VAR_15));
  VAR_15->own_addr_type = VAR_12;
  VAR_15->filter_policy = VAR_13;

  VAR_19 = sizeof(*VAR_15);

  if (FUNC_3(VAR_14) || FUNC_4(VAR_14)) {
   VAR_15->scanning_phys |= VAR_6;

   FUNC_2(VAR_17, 0, sizeof(*VAR_17));
   VAR_17->type = VAR_9;
   VAR_17->interval = FUNC_0(VAR_10);
   VAR_17->window = FUNC_0(VAR_11);

   VAR_19 += sizeof(*VAR_17);
   VAR_17++;
  }

  if (FUNC_5(VAR_14)) {
   VAR_15->scanning_phys |= VAR_7;

   FUNC_2(VAR_17, 0, sizeof(*VAR_17));
   VAR_17->type = VAR_9;
   VAR_17->interval = FUNC_0(VAR_10);
   VAR_17->window = FUNC_0(VAR_11);

   VAR_19 += sizeof(*VAR_17);
   VAR_17++;
  }

  FUNC_1(VAR_8, VAR_1,
       VAR_19, VAR_15);

  FUNC_2(&VAR_16, 0, sizeof(VAR_16));
  VAR_16.enable = VAR_4;
  VAR_16.filter_dup = VAR_5;

  FUNC_1(VAR_8, VAR_0,
       sizeof(VAR_16), &VAR_16);
 } else {
  struct hci_cp_le_set_scan_param VAR_20;
  struct hci_cp_le_set_scan_enable VAR_21;

  FUNC_2(&VAR_20, 0, sizeof(VAR_20));
  VAR_20.type = VAR_9;
  VAR_20.interval = FUNC_0(VAR_10);
  VAR_20.window = FUNC_0(VAR_11);
  VAR_20.own_address_type = VAR_12;
  VAR_20.filter_policy = VAR_13;
  FUNC_1(VAR_8, VAR_3, sizeof(VAR_20),
       &VAR_20);

  FUNC_2(&VAR_21, 0, sizeof(VAR_21));
  VAR_21.enable = VAR_4;
  VAR_21.filter_dup = VAR_5;
  FUNC_1(VAR_8, VAR_2, sizeof(VAR_21),
       &VAR_21);
 }
}
