
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_dev {int dev_up; int dev; TYPE_1__* ops; scalar_t__ active_target; scalar_t__ polling; } ;
struct TYPE_2__ {int (* dev_down ) (struct nfc_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct nfc_dev*) ;

int FUNC_6(struct nfc_dev *VAR_3)
{
 int VAR_4 = 0;

 FUNC_4("dev_name=%s\n", FUNC_0(&VAR_3->dev));

 FUNC_2(&VAR_3->dev);

 if (!FUNC_1(&VAR_3->dev)) {
  VAR_4 = -VAR_2;
  goto error;
 }

 if (!VAR_3->dev_up) {
  VAR_4 = -VAR_0;
  goto error;
 }

 if (VAR_3->polling || VAR_3->active_target) {
  VAR_4 = -VAR_1;
  goto error;
 }

 if (VAR_3->ops->dev_down)
  VAR_3->ops->dev_down(VAR_3);

 VAR_3->dev_up = 0;

error:
 FUNC_3(&VAR_3->dev);
 return VAR_4;
}
