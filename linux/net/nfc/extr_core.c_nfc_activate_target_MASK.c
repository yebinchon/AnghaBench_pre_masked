
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfc_target {int dummy; } ;
struct nfc_dev {int dev; int check_pres_timer; int shutting_down; TYPE_1__* ops; int rf_mode; struct nfc_target* active_target; } ;
struct TYPE_2__ {int (* activate_target ) (struct nfc_dev*,struct nfc_target*,int ) ;scalar_t__ check_presence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 struct nfc_target* FUNC_6 (struct nfc_dev*,int ) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (struct nfc_dev*,struct nfc_target*,int ) ;

int FUNC_9(struct nfc_dev *VAR_6, u32 VAR_7, u32 VAR_8)
{
 int VAR_9;
 struct nfc_target *VAR_10;

 FUNC_7("dev_name=%s target_idx=%u protocol=%u\n",
   FUNC_0(&VAR_6->dev), VAR_7, VAR_8);

 FUNC_2(&VAR_6->dev);

 if (!FUNC_1(&VAR_6->dev)) {
  VAR_9 = -VAR_1;
  goto error;
 }

 if (VAR_6->active_target) {
  VAR_9 = -VAR_0;
  goto error;
 }

 VAR_10 = FUNC_6(VAR_6, VAR_7);
 if (VAR_10 == ((void*)0)) {
  VAR_9 = -VAR_2;
  goto error;
 }

 VAR_9 = VAR_6->ops->activate_target(VAR_6, VAR_10, VAR_8);
 if (!VAR_9) {
  VAR_6->active_target = VAR_10;
  VAR_6->rf_mode = VAR_4;

  if (VAR_6->ops->check_presence && !VAR_6->shutting_down)
   FUNC_4(&VAR_6->check_pres_timer, VAR_5 +
      FUNC_5(VAR_3));
 }

error:
 FUNC_3(&VAR_6->dev);
 return VAR_9;
}
