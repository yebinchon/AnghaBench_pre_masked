
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_dev {int dep_link_up; int dev; int rf_mode; int * active_target; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dep_link_down ) (struct nfc_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfc_dev*) ;
 int FUNC_5 (struct nfc_dev*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct nfc_dev*) ;

int FUNC_8(struct nfc_dev *VAR_4)
{
 int VAR_5 = 0;

 FUNC_6("dev_name=%s\n", FUNC_0(&VAR_4->dev));

 if (!VAR_4->ops->dep_link_down)
  return -VAR_2;

 FUNC_2(&VAR_4->dev);

 if (!FUNC_1(&VAR_4->dev)) {
  VAR_5 = -VAR_1;
  goto error;
 }

 if (VAR_4->dep_link_up == 0) {
  VAR_5 = -VAR_0;
  goto error;
 }

 VAR_5 = VAR_4->ops->dep_link_down(VAR_4);
 if (!VAR_5) {
  VAR_4->dep_link_up = 0;
  VAR_4->active_target = ((void*)0);
  VAR_4->rf_mode = VAR_3;
  FUNC_5(VAR_4);
  FUNC_4(VAR_4);
 }

error:
 FUNC_3(&VAR_4->dev);

 return VAR_5;
}
