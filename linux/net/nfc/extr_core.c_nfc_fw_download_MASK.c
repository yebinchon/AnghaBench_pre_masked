
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_dev {int fw_download_in_progress; int dev; TYPE_1__* ops; scalar_t__ dev_up; } ;
struct TYPE_2__ {int (* fw_download ) (struct nfc_dev*,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char const*) ;
 int FUNC_5 (struct nfc_dev*,char const*) ;

int FUNC_6(struct nfc_dev *VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;

 FUNC_4("%s do firmware %s\n", FUNC_0(&VAR_3->dev), VAR_4);

 FUNC_2(&VAR_3->dev);

 if (!FUNC_1(&VAR_3->dev)) {
  VAR_5 = -VAR_1;
  goto error;
 }

 if (VAR_3->dev_up) {
  VAR_5 = -VAR_0;
  goto error;
 }

 if (!VAR_3->ops->fw_download) {
  VAR_5 = -VAR_2;
  goto error;
 }

 VAR_3->fw_download_in_progress = 1;
 VAR_5 = VAR_3->ops->fw_download(VAR_3, VAR_4);
 if (VAR_5)
  VAR_3->fw_download_in_progress = 0;

error:
 FUNC_3(&VAR_3->dev);
 return VAR_5;
}
