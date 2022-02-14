
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rssi; } ;
struct inquiry_entry {int name_state; TYPE_1__ data; int list; } ;
struct discovery_state {scalar_t__ state; } ;
struct hci_dev {struct discovery_state discovery; } ;
struct hci_conn {scalar_t__ state; int flags; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hci_dev*,scalar_t__) ;
 struct inquiry_entry* FUNC_1 (struct hci_dev*,int *,int ) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hci_dev*,struct hci_conn*,int ,int *,int ) ;
 int FUNC_5 (struct hci_dev*,int *,int ,int,int ,int *,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_10, struct hci_conn *VAR_11,
       bdaddr_t *VAR_12, u8 *VAR_13, u8 VAR_14)
{
 struct discovery_state *VAR_15 = &VAR_10->discovery;
 struct inquiry_entry *VAR_16;






 if (VAR_11 &&
     (VAR_11->state == VAR_1 || VAR_11->state == VAR_2) &&
     !FUNC_6(VAR_6, &VAR_11->flags))
  FUNC_4(VAR_10, VAR_11, 0, VAR_13, VAR_14);

 if (VAR_15->state == VAR_4)
  return;

 if (VAR_15->state == VAR_5)
  goto discov_complete;

 if (VAR_15->state != VAR_3)
  return;

 VAR_16 = FUNC_1(VAR_10, VAR_12, VAR_9);




 if (!VAR_16)
  return;

 FUNC_3(&VAR_16->list);
 if (VAR_13) {
  VAR_16->name_state = VAR_7;
  FUNC_5(VAR_10, VAR_12, VAR_0, 0x00,
     VAR_16->data.rssi, VAR_13, VAR_14);
 } else {
  VAR_16->name_state = VAR_8;
 }

 if (FUNC_2(VAR_10))
  return;

discov_complete:
 FUNC_0(VAR_10, VAR_4);
}
