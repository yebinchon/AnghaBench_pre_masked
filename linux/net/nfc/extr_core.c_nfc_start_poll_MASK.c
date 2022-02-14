
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfc_dev {int polling; int dev; int rf_mode; TYPE_1__* ops; int dev_up; } ;
struct TYPE_2__ {int (* start_poll ) (struct nfc_dev*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (struct nfc_dev*,int ,int ) ;

int FUNC_6(struct nfc_dev *VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7;

 FUNC_4("dev_name %s initiator protocols 0x%x target protocols 0x%x\n",
   FUNC_0(&VAR_4->dev), VAR_5, VAR_6);

 if (!VAR_5 && !VAR_6)
  return -VAR_1;

 FUNC_2(&VAR_4->dev);

 if (!FUNC_1(&VAR_4->dev)) {
  VAR_7 = -VAR_2;
  goto error;
 }

 if (!VAR_4->dev_up) {
  VAR_7 = -VAR_2;
  goto error;
 }

 if (VAR_4->polling) {
  VAR_7 = -VAR_0;
  goto error;
 }

 VAR_7 = VAR_4->ops->start_poll(VAR_4, VAR_5, VAR_6);
 if (!VAR_7) {
  VAR_4->polling = 1;
  VAR_4->rf_mode = VAR_3;
 }

error:
 FUNC_3(&VAR_4->dev);
 return VAR_7;
}
