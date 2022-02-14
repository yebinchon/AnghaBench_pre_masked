
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfc_se {scalar_t__ state; } ;
struct nfc_dev {int dev; TYPE_1__* ops; int dev_up; } ;
struct TYPE_2__ {int (* disable_se ) (struct nfc_dev*,int ) ;int enable_se; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nfc_se* FUNC_4 (struct nfc_dev*,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct nfc_dev*,int ) ;

int FUNC_7(struct nfc_dev *VAR_5, u32 VAR_6)
{
 struct nfc_se *VAR_7;
 int VAR_8;

 FUNC_5("%s se index %d\n", FUNC_0(&VAR_5->dev), VAR_6);

 FUNC_2(&VAR_5->dev);

 if (!FUNC_1(&VAR_5->dev)) {
  VAR_8 = -VAR_2;
  goto error;
 }

 if (!VAR_5->dev_up) {
  VAR_8 = -VAR_2;
  goto error;
 }

 if (!VAR_5->ops->enable_se || !VAR_5->ops->disable_se) {
  VAR_8 = -VAR_3;
  goto error;
 }

 VAR_7 = FUNC_4(VAR_5, VAR_6);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto error;
 }

 if (VAR_7->state == VAR_4) {
  VAR_8 = -VAR_0;
  goto error;
 }

 VAR_8 = VAR_5->ops->disable_se(VAR_5, VAR_6);
 if (VAR_8 >= 0)
  VAR_7->state = VAR_4;

error:
 FUNC_3(&VAR_5->dev);
 return VAR_8;
}
