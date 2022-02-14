
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ rssi; int ssp_mode; } ;
struct inquiry_entry {scalar_t__ name_state; void* timestamp; TYPE_1__ data; int list; int all; } ;
struct inquiry_data {scalar_t__ rssi; int bdaddr; int ssp_mode; } ;
struct discovery_state {void* timestamp; int unknown; int all; } ;
struct hci_dev {struct discovery_state discovery; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct discovery_state*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct inquiry_entry* FUNC_1 (struct hci_dev*,int *) ;
 int FUNC_2 (struct hci_dev*,struct inquiry_entry*) ;
 int FUNC_3 (struct hci_dev*,int *,int ) ;
 void* VAR_8 ;
 struct inquiry_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,struct inquiry_data*,int) ;

u32 FUNC_8(struct hci_dev *VAR_9, struct inquiry_data *VAR_10,
        bool VAR_11)
{
 struct discovery_state *VAR_12 = &VAR_9->discovery;
 struct inquiry_entry *VAR_13;
 u32 VAR_14 = 0;

 FUNC_0("cache %p, %pMR", VAR_12, &VAR_10->bdaddr);

 FUNC_3(VAR_9, &VAR_10->bdaddr, VAR_0);

 if (!VAR_10->ssp_mode)
  VAR_14 |= VAR_3;

 VAR_13 = FUNC_1(VAR_9, &VAR_10->bdaddr);
 if (VAR_13) {
  if (!VAR_13->data.ssp_mode)
   VAR_14 |= VAR_3;

  if (VAR_13->name_state == VAR_5 &&
      VAR_10->rssi != VAR_13->data.rssi) {
   VAR_13->data.rssi = VAR_10->rssi;
   FUNC_2(VAR_9, VAR_13);
  }

  goto update;
 }


 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_1);
 if (!VAR_13) {
  VAR_14 |= VAR_2;
  goto done;
 }

 FUNC_5(&VAR_13->all, &VAR_12->all);

 if (VAR_11) {
  VAR_13->name_state = VAR_4;
 } else {
  VAR_13->name_state = VAR_6;
  FUNC_5(&VAR_13->list, &VAR_12->unknown);
 }

update:
 if (VAR_11 && VAR_13->name_state != VAR_4 &&
     VAR_13->name_state != VAR_7) {
  VAR_13->name_state = VAR_4;
  FUNC_6(&VAR_13->list);
 }

 FUNC_7(&VAR_13->data, VAR_10, sizeof(*VAR_10));
 VAR_13->timestamp = VAR_8;
 VAR_12->timestamp = VAR_8;

 if (VAR_13->name_state == VAR_6)
  VAR_14 |= VAR_2;

done:
 return VAR_14;
}
