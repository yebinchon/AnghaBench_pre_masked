
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dev_type; int id; void* req_workqueue; void* workqueue; int power_on; int quirks; int list; int * rfkill; int dev; int name; int debugfs; int bus; int send; int close; int open; } ;


 int FUNC_0 (char*,struct hci_dev*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (char*,int ,int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hci_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct hci_dev*,int ) ;
 int VAR_15 ;
 int FUNC_9 (struct hci_dev*) ;
 int VAR_16 ;
 int FUNC_10 (struct hci_dev*,int ) ;
 int FUNC_11 (int *,int,int ,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (void*,int *) ;
 int * FUNC_15 (int ,int *,int ,int *,struct hci_dev*) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int ,char*,int) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

int FUNC_23(struct hci_dev *VAR_17)
{
 int VAR_18, VAR_19;

 if (!VAR_17->open || !VAR_17->close || !VAR_17->send)
  return -VAR_0;




 switch (VAR_17->dev_type) {
 case 128:
  VAR_18 = FUNC_11(&VAR_15, 0, 0, VAR_2);
  break;
 case 129:
  VAR_18 = FUNC_11(&VAR_15, 1, 0, VAR_2);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_18 < 0)
  return VAR_18;

 FUNC_19(VAR_17->name, "hci%d", VAR_18);
 VAR_17->id = VAR_18;

 FUNC_0("%p name %s bus %d", VAR_17, VAR_17->name, VAR_17->bus);

 VAR_17->workqueue = FUNC_2("%s", VAR_11, VAR_17->name);
 if (!VAR_17->workqueue) {
  VAR_19 = -VAR_1;
  goto err;
 }

 VAR_17->req_workqueue = FUNC_2("%s", VAR_11,
            VAR_17->name);
 if (!VAR_17->req_workqueue) {
  FUNC_4(VAR_17->workqueue);
  VAR_19 = -VAR_1;
  goto err;
 }

 if (!FUNC_1(VAR_12))
  VAR_17->debugfs = FUNC_3(VAR_17->name, VAR_12);

 FUNC_5(&VAR_17->dev, "%s", VAR_17->name);

 VAR_19 = FUNC_6(&VAR_17->dev);
 if (VAR_19 < 0)
  goto err_wqueue;

 FUNC_9(VAR_17);

 VAR_17->rfkill = FUNC_15(VAR_17->name, &VAR_17->dev,
        VAR_10, &VAR_16,
        VAR_17);
 if (VAR_17->rfkill) {
  if (FUNC_18(VAR_17->rfkill) < 0) {
   FUNC_17(VAR_17->rfkill);
   VAR_17->rfkill = ((void*)0);
  }
 }

 if (VAR_17->rfkill && FUNC_16(VAR_17->rfkill))
  FUNC_8(VAR_17, VAR_7);

 FUNC_8(VAR_17, VAR_8);
 FUNC_8(VAR_17, VAR_3);

 if (VAR_17->dev_type == 128) {



  FUNC_8(VAR_17, VAR_4);
 }

 FUNC_21(&VAR_14);
 FUNC_13(&VAR_17->list, &VAR_13);
 FUNC_22(&VAR_14);




 if (FUNC_20(VAR_6, &VAR_17->quirks))
  FUNC_8(VAR_17, VAR_9);

 FUNC_10(VAR_17, VAR_5);
 FUNC_7(VAR_17);

 FUNC_14(VAR_17->req_workqueue, &VAR_17->power_on);

 return VAR_18;

err_wqueue:
 FUNC_4(VAR_17->workqueue);
 FUNC_4(VAR_17->req_workqueue);
err:
 FUNC_12(&VAR_15, VAR_17->id);

 return VAR_19;
}
