
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nfc_dev {int dev; TYPE_2__* active_target; TYPE_1__* ops; int check_pres_timer; } ;
struct TYPE_4__ {scalar_t__ idx; } ;
struct TYPE_3__ {int (* deactivate_target ) (struct nfc_dev*,TYPE_2__*,int ) ;scalar_t__ check_presence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 (struct nfc_dev*,TYPE_2__*,int ) ;

int FUNC_7(struct nfc_dev *VAR_2, u32 VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;

 FUNC_5("dev_name=%s target_idx=%u\n",
   FUNC_1(&VAR_2->dev), VAR_3);

 FUNC_3(&VAR_2->dev);

 if (!FUNC_2(&VAR_2->dev)) {
  VAR_5 = -VAR_0;
  goto error;
 }

 if (VAR_2->active_target == ((void*)0)) {
  VAR_5 = -VAR_1;
  goto error;
 }

 if (VAR_2->active_target->idx != VAR_3) {
  VAR_5 = -VAR_1;
  goto error;
 }

 if (VAR_2->ops->check_presence)
  FUNC_0(&VAR_2->check_pres_timer);

 VAR_2->ops->deactivate_target(VAR_2, VAR_2->active_target, VAR_4);
 VAR_2->active_target = ((void*)0);

error:
 FUNC_4(&VAR_2->dev);
 return VAR_5;
}
