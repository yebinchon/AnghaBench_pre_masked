
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int type; int bdaddr; } ;
struct mgmt_ev_device_found {scalar_t__* eir; int eir_len; int flags; scalar_t__ rssi; TYPE_2__ addr; } ;
struct TYPE_3__ {int report_invalid_rssi; scalar_t__ limited; scalar_t__ result_filtering; } ;
struct hci_dev {TYPE_1__ discovery; int pend_le_reports; } ;
typedef scalar_t__ s8 ;
typedef int buf ;
typedef int bdaddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,int,int ,scalar_t__*,int) ;
 scalar_t__* FUNC_4 (scalar_t__*,int,int ,int *) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,scalar_t__,scalar_t__*,int,scalar_t__*,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (int ,struct hci_dev*,struct mgmt_ev_device_found*,size_t,int *) ;

void FUNC_12(struct hci_dev *VAR_7, bdaddr_t *VAR_8, u8 VAR_9,
         u8 VAR_10, u8 *VAR_11, s8 VAR_12, u32 VAR_13,
         u8 *VAR_14, u16 VAR_15, u8 *VAR_16, u8 VAR_17)
{
 char VAR_18[512];
 struct mgmt_ev_device_found *VAR_19 = (void *)VAR_18;
 size_t VAR_20;





 if (!FUNC_5(VAR_7)) {
  if (VAR_9 == VAR_0)
   return;
  if (VAR_9 == VAR_5 && FUNC_8(&VAR_7->pend_le_reports))
   return;
 }

 if (VAR_7->discovery.result_filtering) {

  if (!FUNC_6(VAR_7, VAR_12, VAR_14, VAR_15, VAR_16,
         VAR_17))
   return;
 }

 if (VAR_7->discovery.limited) {

  if (VAR_11) {
   if (!(VAR_11[1] & 0x20))
    return;
  } else {
   u8 *VAR_21 = FUNC_4(VAR_14, VAR_15, VAR_2, ((void*)0));
   if (!VAR_21 || !(VAR_21[0] & VAR_4))
    return;
  }
 }




 if (sizeof(*VAR_19) + VAR_15 + VAR_17 + 5 > sizeof(VAR_18))
  return;

 FUNC_10(VAR_18, 0, sizeof(VAR_18));
 if (VAR_12 == VAR_3 && !VAR_7->discovery.report_invalid_rssi &&
     VAR_9 == VAR_0)
  VAR_12 = 0;

 FUNC_0(&VAR_19->addr.bdaddr, VAR_8);
 VAR_19->addr.type = FUNC_7(VAR_9, VAR_10);
 VAR_19->rssi = VAR_12;
 VAR_19->flags = FUNC_2(VAR_13);

 if (VAR_15 > 0)

  FUNC_9(VAR_19->eir, VAR_14, VAR_15);

 if (VAR_11 && !FUNC_4(VAR_19->eir, VAR_15, VAR_1,
           ((void*)0)))
  VAR_15 = FUNC_3(VAR_19->eir, VAR_15, VAR_1,
       VAR_11, 3);

 if (VAR_17 > 0)

  FUNC_9(VAR_19->eir + VAR_15, VAR_16, VAR_17);

 VAR_19->eir_len = FUNC_1(VAR_15 + VAR_17);
 VAR_20 = sizeof(*VAR_19) + VAR_15 + VAR_17;

 FUNC_11(VAR_6, VAR_7, VAR_19, VAR_20, ((void*)0));
}
