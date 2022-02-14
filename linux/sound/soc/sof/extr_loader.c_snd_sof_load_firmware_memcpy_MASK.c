
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_pdata {int * fw; } ;
struct snd_sof_dev {int dev; struct snd_sof_pdata* pdata; } ;


 int FUNC_0 (struct snd_sof_dev*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_sof_dev*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_sof_dev*) ;
 int FUNC_5 (struct snd_sof_dev*) ;

int FUNC_6(struct snd_sof_dev *VAR_0)
{
 struct snd_sof_pdata *VAR_1 = VAR_0->pdata;
 int VAR_2;

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1->fw);
 if (VAR_2 < 0) {
  FUNC_1(VAR_0->dev, "error: invalid FW header\n");
  goto error;
 }


 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 < 0) {
  FUNC_1(VAR_0->dev, "error: failed to reset DSP\n");
  goto error;
 }


 VAR_2 = FUNC_2(VAR_0, VAR_1->fw);
 if (VAR_2 < 0) {
  FUNC_1(VAR_0->dev, "error: invalid FW modules\n");
  goto error;
 }

 return 0;

error:
 FUNC_3(VAR_1->fw);
 VAR_1->fw = ((void*)0);
 return VAR_2;

}
