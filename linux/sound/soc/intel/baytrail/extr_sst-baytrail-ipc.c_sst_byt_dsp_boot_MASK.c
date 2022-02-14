
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_pdata {struct sst_byt* dsp; } ;
struct sst_byt {int boot_complete; int dev; int dsp; int fw; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct device *VAR_0, struct sst_pdata *VAR_1)
{
 struct sst_byt *VAR_2 = VAR_1->dsp;
 int VAR_3;

 FUNC_0(VAR_2->dev, "reload dsp fw\n");

 FUNC_3(VAR_2->dsp);

 VAR_3 = FUNC_4(VAR_2->fw);
 if (VAR_3 < 0) {
  FUNC_1(VAR_0, "error: failed to reload firmware\n");
  return VAR_3;
 }


 VAR_2->boot_complete = 0;
 FUNC_2(VAR_2->dsp);
 FUNC_0(VAR_2->dev, "dsp booting...\n");

 return 0;
}
