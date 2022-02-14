
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfc_se {scalar_t__ state; } ;
struct nfc_dev {int dev; TYPE_1__* ops; scalar_t__ polling; int dev_up; } ;
struct TYPE_2__ {int (* enable_se ) (struct nfc_dev*,int ) ;int disable_se; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nfc_se* FUNC_4 (struct nfc_dev*,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct nfc_dev*,int ) ;

int FUNC_7(struct nfc_dev *VAR_6, u32 VAR_7)
{
 struct nfc_se *VAR_8;
 int VAR_9;

 FUNC_5("%s se index %d\n", FUNC_0(&VAR_6->dev), VAR_7);

 FUNC_2(&VAR_6->dev);

 if (!FUNC_1(&VAR_6->dev)) {
  VAR_9 = -VAR_3;
  goto error;
 }

 if (!VAR_6->dev_up) {
  VAR_9 = -VAR_3;
  goto error;
 }

 if (VAR_6->polling) {
  VAR_9 = -VAR_1;
  goto error;
 }

 if (!VAR_6->ops->enable_se || !VAR_6->ops->disable_se) {
  VAR_9 = -VAR_4;
  goto error;
 }

 VAR_8 = FUNC_4(VAR_6, VAR_7);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto error;
 }

 if (VAR_8->state == VAR_5) {
  VAR_9 = -VAR_0;
  goto error;
 }

 VAR_9 = VAR_6->ops->enable_se(VAR_6, VAR_7);
 if (VAR_9 >= 0)
  VAR_8->state = VAR_5;

error:
 FUNC_3(&VAR_6->dev);
 return VAR_9;
}
