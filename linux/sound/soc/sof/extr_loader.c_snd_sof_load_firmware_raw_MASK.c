
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_pdata {scalar_t__ fw; int fw_filename; int fw_filename_prefix; } ;
struct snd_sof_dev {int code_loading; int dev; struct snd_sof_pdata* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,int) ;
 char* FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (scalar_t__*,char const*,int ) ;

int FUNC_4(struct snd_sof_dev *VAR_2)
{
 struct snd_sof_pdata *VAR_3 = VAR_2->pdata;
 const char *VAR_4;
 int VAR_5;


 VAR_2->code_loading = 1;


 if (VAR_3->fw)
  return 0;

 VAR_4 = FUNC_1(VAR_1, "%s/%s",
    VAR_3->fw_filename_prefix,
    VAR_3->fw_filename);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(&VAR_3->fw, VAR_4, VAR_2->dev);

 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "error: request firmware %s failed err: %d\n",
   VAR_4, VAR_5);
 }

 FUNC_2(VAR_4);

 return VAR_5;
}
