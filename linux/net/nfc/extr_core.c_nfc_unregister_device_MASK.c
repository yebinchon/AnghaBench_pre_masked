
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_dev {int shutting_down; int dev; int check_pres_work; int check_pres_timer; TYPE_1__* ops; scalar_t__ rfkill; } ;
struct TYPE_2__ {scalar_t__ check_presence; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (struct nfc_dev*) ;
 int FUNC_9 (struct nfc_dev*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;

void FUNC_13(struct nfc_dev *VAR_2)
{
 int VAR_3;

 FUNC_10("dev_name=%s\n", FUNC_2(&VAR_2->dev));

 if (VAR_2->rfkill) {
  FUNC_12(VAR_2->rfkill);
  FUNC_11(VAR_2->rfkill);
 }

 if (VAR_2->ops->check_presence) {
  FUNC_4(&VAR_2->dev);
  VAR_2->shutting_down = 1;
  FUNC_5(&VAR_2->dev);
  FUNC_1(&VAR_2->check_pres_timer);
  FUNC_0(&VAR_2->check_pres_work);
 }

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3)
  FUNC_10("The userspace won't be notified that the device %s "
    "was removed\n", FUNC_2(&VAR_2->dev));

 FUNC_9(VAR_2);

 FUNC_6(&VAR_1);
 VAR_0++;
 FUNC_3(&VAR_2->dev);
 FUNC_7(&VAR_1);
}
