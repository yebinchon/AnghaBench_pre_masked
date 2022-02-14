
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int boot_complete; int enabled_cores_mask; int dev; int boot_timeout; int boot_wait; int fw_version; scalar_t__ first_boot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_sof_dev*,int *,int,char*,int) ;
 int FUNC_6 (struct snd_sof_dev*,int) ;
 int FUNC_7 (struct snd_sof_dev*) ;
 int FUNC_8 (struct snd_sof_dev*) ;
 int FUNC_9 (struct snd_sof_dev*) ;
 int FUNC_10 (int ,int,int ) ;

int FUNC_11(struct snd_sof_dev *VAR_5)
{
 int VAR_6;
 int VAR_7;

 FUNC_3(&VAR_5->boot_wait);
 VAR_5->boot_complete = 0;


 if (VAR_5->first_boot) {
  VAR_6 = FUNC_5(VAR_5, &VAR_5->fw_version,
            sizeof(VAR_5->fw_version),
            "fw_version", 0444);

  if (VAR_6 < 0) {
   FUNC_1(VAR_5->dev, "error: snd_sof_debugfs_buf_item failed\n");
   return VAR_6;
  }
 }


 VAR_6 = FUNC_8(VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5->dev, "error: failed pre fw run op\n");
  return VAR_6;
 }

 FUNC_0(VAR_5->dev, "booting DSP firmware\n");


 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5->dev, "error: failed to reset DSP\n");
  return VAR_6;
 }

 VAR_7 = VAR_6;


 VAR_6 = FUNC_10(VAR_5->boot_wait, VAR_5->boot_complete,
     FUNC_4(VAR_5->boot_timeout));
 if (VAR_6 == 0) {
  FUNC_1(VAR_5->dev, "error: firmware boot failure\n");
  FUNC_6(VAR_5, VAR_3 | VAR_1 |
   VAR_4 | VAR_2);

  VAR_5->boot_complete = 1;
  return -VAR_0;
 }

 FUNC_2(VAR_5->dev, "firmware boot complete\n");


 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5->dev, "error: failed post fw run op\n");
  return VAR_6;
 }


 VAR_5->enabled_cores_mask = VAR_7;

 return 0;
}
