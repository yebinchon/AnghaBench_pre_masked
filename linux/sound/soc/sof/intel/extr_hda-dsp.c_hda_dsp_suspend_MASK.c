
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dummy; } ;
struct hdac_bus {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_sof_dev*,int) ;
 struct hdac_bus* FUNC_2 (struct snd_sof_dev*) ;

int FUNC_3(struct snd_sof_dev *VAR_0)
{
 struct hdac_bus *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_1(VAR_0, 0);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "error: suspending dsp\n");
  return VAR_2;
 }

 return 0;
}
