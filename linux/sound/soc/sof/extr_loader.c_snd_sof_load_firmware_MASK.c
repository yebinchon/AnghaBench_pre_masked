
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_dev {int dev; } ;
struct TYPE_2__ {int (* load_firmware ) (struct snd_sof_dev*) ;} ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (struct snd_sof_dev*) ;
 int FUNC_2 (struct snd_sof_dev*) ;

int FUNC_3(struct snd_sof_dev *VAR_0)
{
 FUNC_0(VAR_0->dev, "loading firmware\n");

 if (FUNC_1(VAR_0)->load_firmware)
  return FUNC_1(VAR_0)->load_firmware(VAR_0);
 return 0;
}
